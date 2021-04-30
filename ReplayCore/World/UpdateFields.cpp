#include "UpdateFields.h"
#include "ObjectDefines.h"
#include <map>
#include <string>

std::map<std::string, uint16> UpdateFields::g_updateFieldValues5875;
std::vector<uint32> UpdateFields::g_containerUpdateFieldFlags5875;
std::vector<uint32> UpdateFields::g_playerUpdateFieldFlags5875;
std::vector<uint32> UpdateFields::g_gameObjectUpdateFieldFlags5875;
std::vector<uint32> UpdateFields::g_dynamicObjectUpdateFieldFlags5875;
std::vector<uint32> UpdateFields::g_corpseObjectUpdateFieldFlags5875;
std::vector<UpdateFieldDefinition>  UpdateFields::g_updateFieldDefinitions5875 =
{
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_GUID"                               , 0x0  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_TYPE"                               , 0x2  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_ENTRY"                              , 0x3  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_SCALE_X"                            , 0x4  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_PADDING"                            , 0x5  , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_OBJECT       , "OBJECT_END"                                      , 0x6  , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EItemFields
    { TYPEMASK_ITEM         , "ITEM_FIELD_OWNER"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CONTAINED"                            , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CREATOR"                              , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_GIFTCREATOR"                          , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_STACK_COUNT"                          , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURATION"                             , 0xF  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_SPELL_CHARGES"                        , 0x10 , 5  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_FLAGS"                                , 0x15 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT"                          , 0x16 , 21 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_PROPERTY_SEED"                        , 0x2B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_RANDOM_PROPERTIES_ID"                 , 0x2C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ITEM_TEXT_ID"                         , 0x2D , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURABILITY"                           , 0x2E , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_MAXDURABILITY"                        , 0x2F , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_END"                                        , 0x30 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EContainerFields
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_NUM_SLOTS"                       , 0x30 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_ALIGN_PAD"                             , 0x31 , 1  , UF_TYPE_BYTES    , UF_FLAG_NONE },
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_SLOT_1"                          , 0x32 , 72 , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_END"                                   , 0x7A , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EUnitFields
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARM"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMON"                               , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARMEDBY"                            , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMONEDBY"                           , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CREATEDBY"                            , 0xE  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_TARGET"                               , 0x10 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PERSUADED"                            , 0x12 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHANNEL_OBJECT"                       , 0x14 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_HEALTH"                               , 0x16 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER1"                               , 0x17 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER2"                               , 0x18 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER3"                               , 0x19 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER4"                               , 0x1A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER5"                               , 0x1B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXHEALTH"                            , 0x1C , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER1"                            , 0x1D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER2"                            , 0x1E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER3"                            , 0x1F , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER4"                            , 0x20 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER5"                            , 0x21 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_LEVEL"                                , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FACTIONTEMPLATE"                      , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_0"                              , 0x24 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_SLOT_DISPLAY"                  , 0x25 , 3  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_INFO"                          , 0x28 , 6  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FLAGS"                                , 0x2E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURA"                                 , 0x2F , 48 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURAFLAGS"                            , 0x5F , 6  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURALEVELS"                           , 0x65 , 12 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURAAPPLICATIONS"                     , 0x71 , 12 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURASTATE"                            , 0x7D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASEATTACKTIME"                       , 0x7E , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGEDATTACKTIME"                     , 0x80 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BOUNDINGRADIUS"                       , 0x81 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_COMBATREACH"                          , 0x82 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_DISPLAYID"                            , 0x83 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NATIVEDISPLAYID"                      , 0x84 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MOUNTDISPLAYID"                       , 0x85 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINDAMAGE"                            , 0x86 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXDAMAGE"                            , 0x87 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINOFFHANDDAMAGE"                     , 0x88 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXOFFHANDDAMAGE"                     , 0x89 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_1"                              , 0x8A , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNUMBER"                            , 0x8B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PET_NAME_TIMESTAMP"                   , 0x8C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETEXPERIENCE"                        , 0x8D , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNEXTLEVELEXP"                      , 0x8E , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_DYNAMIC_FLAGS"                              , 0x8F , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_CHANNEL_SPELL"                              , 0x90 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_MOD_CAST_SPEED"                             , 0x91 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_CREATED_BY_SPELL"                           , 0x92 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_FLAGS"                                  , 0x93 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_EMOTESTATE"                             , 0x94 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_TRAINING_POINTS"                            , 0x95 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT0"                                , 0x96 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT1"                                , 0x97 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT2"                                , 0x98 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT3"                                , 0x99 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT4"                                , 0x9A , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCES"                          , 0x9B , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_MANA"                            , 0xA2 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_HEALTH"                          , 0xA3 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_2"                              , 0xA4 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER"                         , 0xA5 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MODS"                    , 0xA6 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MULTIPLIER"              , 0xA7 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER"                  , 0xA8 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MODS"             , 0xA9 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER"       , 0xAA , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINRANGEDDAMAGE"                      , 0xAB , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXRANGEDDAMAGE"                      , 0xAC , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_COST_MODIFIER"                  , 0xAD , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_COST_MULTIPLIER"                , 0xB4 , 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PADDING"                              , 0xBB , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_UNIT         , "UNIT_END"                                        , 0xBC , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EPlayerFields
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_ARBITER"                             , 0xBC , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FLAGS"                                    , 0xBE , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDID"                                  , 0xBF , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDRANK"                                , 0xC0 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES"                                    , 0xC1 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_2"                                  , 0xC2 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_3"                                  , 0xC3 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_TEAM"                                , 0xC4 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILD_TIMESTAMP"                          , 0xC5 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_1"                            , 0xC6 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_2"                            , 0xC7 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_1"                            , 0xC9 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_2"                            , 0xCA , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_1"                            , 0xCC , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_2"                            , 0xCD , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_1"                            , 0xCF , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_2"                            , 0xD0 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_1"                            , 0xD2 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_2"                            , 0xD3 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_1"                            , 0xD5 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_2"                            , 0xD6 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_1"                            , 0xD8 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_2"                            , 0xD9 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_1"                            , 0xDB , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_2"                            , 0xDC , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_1"                            , 0xDE , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_2"                            , 0xDF , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_1"                           , 0xE1 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_2"                           , 0xE2 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_1"                           , 0xE4 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_2"                           , 0xE5 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_1"                           , 0xE7 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_2"                           , 0xE8 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_1"                           , 0xEA , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_2"                           , 0xEB , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_1"                           , 0xED , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_2"                           , 0xEE , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_1"                           , 0xF0 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_2"                           , 0xF1 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_1"                           , 0xF3 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_2"                           , 0xF4 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_1"                           , 0xF6 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_2"                           , 0xF7 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_1"                           , 0xF9 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_2"                           , 0xFA , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_1"                           , 0xFC , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_2"                           , 0xFD , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_1"                           , 0xFF , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_2"                           , 0x100, 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_CREATOR"                   , 0x102, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_0"                         , 0x104, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_PROPERTIES"                , 0x10C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_PAD"                       , 0x10D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_CREATOR"                   , 0x10E, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_0"                         , 0x110, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_PROPERTIES"                , 0x118, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_PAD"                       , 0x119, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_CREATOR"                   , 0x11A, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_0"                         , 0x11C, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_PROPERTIES"                , 0x124, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_PAD"                       , 0x125, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_CREATOR"                   , 0x126, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_0"                         , 0x128, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_PROPERTIES"                , 0x130, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_PAD"                       , 0x131, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_CREATOR"                   , 0x132, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_0"                         , 0x134, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_PROPERTIES"                , 0x13C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_PAD"                       , 0x13D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_CREATOR"                   , 0x13E, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_0"                         , 0x140, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_PROPERTIES"                , 0x148, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_PAD"                       , 0x149, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_CREATOR"                   , 0x14A, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_0"                         , 0x14C, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_PROPERTIES"                , 0x154, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_PAD"                       , 0x155, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_CREATOR"                   , 0x156, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_0"                         , 0x158, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_PROPERTIES"                , 0x160, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_PAD"                       , 0x161, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_CREATOR"                   , 0x162, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_0"                         , 0x164, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_PROPERTIES"                , 0x16C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_PAD"                       , 0x16D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_CREATOR"                  , 0x16E, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_0"                        , 0x170, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_PROPERTIES"               , 0x178, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_PAD"                      , 0x179, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_CREATOR"                  , 0x17A, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_0"                        , 0x17C, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_PROPERTIES"               , 0x184, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_PAD"                      , 0x185, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_CREATOR"                  , 0x186, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_0"                        , 0x188, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_PROPERTIES"               , 0x190, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_PAD"                      , 0x191, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_CREATOR"                  , 0x192, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_0"                        , 0x194, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_PROPERTIES"               , 0x19C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_PAD"                      , 0x19D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_CREATOR"                  , 0x19E, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_0"                        , 0x1A0, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_PROPERTIES"               , 0x1A8, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_PAD"                      , 0x1A9, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_CREATOR"                  , 0x1AA, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_0"                        , 0x1AC, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_PROPERTIES"               , 0x1B4, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_PAD"                      , 0x1B5, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_CREATOR"                  , 0x1B6, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_0"                        , 0x1B8, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_PROPERTIES"               , 0x1C0, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_PAD"                      , 0x1C1, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_CREATOR"                  , 0x1C2, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_0"                        , 0x1C4, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_PROPERTIES"               , 0x1CC, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_PAD"                      , 0x1CD, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_CREATOR"                  , 0x1CE, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_0"                        , 0x1D0, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_PROPERTIES"               , 0x1D8, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_PAD"                      , 0x1D9, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_CREATOR"                  , 0x1DA, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_0"                        , 0x1DC, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_PROPERTIES"               , 0x1E4, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_PAD"                      , 0x1E5, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_INV_SLOT_HEAD"                      , 0x1E6, 46 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PACK_SLOT_1"                        , 0x214, 32 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANK_SLOT_1"                        , 0x234, 48 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANKBAG_SLOT_1"                     , 0x264, 12 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_VENDORBUYBACK_SLOT_1"               , 0x270, 24 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_KEYRING_SLOT_1"                     , 0x288, 64 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FARSIGHT"                                 , 0x2C8, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER__FIELD_COMBO_TARGET"                      , 0x2CA, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_XP"                                       , 0x2CC, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_NEXT_LEVEL_XP"                            , 0x2CD, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SKILL_INFO_1_1"                           , 0x2CE, 384, UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS1"                        , 0x44E, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS2"                        , 0x44F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_CREATURES"                          , 0x450, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_RESOURCES"                          , 0x451, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_BLOCK_PERCENTAGE"                         , 0x452, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_DODGE_PERCENTAGE"                         , 0x453, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_PARRY_PERCENTAGE"                         , 0x454, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CRIT_PERCENTAGE"                          , 0x455, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_RANGED_CRIT_PERCENTAGE"                   , 0x456, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_EXPLORED_ZONES_1"                         , 0x457, 64 , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_REST_STATE_EXPERIENCE"                    , 0x497, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COINAGE"                            , 0x498, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT0"                           , 0x499, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT1"                           , 0x49A, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT2"                           , 0x49B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT3"                           , 0x49C, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT4"                           , 0x49D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT0"                           , 0x49E, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT1"                           , 0x49F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT2"                           , 0x4A0, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT3"                           , 0x4A1, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT4"                           , 0x4A2, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE"         , 0x4A3, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE"         , 0x4AA, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_POS"                , 0x4B1, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_NEG"                , 0x4B8, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_PCT"                , 0x4BF, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES"                              , 0x4C6, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_AMMO_ID"                                  , 0x4C7, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SELF_RES_SPELL"                           , 0x4C8, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PVP_MEDALS"                         , 0x4C9, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_PRICE_1"                    , 0x4CA, 12 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_TIMESTAMP_1"                , 0x4D6, 12 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_SESSION_KILLS"                      , 0x4E2, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_YESTERDAY_KILLS"                    , 0x4E3, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LAST_WEEK_KILLS"                    , 0x4E4, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_THIS_WEEK_KILLS"                    , 0x4E5, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_THIS_WEEK_CONTRIBUTION"             , 0x4E6, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LIFETIME_HONORBALE_KILLS"           , 0x4E7, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LIFETIME_DISHONORBALE_KILLS"        , 0x4E8, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_YESTERDAY_CONTRIBUTION"             , 0x4E9, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LAST_WEEK_CONTRIBUTION"             , 0x4EA, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LAST_WEEK_RANK"                     , 0x4EB, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES2"                             , 0x4EC, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_WATCHED_FACTION_INDEX"              , 0x4ED, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COMBAT_RATING_1"                    , 0x4EE, 20 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_END"                                      , 0x502, 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EGameObjectFields
    { TYPEMASK_GAMEOBJECT   , "OBJECT_FIELD_CREATED_BY"                         , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DISPLAYID"                            , 0x8  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FLAGS"                                , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ROTATION"                             , 0xA  , 4  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_STATE"                                , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_X"                                , 0xF  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_Y"                                , 0x10 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_Z"                                , 0x11 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACING"                               , 0x12 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DYN_FLAGS"                            , 0x13 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACTION"                              , 0x14 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_TYPE_ID"                              , 0x15 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_LEVEL"                                , 0x16 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ARTKIT"                               , 0x17 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ANIMPROGRESS"                         , 0x18 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_PADDING"                              , 0x19 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_END"                                  , 0x1A , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EDynamicObjectFields
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_CASTER"                            , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_BYTES"                             , 0x8  , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_SPELLID"                           , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_RADIUS"                            , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_X"                             , 0xB  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_Y"                             , 0xC  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_Z"                             , 0xD  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_FACING"                            , 0xE  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_PAD"                               , 0xF  , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_END"                               , 0x10 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum ECorpseFields
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_OWNER"                              , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FACING"                             , 0x8  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_X"                              , 0x9  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_Y"                              , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_Z"                              , 0xB  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DISPLAY_ID"                         , 0xC  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_ITEM"                               , 0xD  , 19 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_1"                            , 0x20 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_2"                            , 0x21 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_GUILD"                              , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FLAGS"                              , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DYNAMIC_FLAGS"                      , 0x24 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_PAD"                                , 0x25 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_CORPSE       , "CORPSE_END"                                      , 0x26 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
};

std::map<std::string, uint16> UpdateFields::g_updateFieldValues8606;
std::vector<uint32> UpdateFields::g_containerUpdateFieldFlags8606;
std::vector<uint32> UpdateFields::g_playerUpdateFieldFlags8606;
std::vector<uint32> UpdateFields::g_gameObjectUpdateFieldFlags8606;
std::vector<uint32> UpdateFields::g_dynamicObjectUpdateFieldFlags8606;
std::vector<uint32> UpdateFields::g_corpseObjectUpdateFieldFlags8606;
std::vector<UpdateFieldDefinition>  UpdateFields::g_updateFieldDefinitions8606 = 
{
    // enum EObjectFields
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_GUID"                               , 0x0  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_TYPE"                               , 0x2  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_ENTRY"                              , 0x3  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_SCALE_X"                            , 0x4  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_PADDING"                            , 0x5  , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_OBJECT       , "OBJECT_END"                                      , 0x6  , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EItemFields
    { TYPEMASK_ITEM         , "ITEM_FIELD_OWNER"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CONTAINED"                            , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CREATOR"                              , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_GIFTCREATOR"                          , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_STACK_COUNT"                          , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURATION"                             , 0xF  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_SPELL_CHARGES"                        , 0x10 , 5  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_FLAGS"                                , 0x15 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT"                          , 0x16 , 33 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_PROPERTY_SEED"                        , 0x37 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_RANDOM_PROPERTIES_ID"                 , 0x38 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ITEM_TEXT_ID"                         , 0x39 , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURABILITY"                           , 0x3A , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_MAXDURABILITY"                        , 0x3B , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_END"                                        , 0x3C , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EContainerFields
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_NUM_SLOTS"                       , 0x3C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_ALIGN_PAD"                             , 0x3D , 1  , UF_TYPE_BYTES    , UF_FLAG_NONE },
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_SLOT_1"                          , 0x3E , 72 , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_END"                                   , 0x86 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EUnitFields
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARM"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMON"                               , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARMEDBY"                            , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMONEDBY"                           , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CREATEDBY"                            , 0xE  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_TARGET"                               , 0x10 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PERSUADED"                            , 0x12 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHANNEL_OBJECT"                       , 0x14 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_HEALTH"                               , 0x16 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER1"                               , 0x17 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER2"                               , 0x18 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER3"                               , 0x19 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER4"                               , 0x1A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER5"                               , 0x1B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXHEALTH"                            , 0x1C , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER1"                            , 0x1D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER2"                            , 0x1E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER3"                            , 0x1F , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER4"                            , 0x20 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER5"                            , 0x21 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_LEVEL"                                , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FACTIONTEMPLATE"                      , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_0"                              , 0x24 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_SLOT_DISPLAY"                  , 0x25 , 3  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_INFO"                          , 0x28 , 6  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FLAGS"                                , 0x2E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FLAGS_2"                              , 0x2F , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURA"                                 , 0x30 , 56 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURAFLAGS"                            , 0x68 , 14 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURALEVELS"                           , 0x76 , 14 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURAAPPLICATIONS"                     , 0x84 , 14 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURASTATE"                            , 0x92 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASEATTACKTIME"                       , 0x93 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGEDATTACKTIME"                     , 0x95 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BOUNDINGRADIUS"                       , 0x96 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_COMBATREACH"                          , 0x97 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_DISPLAYID"                            , 0x98 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NATIVEDISPLAYID"                      , 0x99 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MOUNTDISPLAYID"                       , 0x9A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINDAMAGE"                            , 0x9B , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXDAMAGE"                            , 0x9C , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINOFFHANDDAMAGE"                     , 0x9D , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXOFFHANDDAMAGE"                     , 0x9E , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_1"                              , 0x9F , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNUMBER"                            , 0xA0 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PET_NAME_TIMESTAMP"                   , 0xA1 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETEXPERIENCE"                        , 0xA2 , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNEXTLEVELEXP"                      , 0xA3 , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_DYNAMIC_FLAGS"                              , 0xA4 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_CHANNEL_SPELL"                              , 0xA5 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_MOD_CAST_SPEED"                             , 0xA6 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_CREATED_BY_SPELL"                           , 0xA7 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_FLAGS"                                  , 0xA8 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_EMOTESTATE"                             , 0xA9 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_TRAINING_POINTS"                            , 0xAA , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT0"                                , 0xAB , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT1"                                , 0xAC , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT2"                                , 0xAD , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT3"                                , 0xAE , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT4"                                , 0xAF , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT0"                             , 0xB0 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT1"                             , 0xB1 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT2"                             , 0xB2 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT3"                             , 0xB3 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT4"                             , 0xB4 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT0"                             , 0xB5 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT1"                             , 0xB6 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT2"                             , 0xB7 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT3"                             , 0xB8 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT4"                             , 0xB9 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCES"                          , 0xBA , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE"           , 0xC1 , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE"           , 0xC8 , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_MANA"                            , 0xCF , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_HEALTH"                          , 0xD0 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_2"                              , 0xD1 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER"                         , 0xD2 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MODS"                    , 0xD3 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MULTIPLIER"              , 0xD4 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER"                  , 0xD5 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MODS"             , 0xD6 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER"       , 0xD7 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINRANGEDDAMAGE"                      , 0xD8 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXRANGEDDAMAGE"                      , 0xD9 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_COST_MODIFIER"                  , 0xDA , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_COST_MULTIPLIER"                , 0xE1 , 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXHEALTHMODIFIER"                    , 0xE8 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PADDING"                              , 0xE9 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_UNIT         , "UNIT_END"                                        , 0xEA , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EPlayerFields
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_ARBITER"                             , 0xEA , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FLAGS"                                    , 0xEC , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDID"                                  , 0xED , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDRANK"                                , 0xEE , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES"                                    , 0xEF , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_2"                                  , 0xF0 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_3"                                  , 0xF1 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_TEAM"                                , 0xF2 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILD_TIMESTAMP"                          , 0xF3 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_1"                            , 0xF4 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_2"                            , 0xF5 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_3"                            , 0xF6 , 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_4"                            , 0xF7 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_1"                            , 0xF8 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_2"                            , 0xF9 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_3"                            , 0xFA , 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_4"                            , 0xFB , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_1"                            , 0xFC , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_2"                            , 0xFD , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_3"                            , 0xFE , 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_4"                            , 0xFF , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_1"                            , 0x100, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_2"                            , 0x101, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_3"                            , 0x102, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_4"                            , 0x103, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_1"                            , 0x104, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_2"                            , 0x105, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_3"                            , 0x106, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_4"                            , 0x107, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_1"                            , 0x108, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_2"                            , 0x109, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_3"                            , 0x10A, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_4"                            , 0x10B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_1"                            , 0x10C, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_2"                            , 0x10D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_3"                            , 0x10E, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_4"                            , 0x10F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_1"                            , 0x110, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_2"                            , 0x111, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_3"                            , 0x112, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_4"                            , 0x113, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_1"                            , 0x114, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_2"                            , 0x115, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_3"                            , 0x116, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_4"                            , 0x117, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_1"                           , 0x118, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_2"                           , 0x119, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_3"                           , 0x11A, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_4"                           , 0x11B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_1"                           , 0x11C, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_2"                           , 0x11D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_3"                           , 0x11E, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_4"                           , 0x11F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_1"                           , 0x120, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_2"                           , 0x121, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_3"                           , 0x122, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_4"                           , 0x123, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_1"                           , 0x124, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_2"                           , 0x125, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_3"                           , 0x126, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_4"                           , 0x127, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_1"                           , 0x128, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_2"                           , 0x129, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_3"                           , 0x12A, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_4"                           , 0x12B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_1"                           , 0x12C, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_2"                           , 0x12D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_3"                           , 0x12E, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_4"                           , 0x12F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_1"                           , 0x130, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_2"                           , 0x131, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_3"                           , 0x132, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_4"                           , 0x133, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_1"                           , 0x134, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_2"                           , 0x135, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_3"                           , 0x136, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_4"                           , 0x137, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_1"                           , 0x138, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_2"                           , 0x139, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_3"                           , 0x13A, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_4"                           , 0x13B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_1"                           , 0x13C, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_2"                           , 0x13D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_3"                           , 0x13E, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_4"                           , 0x13F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_1"                           , 0x140, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_2"                           , 0x141, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_3"                           , 0x142, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_4"                           , 0x143, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_1"                           , 0x144, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_2"                           , 0x145, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_3"                           , 0x146, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_4"                           , 0x147, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_1"                           , 0x148, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_2"                           , 0x149, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_3"                           , 0x14A, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_4"                           , 0x14B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_1"                           , 0x14C, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_2"                           , 0x14D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_3"                           , 0x14E, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_4"                           , 0x14F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_1"                           , 0x150, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_2"                           , 0x151, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_3"                           , 0x152, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_4"                           , 0x153, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_1"                           , 0x154, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_2"                           , 0x155, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_3"                           , 0x156, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_4"                           , 0x157, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_CREATOR"                   , 0x158, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_0"                         , 0x15A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_PROPERTIES"                , 0x166, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_PAD"                       , 0x167, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_CREATOR"                   , 0x168, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_0"                         , 0x16A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_PROPERTIES"                , 0x176, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_PAD"                       , 0x177, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_CREATOR"                   , 0x178, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_0"                         , 0x17A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_PROPERTIES"                , 0x186, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_PAD"                       , 0x187, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_CREATOR"                   , 0x188, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_0"                         , 0x18A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_PROPERTIES"                , 0x196, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_PAD"                       , 0x197, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_CREATOR"                   , 0x198, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_0"                         , 0x19A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_PROPERTIES"                , 0x1A6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_PAD"                       , 0x1A7, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_CREATOR"                   , 0x1A8, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_0"                         , 0x1AA, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_PROPERTIES"                , 0x1B6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_PAD"                       , 0x1B7, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_CREATOR"                   , 0x1B8, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_0"                         , 0x1BA, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_PROPERTIES"                , 0x1C6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_PAD"                       , 0x1C7, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_CREATOR"                   , 0x1C8, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_0"                         , 0x1CA, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_PROPERTIES"                , 0x1D6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_PAD"                       , 0x1D7, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_CREATOR"                   , 0x1D8, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_0"                         , 0x1DA, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_PROPERTIES"                , 0x1E6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_PAD"                       , 0x1E7, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_CREATOR"                  , 0x1E8, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_0"                        , 0x1EA, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_PROPERTIES"               , 0x1F6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_PAD"                      , 0x1F7, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_CREATOR"                  , 0x1F8, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_0"                        , 0x1FA, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_PROPERTIES"               , 0x206, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_PAD"                      , 0x207, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_CREATOR"                  , 0x208, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_0"                        , 0x20A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_PROPERTIES"               , 0x216, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_PAD"                      , 0x217, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_CREATOR"                  , 0x218, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_0"                        , 0x21A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_PROPERTIES"               , 0x226, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_PAD"                      , 0x227, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_CREATOR"                  , 0x228, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_0"                        , 0x22A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_PROPERTIES"               , 0x236, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_PAD"                      , 0x237, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_CREATOR"                  , 0x238, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_0"                        , 0x23A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_PROPERTIES"               , 0x246, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_PAD"                      , 0x247, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_CREATOR"                  , 0x248, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_0"                        , 0x24A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_PROPERTIES"               , 0x256, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_PAD"                      , 0x257, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_CREATOR"                  , 0x258, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_0"                        , 0x25A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_PROPERTIES"               , 0x266, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_PAD"                      , 0x267, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_CREATOR"                  , 0x268, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_0"                        , 0x26A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_PROPERTIES"               , 0x276, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_PAD"                      , 0x277, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_CREATOR"                  , 0x278, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_0"                        , 0x27A, 12 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_PROPERTIES"               , 0x286, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_PAD"                      , 0x287, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_CHOSEN_TITLE"                             , 0x288, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PAD_0"                              , 0x289, 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_INV_SLOT_HEAD"                      , 0x28A, 46 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PACK_SLOT_1"                        , 0x2B8, 32 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANK_SLOT_1"                        , 0x2D8, 56 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANKBAG_SLOT_1"                     , 0x310, 14 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_VENDORBUYBACK_SLOT_1"               , 0x31E, 24 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_KEYRING_SLOT_1"                     , 0x336, 64 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_VANITYPET_SLOT_1"                   , 0x376, 36 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FARSIGHT"                                 , 0x39A, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER__FIELD_KNOWN_TITLES"                      , 0x39C, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_XP"                                       , 0x39E, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_NEXT_LEVEL_XP"                            , 0x39F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SKILL_INFO_1_1"                           , 0x3A0, 384, UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS1"                        , 0x520, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS2"                        , 0x521, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_CREATURES"                          , 0x522, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_RESOURCES"                          , 0x523, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_BLOCK_PERCENTAGE"                         , 0x524, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_DODGE_PERCENTAGE"                         , 0x525, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_PARRY_PERCENTAGE"                         , 0x526, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_EXPERTISE"                                , 0x527, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_OFFHAND_EXPERTISE"                        , 0x528, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CRIT_PERCENTAGE"                          , 0x529, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_RANGED_CRIT_PERCENTAGE"                   , 0x52A, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_OFFHAND_CRIT_PERCENTAGE"                  , 0x52B, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SPELL_CRIT_PERCENTAGE1"                   , 0x52C, 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SHIELD_BLOCK"                             , 0x533, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_EXPLORED_ZONES_1"                         , 0x534, 128, UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_REST_STATE_EXPERIENCE"                    , 0x5B4, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COINAGE"                            , 0x5B5, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_POS"                , 0x5B6, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_NEG"                , 0x5BD, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_PCT"                , 0x5C4, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_HEALING_DONE_POS"               , 0x5CB, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_TARGET_RESISTANCE"              , 0x5CC, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE"     , 0x5CD, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES"                              , 0x5CE, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_AMMO_ID"                                  , 0x5CF, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SELF_RES_SPELL"                           , 0x5D0, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PVP_MEDALS"                         , 0x5D1, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_PRICE_1"                    , 0x5D2, 12 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_TIMESTAMP_1"                , 0x5DE, 12 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_KILLS"                              , 0x5EA, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_TODAY_CONTRIBUTION"                 , 0x5EB, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_YESTERDAY_CONTRIBUTION"             , 0x5EC, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LIFETIME_HONORBALE_KILLS"           , 0x5ED, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES2"                             , 0x5EE, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_WATCHED_FACTION_INDEX"              , 0x5EF, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COMBAT_RATING_1"                    , 0x5F0, 24 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_ARENA_TEAM_INFO_1_1"                , 0x608, 18 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_HONOR_CURRENCY"                     , 0x61A, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_ARENA_CURRENCY"                     , 0x61B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_MANA_REGEN"                     , 0x61C, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_MANA_REGEN_INTERRUPT"           , 0x61D, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MAX_LEVEL"                          , 0x61E, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_DAILY_QUESTS_1"                     , 0x61F, 25 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_END"                                      , 0x638, 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EGameObjectFields
    { TYPEMASK_GAMEOBJECT   , "OBJECT_FIELD_CREATED_BY"                         , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DISPLAYID"                            , 0x8  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FLAGS"                                , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ROTATION"                             , 0xA  , 4  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_STATE"                                , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_X"                                , 0xF  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_Y"                                , 0x10 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_Z"                                , 0x11 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACING"                               , 0x12 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DYN_FLAGS"                            , 0x13 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACTION"                              , 0x14 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_TYPE_ID"                              , 0x15 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_LEVEL"                                , 0x16 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ARTKIT"                               , 0x17 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ANIMPROGRESS"                         , 0x18 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_PADDING"                              , 0x19 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_END"                                  , 0x1A , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EDynamicObjectFields
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_CASTER"                            , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_BYTES"                             , 0x8  , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_SPELLID"                           , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_RADIUS"                            , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_X"                             , 0xB  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_Y"                             , 0xC  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_Z"                             , 0xD  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_FACING"                            , 0xE  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_CASTTIME"                          , 0xF  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_END"                               , 0x10 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum ECorpseFields
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_OWNER"                              , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_PARTY"                              , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FACING"                             , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_X"                              , 0xB  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_Y"                              , 0xC  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_Z"                              , 0xD  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DISPLAY_ID"                         , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_ITEM"                               , 0xF  , 19 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_1"                            , 0x22 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_2"                            , 0x23 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_GUILD"                              , 0x24 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FLAGS"                              , 0x25 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DYNAMIC_FLAGS"                      , 0x26 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_PAD"                                , 0x27 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_CORPSE       , "CORPSE_END"                                      , 0x28 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
};

std::map<std::string, uint16> UpdateFields::g_updateFieldValues12340;
std::vector<uint32> UpdateFields::g_containerUpdateFieldFlags12340;
std::vector<uint32> UpdateFields::g_playerUpdateFieldFlags12340;
std::vector<uint32> UpdateFields::g_gameObjectUpdateFieldFlags12340;
std::vector<uint32> UpdateFields::g_dynamicObjectUpdateFieldFlags12340;
std::vector<uint32> UpdateFields::g_corpseObjectUpdateFieldFlags12340;
std::vector<UpdateFieldDefinition>  UpdateFields::g_updateFieldDefinitions12340 =
{
    // enum EObjectFields
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_GUID"                               , 0x0  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_TYPE"                               , 0x2  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_ENTRY"                              , 0x3  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_SCALE_X"                            , 0x4  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_PADDING"                            , 0x5  , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_OBJECT       , "OBJECT_END"                                      , 0x6  , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EItemFields
    { TYPEMASK_ITEM         , "ITEM_FIELD_OWNER"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CONTAINED"                            , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CREATOR"                              , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_GIFTCREATOR"                          , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_STACK_COUNT"                          , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURATION"                             , 0xF  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_SPELL_CHARGES"                        , 0x10 , 5  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_FLAGS"                                , 0x15 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_1_1"                      , 0x16 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_1_3"                      , 0x18 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_2_1"                      , 0x19 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_2_3"                      , 0x1B , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_3_1"                      , 0x1C , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_3_3"                      , 0x1E , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_4_1"                      , 0x1F , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_4_3"                      , 0x21 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_5_1"                      , 0x22 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_5_3"                      , 0x24 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_6_1"                      , 0x25 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_6_3"                      , 0x27 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_7_1"                      , 0x28 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_7_3"                      , 0x2A , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_8_1"                      , 0x2B , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_8_3"                      , 0x2D , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_9_1"                      , 0x2E , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_9_3"                      , 0x30 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_10_1"                     , 0x31 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_10_3"                     , 0x33 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_11_1"                     , 0x34 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_11_3"                     , 0x36 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_12_1"                     , 0x37 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT_12_3"                     , 0x39 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_PROPERTY_SEED"                        , 0x3A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_RANDOM_PROPERTIES_ID"                 , 0x3B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURABILITY"                           , 0x3C , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_MAXDURABILITY"                        , 0x3D , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CREATE_PLAYED_TIME"                   , 0x3E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_PAD"                                  , 0x3F , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_ITEM         , "ITEM_END"                                        , 0x40 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EContainerFields
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_NUM_SLOTS"                       , 0x40 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_ALIGN_PAD"                             , 0x41 , 1  , UF_TYPE_BYTES    , UF_FLAG_NONE },
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_SLOT_1"                          , 0x42 , 72 , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_END"                                   , 0x8A , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EUnitFields
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARM"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMON"                               , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CRITTER"                              , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARMEDBY"                            , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMONEDBY"                           , 0xE  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CREATEDBY"                            , 0x10 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_TARGET"                               , 0x12 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHANNEL_OBJECT"                       , 0x14 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_CHANNEL_SPELL"                              , 0x16 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_0"                              , 0x17 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_HEALTH"                               , 0x18 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER1"                               , 0x19 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER2"                               , 0x1A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER3"                               , 0x1B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER4"                               , 0x1C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER5"                               , 0x1D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER6"                               , 0x1E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER7"                               , 0x1F , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXHEALTH"                            , 0x20 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER1"                            , 0x21 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER2"                            , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER3"                            , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER4"                            , 0x24 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER5"                            , 0x25 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER6"                            , 0x26 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER7"                            , 0x27 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER"            , 0x28 , 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER", 0x2F , 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_LEVEL"                                , 0x36 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FACTIONTEMPLATE"                      , 0x37 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_SLOT_ID"                       , 0x38 , 3  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FLAGS"                                , 0x3B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FLAGS_2"                              , 0x3C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURASTATE"                            , 0x3D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASEATTACKTIME"                       , 0x3E , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGEDATTACKTIME"                     , 0x40 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BOUNDINGRADIUS"                       , 0x41 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_COMBATREACH"                          , 0x42 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_DISPLAYID"                            , 0x43 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NATIVEDISPLAYID"                      , 0x44 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MOUNTDISPLAYID"                       , 0x45 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINDAMAGE"                            , 0x46 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXDAMAGE"                            , 0x47 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINOFFHANDDAMAGE"                     , 0x48 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXOFFHANDDAMAGE"                     , 0x49 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_1"                              , 0x4A , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNUMBER"                            , 0x4B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PET_NAME_TIMESTAMP"                   , 0x4C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETEXPERIENCE"                        , 0x4D , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNEXTLEVELEXP"                      , 0x4E , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_DYNAMIC_FLAGS"                              , 0x4F , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_MOD_CAST_SPEED"                             , 0x50 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_CREATED_BY_SPELL"                           , 0x51 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_FLAGS"                                  , 0x52 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_EMOTESTATE"                             , 0x53 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT0"                                , 0x54 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT1"                                , 0x55 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT2"                                , 0x56 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT3"                                , 0x57 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT4"                                , 0x58 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT0"                             , 0x59 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT1"                             , 0x5A , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT2"                             , 0x5B , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT3"                             , 0x5C , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POSSTAT4"                             , 0x5D , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT0"                             , 0x5E , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT1"                             , 0x5F , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT2"                             , 0x60 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT3"                             , 0x61 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NEGSTAT4"                             , 0x62 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCES"                          , 0x63 , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE"           , 0x6A , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE"           , 0x71 , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_MANA"                            , 0x78 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_HEALTH"                          , 0x79 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_2"                              , 0x7A , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER"                         , 0x7B , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MODS"                    , 0x7C , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MULTIPLIER"              , 0x7D , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER"                  , 0x7E , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MODS"             , 0x7F , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER"       , 0x80 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINRANGEDDAMAGE"                      , 0x81 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXRANGEDDAMAGE"                      , 0x82 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_COST_MODIFIER"                  , 0x83 , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER_COST_MULTIPLIER"                , 0x8A , 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXHEALTHMODIFIER"                    , 0x91 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_HOVERHEIGHT"                          , 0x92 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PADDING"                              , 0x93 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_UNIT         , "UNIT_END"                                        , 0x94 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EPlayerFields
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_ARBITER"                             , 0x94 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FLAGS"                                    , 0x96 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDID"                                  , 0x97 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDRANK"                                , 0x98 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES"                                    , 0x99 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_2"                                  , 0x9A , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_3"                                  , 0x9B , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_TEAM"                                , 0x9C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILD_TIMESTAMP"                          , 0x9D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_1"                            , 0x9E , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_2"                            , 0x9F , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_3"                            , 0xA0 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_4"                            , 0xA2 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_1"                            , 0xA3 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_2"                            , 0xA4 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_3"                            , 0xA5 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_5"                            , 0xA7 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_1"                            , 0xA8 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_2"                            , 0xA9 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_3"                            , 0xAA , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_5"                            , 0xAC , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_1"                            , 0xAD , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_2"                            , 0xAE , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_3"                            , 0xAF , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_5"                            , 0xB1 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_1"                            , 0xB2 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_2"                            , 0xB3 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_3"                            , 0xB4 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_5"                            , 0xB6 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_1"                            , 0xB7 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_2"                            , 0xB8 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_3"                            , 0xB9 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_5"                            , 0xBB , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_1"                            , 0xBC , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_2"                            , 0xBD , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_3"                            , 0xBE , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_5"                            , 0xC0 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_1"                            , 0xC1 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_2"                            , 0xC2 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_3"                            , 0xC3 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_5"                            , 0xC5 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_1"                            , 0xC6 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_2"                            , 0xC7 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_3"                            , 0xC8 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_5"                            , 0xCA , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_1"                           , 0xCB , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_2"                           , 0xCC , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_3"                           , 0xCD , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_5"                           , 0xCF , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_1"                           , 0xD0 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_2"                           , 0xD1 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_3"                           , 0xD2 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_5"                           , 0xD4 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_1"                           , 0xD5 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_2"                           , 0xD6 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_3"                           , 0xD7 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_5"                           , 0xD9 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_1"                           , 0xDA , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_2"                           , 0xDB , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_3"                           , 0xDC , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_5"                           , 0xDE , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_1"                           , 0xDF , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_2"                           , 0xE0 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_3"                           , 0xE1 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_5"                           , 0xE3 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_1"                           , 0xE4 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_2"                           , 0xE5 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_3"                           , 0xE6 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_5"                           , 0xE8 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_1"                           , 0xE9 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_2"                           , 0xEA , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_3"                           , 0xEB , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_5"                           , 0xED , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_1"                           , 0xEE , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_2"                           , 0xEF , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_3"                           , 0xF0 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_5"                           , 0xF2 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_1"                           , 0xF3 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_2"                           , 0xF4 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_3"                           , 0xF5 , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_5"                           , 0xF7 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_1"                           , 0xF8 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_2"                           , 0xF9 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_3"                           , 0xFA , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_5"                           , 0xFC , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_1"                           , 0xFD , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_2"                           , 0xFE , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_3"                           , 0xFF , 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_5"                           , 0x101, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_1"                           , 0x102, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_2"                           , 0x103, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_3"                           , 0x104, 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_21_5"                           , 0x106, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_1"                           , 0x107, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_2"                           , 0x108, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_3"                           , 0x109, 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_22_5"                           , 0x10B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_1"                           , 0x10C, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_2"                           , 0x10D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_3"                           , 0x10E, 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_23_5"                           , 0x110, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_1"                           , 0x111, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_2"                           , 0x112, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_3"                           , 0x113, 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_24_5"                           , 0x115, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_1"                           , 0x116, 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_2"                           , 0x117, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_3"                           , 0x118, 2  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_25_5"                           , 0x11A, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_ENTRYID"                   , 0x11B, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_ENCHANTMENT"               , 0x11C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_ENTRYID"                   , 0x11D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_ENCHANTMENT"               , 0x11E, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_ENTRYID"                   , 0x11F, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_ENCHANTMENT"               , 0x120, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_ENTRYID"                   , 0x121, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_ENCHANTMENT"               , 0x122, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_ENTRYID"                   , 0x123, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_ENCHANTMENT"               , 0x124, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_ENTRYID"                   , 0x125, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_ENCHANTMENT"               , 0x126, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_ENTRYID"                   , 0x127, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_ENCHANTMENT"               , 0x128, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_ENTRYID"                   , 0x129, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_ENCHANTMENT"               , 0x12A, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_ENTRYID"                   , 0x12B, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_ENCHANTMENT"               , 0x12C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_ENTRYID"                  , 0x12D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_ENCHANTMENT"              , 0x12E, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_ENTRYID"                  , 0x12F, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_ENCHANTMENT"              , 0x130, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_ENTRYID"                  , 0x131, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_ENCHANTMENT"              , 0x132, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_ENTRYID"                  , 0x133, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_ENCHANTMENT"              , 0x134, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_ENTRYID"                  , 0x135, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_ENCHANTMENT"              , 0x136, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_ENTRYID"                  , 0x137, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_ENCHANTMENT"              , 0x138, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_ENTRYID"                  , 0x139, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_ENCHANTMENT"              , 0x13A, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_ENTRYID"                  , 0x13B, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_ENCHANTMENT"              , 0x13C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_ENTRYID"                  , 0x13D, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_ENCHANTMENT"              , 0x13E, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_ENTRYID"                  , 0x13F, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_ENCHANTMENT"              , 0x140, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_CHOSEN_TITLE"                             , 0x141, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FAKE_INEBRIATION"                         , 0x142, 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PAD_0"                              , 0x143, 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_INV_SLOT_HEAD"                      , 0x144, 46 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PACK_SLOT_1"                        , 0x172, 32 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANK_SLOT_1"                        , 0x192, 56 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANKBAG_SLOT_1"                     , 0x1CA, 14 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_VENDORBUYBACK_SLOT_1"               , 0x1D8, 24 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_KEYRING_SLOT_1"                     , 0x1F0, 64 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_CURRENCYTOKEN_SLOT_1"               , 0x230, 64 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FARSIGHT"                                 , 0x270, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER__FIELD_KNOWN_TITLES"                      , 0x272, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER__FIELD_KNOWN_TITLES1"                     , 0x274, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER__FIELD_KNOWN_TITLES2"                     , 0x276, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_KNOWN_CURRENCIES"                   , 0x278, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_XP"                                       , 0x27A, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_NEXT_LEVEL_XP"                            , 0x27B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SKILL_INFO_1_1"                           , 0x27C, 384, UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS1"                        , 0x3FC, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS2"                        , 0x3FD, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_CREATURES"                          , 0x3FE, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_RESOURCES"                          , 0x3FF, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_BLOCK_PERCENTAGE"                         , 0x400, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_DODGE_PERCENTAGE"                         , 0x401, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_PARRY_PERCENTAGE"                         , 0x402, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_EXPERTISE"                                , 0x403, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_OFFHAND_EXPERTISE"                        , 0x404, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CRIT_PERCENTAGE"                          , 0x405, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_RANGED_CRIT_PERCENTAGE"                   , 0x406, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_OFFHAND_CRIT_PERCENTAGE"                  , 0x407, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SPELL_CRIT_PERCENTAGE1"                   , 0x408, 7  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SHIELD_BLOCK"                             , 0x40F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SHIELD_BLOCK_CRIT_PERCENTAGE"             , 0x410, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_EXPLORED_ZONES_1"                         , 0x411, 128, UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_REST_STATE_EXPERIENCE"                    , 0x491, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COINAGE"                            , 0x492, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_POS"                , 0x493, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_NEG"                , 0x49A, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_PCT"                , 0x4A1, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_HEALING_DONE_POS"               , 0x4A8, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_HEALING_PCT"                    , 0x4A9, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_HEALING_DONE_PCT"               , 0x4AA, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_TARGET_RESISTANCE"              , 0x4AB, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE"     , 0x4AC, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES"                              , 0x4AD, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_AMMO_ID"                                  , 0x4AE, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SELF_RES_SPELL"                           , 0x4AF, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PVP_MEDALS"                         , 0x4B0, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_PRICE_1"                    , 0x4B1, 12 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_TIMESTAMP_1"                , 0x4BD, 12 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_KILLS"                              , 0x4C9, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_TODAY_CONTRIBUTION"                 , 0x4CA, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_YESTERDAY_CONTRIBUTION"             , 0x4CB, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LIFETIME_HONORBALE_KILLS"           , 0x4CC, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES2"                             , 0x4CD, 1  , UF_TYPE_BYTES2   , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_WATCHED_FACTION_INDEX"              , 0x4CE, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COMBAT_RATING_1"                    , 0x4CF, 25 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_ARENA_TEAM_INFO_1_1"                , 0x4E8, 21 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_HONOR_CURRENCY"                     , 0x4FD, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_ARENA_CURRENCY"                     , 0x4FE, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MAX_LEVEL"                          , 0x4FF, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_DAILY_QUESTS_1"                     , 0x500, 25 , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_RUNE_REGEN_1"                             , 0x519, 4  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_NO_REAGENT_COST_1"                        , 0x51D, 3  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_GLYPH_SLOTS_1"                      , 0x520, 6  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_GLYPHS_1"                           , 0x526, 6  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_GLYPHS_ENABLED"                           , 0x52C, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_PET_SPELL_POWER"                          , 0x52D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_END"                                      , 0x52E, 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EGameObjectFields
    { TYPEMASK_GAMEOBJECT   , "OBJECT_FIELD_CREATED_BY"                         , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DISPLAYID"                            , 0x8  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FLAGS"                                , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_PARENTROTATION"                       , 0xA  , 4  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DYNAMIC"                              , 0xE  , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_DYNAMIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACTION"                              , 0xF  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_LEVEL"                                , 0x10 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_BYTES_1"                              , 0x11 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_END"                                  , 0x12 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EDynamicObjectFields
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_CASTER"                            , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_BYTES"                             , 0x8  , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_SPELLID"                           , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_RADIUS"                            , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_CASTTIME"                          , 0xB  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_END"                               , 0xC  , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum ECorpseFields
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_OWNER"                              , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_PARTY"                              , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DISPLAY_ID"                         , 0xA  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_ITEM"                               , 0xB  , 19 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_1"                            , 0x1E , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_2"                            , 0x1F , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_GUILD"                              , 0x20 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FLAGS"                              , 0x21 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DYNAMIC_FLAGS"                      , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_PAD"                                , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_CORPSE       , "CORPSE_END"                                      , 0x24 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
};

void UpdateFields::SetupUpdateFieldMaps()
{
    assert(g_updateFieldValues5875.empty());
    SetupUpdateFieldValuesMap(g_updateFieldValues5875, g_updateFieldDefinitions5875);
    assert(g_updateFieldValues8606.empty());
    SetupUpdateFieldValuesMap(g_updateFieldValues8606, g_updateFieldDefinitions8606);
    assert(g_updateFieldValues12340.empty());
    SetupUpdateFieldValuesMap(g_updateFieldValues12340, g_updateFieldDefinitions12340);

    assert(g_containerUpdateFieldFlags5875.empty());
    g_containerUpdateFieldFlags5875.resize(GetUpdateFieldValue("CONTAINER_END", 5875));
    assert(g_playerUpdateFieldFlags5875.empty());
    g_playerUpdateFieldFlags5875.resize(GetUpdateFieldValue("PLAYER_END", 5875));
    assert(g_gameObjectUpdateFieldFlags5875.empty());
    g_gameObjectUpdateFieldFlags5875.resize(GetUpdateFieldValue("GAMEOBJECT_END", 5875));
    assert(g_dynamicObjectUpdateFieldFlags5875.empty());
    g_dynamicObjectUpdateFieldFlags5875.resize(GetUpdateFieldValue("DYNAMICOBJECT_END", 5875));
    assert(g_corpseObjectUpdateFieldFlags5875.empty());
    g_corpseObjectUpdateFieldFlags5875.resize(GetUpdateFieldValue("CORPSE_END", 5875));

    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_ITEM | TYPEMASK_CONTAINER, g_containerUpdateFieldFlags5875, g_updateFieldDefinitions5875);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_UNIT | TYPEMASK_PLAYER, g_playerUpdateFieldFlags5875, g_updateFieldDefinitions5875);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_GAMEOBJECT, g_gameObjectUpdateFieldFlags5875, g_updateFieldDefinitions5875);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_DYNAMICOBJECT, g_dynamicObjectUpdateFieldFlags5875, g_updateFieldDefinitions5875);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_CORPSE, g_corpseObjectUpdateFieldFlags5875, g_updateFieldDefinitions5875);

    assert(g_containerUpdateFieldFlags8606.empty());
    g_containerUpdateFieldFlags8606.resize(GetUpdateFieldValue("CONTAINER_END", 8606));
    assert(g_playerUpdateFieldFlags8606.empty());
    g_playerUpdateFieldFlags8606.resize(GetUpdateFieldValue("PLAYER_END", 8606));
    assert(g_gameObjectUpdateFieldFlags8606.empty());
    g_gameObjectUpdateFieldFlags8606.resize(GetUpdateFieldValue("GAMEOBJECT_END", 8606));
    assert(g_dynamicObjectUpdateFieldFlags8606.empty());
    g_dynamicObjectUpdateFieldFlags8606.resize(GetUpdateFieldValue("DYNAMICOBJECT_END", 8606));
    assert(g_corpseObjectUpdateFieldFlags8606.empty());
    g_corpseObjectUpdateFieldFlags8606.resize(GetUpdateFieldValue("CORPSE_END", 8606));

    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_ITEM | TYPEMASK_CONTAINER, g_containerUpdateFieldFlags8606, g_updateFieldDefinitions8606);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_UNIT | TYPEMASK_PLAYER, g_playerUpdateFieldFlags8606, g_updateFieldDefinitions8606);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_GAMEOBJECT, g_gameObjectUpdateFieldFlags8606, g_updateFieldDefinitions8606);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_DYNAMICOBJECT, g_dynamicObjectUpdateFieldFlags8606, g_updateFieldDefinitions8606);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_CORPSE, g_corpseObjectUpdateFieldFlags8606, g_updateFieldDefinitions8606);

    assert(g_containerUpdateFieldFlags12340.empty());
    g_containerUpdateFieldFlags12340.resize(GetUpdateFieldValue("CONTAINER_END", 12340));
    assert(g_playerUpdateFieldFlags12340.empty());
    g_playerUpdateFieldFlags12340.resize(GetUpdateFieldValue("PLAYER_END", 12340));
    assert(g_gameObjectUpdateFieldFlags12340.empty());
    g_gameObjectUpdateFieldFlags12340.resize(GetUpdateFieldValue("GAMEOBJECT_END", 12340));
    assert(g_dynamicObjectUpdateFieldFlags12340.empty());
    g_dynamicObjectUpdateFieldFlags12340.resize(GetUpdateFieldValue("DYNAMICOBJECT_END", 12340));
    assert(g_corpseObjectUpdateFieldFlags12340.empty());
    g_corpseObjectUpdateFieldFlags12340.resize(GetUpdateFieldValue("CORPSE_END", 12340));

    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_ITEM | TYPEMASK_CONTAINER, g_containerUpdateFieldFlags12340, g_updateFieldDefinitions12340);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_UNIT | TYPEMASK_PLAYER, g_playerUpdateFieldFlags12340, g_updateFieldDefinitions12340);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_GAMEOBJECT, g_gameObjectUpdateFieldFlags12340, g_updateFieldDefinitions12340);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_DYNAMICOBJECT, g_dynamicObjectUpdateFieldFlags12340, g_updateFieldDefinitions12340);
    SetupUpdateFieldFlagsVector(TYPEMASK_OBJECT | TYPEMASK_CORPSE, g_corpseObjectUpdateFieldFlags12340, g_updateFieldDefinitions12340);
}

void UpdateFields::SetupUpdateFieldValuesMap(std::map<std::string, uint16>& valuesMap, std::vector<UpdateFieldDefinition> const& definitions)
{
    for (auto const& itr : definitions)
    {
        valuesMap.insert({ itr.name, itr.offset });
    }
}

void UpdateFields::SetupUpdateFieldFlagsVector(uint8 objectTypeMask, std::vector<uint32>& flagsVector, std::vector<UpdateFieldDefinition> const& definitions)
{
    for (auto const& itr : definitions)
    {
        if ((itr.objectTypeMask & objectTypeMask) == 0)
            continue;

        for (uint16 i = itr.offset; i < itr.offset + itr.size; i++)
        {
            flagsVector.at(i) = itr.flags;
        }
    }
}

std::map<std::string, uint16>* UpdateFields::GetUpdateFieldsMapForBuild(uint16 build)
{
    switch (build)
    {
        case 5875:
            return &UpdateFields::g_updateFieldValues5875;
        case 8606:
            return &UpdateFields::g_updateFieldValues8606;
        case 12340:
            return &UpdateFields::g_updateFieldValues12340;
    }
    return nullptr;
}

uint16 UpdateFields::GetUpdateFieldValue(std::string name, uint16 build)
{
    std::map<std::string, uint16>* updateFieldsMap = GetUpdateFieldsMapForBuild(build);
    if (!updateFieldsMap)
        return 0;

    auto itr = updateFieldsMap->find(name);
    if (itr == updateFieldsMap->end())
        return 0;

    return itr->second;
}

std::string UpdateFields::GetUpdateFieldName(uint16 id, uint16 build)
{
    std::map<std::string, uint16>* updateFieldsMap = GetUpdateFieldsMapForBuild(build);
    if (!updateFieldsMap)
        return std::string();

    for (auto const& itr : *updateFieldsMap)
    {
        if (itr.second == id)
            return itr.first;
    }

    return std::string();
}

uint16 UpdateFields::GetUpdateFieldFlags(uint8 objectTypeId, uint16 id, uint16 build)
{
    switch (build)
    {
        case 5875:
        {
            switch (objectTypeId)
            {
                case TYPEID_ITEM:
                case TYPEID_CONTAINER:
                {
                    return g_containerUpdateFieldFlags5875.at(id);
                }
                case TYPEID_UNIT:
                case TYPEID_PLAYER:
                {
                    return g_playerUpdateFieldFlags5875.at(id);
                }
                case TYPEID_GAMEOBJECT:
                {
                    return g_gameObjectUpdateFieldFlags5875.at(id);
                }
                case TYPEID_DYNAMICOBJECT:
                {
                    return g_dynamicObjectUpdateFieldFlags5875.at(id);
                }
                case TYPEID_CORPSE:
                {
                    return g_corpseObjectUpdateFieldFlags5875.at(id);
                }
            }
            printf("Error: Unhandled object type id (%hhu) in GetUpdateFieldFlags!", objectTypeId);
            break;
        }
        case 8606:
        {
            switch (objectTypeId)
            {
                case TYPEID_ITEM:
                case TYPEID_CONTAINER:
                {
                    return g_containerUpdateFieldFlags8606.at(id);
                }
                case TYPEID_UNIT:
                case TYPEID_PLAYER:
                {
                    return g_playerUpdateFieldFlags8606.at(id);
                }
                case TYPEID_GAMEOBJECT:
                {
                    return g_gameObjectUpdateFieldFlags8606.at(id);
                }
                case TYPEID_DYNAMICOBJECT:
                {
                    return g_dynamicObjectUpdateFieldFlags8606.at(id);
                }
                case TYPEID_CORPSE:
                {
                    return g_corpseObjectUpdateFieldFlags8606.at(id);
                }
            }
            printf("Error: Unhandled object type id (%hhu) in GetUpdateFieldFlags!", objectTypeId);
            break;
        }
        case 12340:
        {
            switch (objectTypeId)
            {
                case TYPEID_ITEM:
                case TYPEID_CONTAINER:
                {
                    return g_containerUpdateFieldFlags12340.at(id);
                }
                case TYPEID_UNIT:
                case TYPEID_PLAYER:
                {
                    return g_playerUpdateFieldFlags12340.at(id);
                }
                case TYPEID_GAMEOBJECT:
                {
                    return g_gameObjectUpdateFieldFlags12340.at(id);
                }
                case TYPEID_DYNAMICOBJECT:
                {
                    return g_dynamicObjectUpdateFieldFlags12340.at(id);
                }
                case TYPEID_CORPSE:
                {
                    return g_corpseObjectUpdateFieldFlags12340.at(id);
                }
            }
            printf("Error: Unhandled object type id (%hhu) in GetUpdateFieldFlags!", objectTypeId);
            break;
        }
        default:
        {
            printf("Error: Unsupported client build (%hu) in GetUpdateFieldFlags!", build);
            break;
        }
    }
    return 0;
}