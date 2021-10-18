#include "GUIServer.h"
#include "GUIOpcodes.h"
#include "GUIFilters.h"
#include "../Defines//ByteBuffer.h"
#include "../Defines/Utility.h"
#include "../Input/Config.h"
#include "../World/SniffedEvents.h"
#include "../World/ReplayMgr.h"
#include "../World/WorldServer.h"
#include "../World/ScriptMaker.h"

#pragma comment(lib,"WS2_32")

#define MAX_PACKET_SIZE 65535

GUIServer& GUIServer::Instance()
{
    static GUIServer instance;
    return instance;
}

void GUIServer::StartNetwork()
{
    SetupOpcodeHandlers();

    m_socketPrototype = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    int result = 1;
    if (setsockopt(m_socketPrototype, SOL_SOCKET, SO_REUSEADDR, (const char*)&result, sizeof(result)) < 0)
        perror("[GUI] setsockopt(SO_REUSEADDR) failed");

    m_address.sin_family = AF_INET;
    m_address.sin_port = htons(3800);
    m_address.sin_addr.S_un.S_addr = inet_addr(sConfig.GetListenAddress());

    result = bind(m_socketPrototype, (SOCKADDR*)&m_address, sizeof(m_address));
    if (result == SOCKET_ERROR)
    {
        printf("[GUI] bind error: %i\n", WSAGetLastError());
        return;
    }

    result = listen(m_socketPrototype, 1);
    if (result == SOCKET_ERROR)
    {
        printf("[GUI] listen error: %i\n", WSAGetLastError());
        return;
    }

    m_enabled = true;

    m_networkThread = std::thread(&GUIServer::NetworkLoop, this);
}

void GUIServer::StopNetwork()
{
    m_enabled = false;
    shutdown(m_guiSocket, SD_BOTH);
    closesocket(m_guiSocket);
    shutdown(m_socketPrototype, SD_BOTH);
    closesocket(m_socketPrototype);
}

void GUIServer::NetworkLoop()
{
    do
    {
        ResetClientData();

        printf("[GUI] Waiting for connection...\n");
        int addressSize = sizeof(m_address);
        m_guiSocket = accept(m_socketPrototype, (SOCKADDR*)&m_address, &addressSize);
        if (m_guiSocket == INVALID_SOCKET)
            break;

        printf("[GUI] Connection established!\n");
        SendEventTypesList();

        do
        {
            ByteBuffer buffer;
            buffer.resize(MAX_PACKET_SIZE);
            int result = recv(m_guiSocket, (char*)buffer.contents(), MAX_PACKET_SIZE, 0);
            if (result == SOCKET_ERROR)
            {
                printf("[GUI] recv error: %i\n", WSAGetLastError());
                break;
            }

            if (result == 0)
            {
                printf("[GUI] Connection closed.\n");
                break;
            }

            HandlePacket(buffer);

        } while (m_enabled);

    } while (m_enabled);

    closesocket(m_guiSocket);
}

void GUIServer::ResetClientData()
{

}

void GUIServer::SetupOpcodeHandlers()
{
    m_opcodeHandlers[CMSG_REQUEST_EVENT_DATA] = &GUIServer::HandleRequestEventData;
    m_opcodeHandlers[CMSG_SET_TIME] = &GUIServer::HandleSetTime;
    m_opcodeHandlers[CMSG_GOTO_GUID] = &GUIServer::HandleGoToGuid;
    m_opcodeHandlers[CMSG_MAKE_SCRIPT] = &GUIServer::HandleMakeScript;
}

void GUIServer::HandlePacket(ByteBuffer& buffer)
{
    uint32 opcode;
    buffer >> opcode;

    auto itr = m_opcodeHandlers.find(opcode);
    if (itr == m_opcodeHandlers.end())
    {
        printf("[GUI] Received unhandled opcode %hhu\n", opcode);
        return;
    }

    (this->*(itr->second))(buffer);
}

void GUIServer::SendEventTypesList()
{
    ByteBuffer buffer;
    buffer << uint32(SMSG_EVENT_TYPE_LIST);
    buffer << uint32(sReplayMgr.GetFirstEventTime());
    buffer << uint32(sReplayMgr.GetLastEventTime());
    buffer << uint32(MAX_EVENT_TYPE);
    for (uint32 i = 0; i < MAX_EVENT_TYPE; i++)
    {
        buffer << uint32(i);
        buffer << uint32(GetSniffedEventIcon(i));
        buffer << GetSniffedEventName(SniffedEventType(i));
    }
    send(m_guiSocket, (const char*)buffer.contents(), buffer.size(), 0);
}

void GUIServer::HandleRequestEventData(ByteBuffer& buffer)
{
    uint32 startTime;
    buffer >> startTime;
    uint32 endTime;
    buffer >> endTime;
    uint32 objectsCount;
    buffer >> objectsCount;

    std::vector<ObjectFilterEntry> objectFilters;
    for (uint32 i = 0; i < objectsCount; i++)
    {
        ObjectFilterEntry objectFilter;
        buffer >> objectFilter.guid;
        buffer >> objectFilter.id;
        buffer >> objectFilter.type;

        uint32 eventsCount;
        buffer >> eventsCount;

        for (uint32 j = 0; j < eventsCount; j++)
        {
            uint32 eventType;
            buffer >> eventType;
            objectFilter.eventTypes.insert(eventType);
        }
        objectFilters.push_back(objectFilter);
    }

    std::vector<std::pair<uint64, std::shared_ptr<SniffedEvent>>> eventsList;
    sReplayMgr.GetEventsListForTargets(startTime, endTime, objectFilters, eventsList);
    SendEventDataList(eventsList);
}

void GUIServer::SendEventDataList(std::vector<std::pair<uint64, std::shared_ptr<SniffedEvent>>> const& eventsList)
{
    uint32 eventsWrittenTotal = 0;
    while (eventsWrittenTotal < eventsList.size())
    {
        ByteBuffer buffer;
        buffer << uint32(SMSG_EVENT_DATA_LIST);

        uint32 countPos = buffer.wpos();
        buffer << uint32(0);

        uint32 eventsWritten = 0;
        uint32 packetSize = sizeof(uint32) + sizeof(uint32);
        for (uint32 i = eventsWrittenTotal; i < eventsList.size(); i++)
        {
            std::pair<uint64, std::shared_ptr<SniffedEvent>> const& itr = eventsList[i];
            std::string shortDescription = itr.second->GetShortDescription();
            std::string longDescription = itr.second->GetLongDescription();

            uint32 neededSpace =
                sizeof(uint32) + // unique identifier
                sizeof(uint32) + // event type
                sizeof(uint64) + // unit time ms
                sizeof(uint64) + // source guid
                sizeof(uint64) + // target guid
                shortDescription.size() + sizeof(uint8) +
                longDescription.size() + sizeof(uint8);

            if (packetSize + neededSpace >= MAX_PACKET_SIZE)
                break;

            buffer << uint32(itr.second->m_uniqueIdentifier);
            buffer << uint32(itr.second->GetType());
            buffer << uint64(itr.first);
            buffer << uint64(itr.second->GetSourceGuid().GetRawValue());
            buffer << uint64(itr.second->GetTargetGuid().GetRawValue());
            buffer << shortDescription;
            buffer << longDescription;
            packetSize += neededSpace;
            eventsWritten++;
            eventsWrittenTotal++;
        }

        printf("[GUI] Sending %u bytes of data.\n", buffer.size());
        buffer.put<uint32>(countPos, eventsWritten);
        send(m_guiSocket, (const char*)buffer.contents(), buffer.size(), 0);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    ByteBuffer buffer;
    buffer << uint32(SMSG_EVENT_DATA_END);
    send(m_guiSocket, (const char*)buffer.contents(), buffer.size(), 0);
}

void GUIServer::HandleSetTime(ByteBuffer& buffer)
{
    uint32 unixTime;
    buffer >> unixTime;
    std::string command = "settime " + std::to_string(unixTime);
    sWorld.SetPendingChatCommand(command);
}

void GUIServer::HandleGoToGuid(ByteBuffer& buffer)
{
    ObjectGuid guid;
    buffer >> guid;

    if (WorldObject const* pObject = sWorld.FindObject(guid))
        sWorld.TeleportClient(pObject->GetLocation());
    else if (WorldObjectData const* pData = sReplayMgr.GetObjectSpawnData(guid))
        sWorld.TeleportClient(pData->GetLocation());
    else
        printf("[GUI] Cannot teleport to unknown guid %s.\n", guid.GetString().c_str());
}

void GUIServer::HandleMakeScript(ByteBuffer& buffer)
{
    uint32 mainScriptId;
    buffer >> mainScriptId;
    std::string tableName;
    buffer >> tableName;
    ObjectGuid sourceGuid;
    buffer >> sourceGuid;
    ObjectGuid targetGuid;
    buffer >> targetGuid;
    uint32 eventsCount;
    buffer >> eventsCount;

    std::set<uint32> eventIdentifiers;
    for (uint32 i = 0; i < eventsCount; i++)
    {
        uint32 uniqueIdentifier;
        buffer >> uniqueIdentifier;
        eventIdentifiers.insert(uniqueIdentifier);
    }

    std::vector<std::pair<uint64, std::shared_ptr<SniffedEvent>>> eventsList;
    sReplayMgr.GetEventsListFromIdentifiers(eventIdentifiers, eventsList);

    if (eventsList.empty())
    {
        printf("[GUI] Cannot make script from empty event list.\n");
        return;
    }

    ScriptMaker scriptMaker;
    scriptMaker.MakeScript(mainScriptId, tableName, sourceGuid, targetGuid, eventsList);
}