/*
Copyright (c) 2014-2021 AscEmu Team <http://www.ascemu.org>
This file is released under the MIT license. See README-MIT for more information.
*/

#pragma once

//////////////////////////////////////////////////////////////////////////////////////////
// Allianze & Horde spawns
struct ICCSpawns
{
    uint32_t entry;
    float x;
    float y;
    float z;
    float o;
    uint32_t faction;
};

const ICCSpawns AllySpawns[13] = {
    // Light's Hammer
    { 37190, -47.59f, 2208.98f, 27.99f, 3.12f, 1732 },      // Commander
    { 37190, -47.93f, 2216.32f, 27.99f, 3.12f, 1732 },      // Commander
    { 37190, -46.08f, 2212.61f, 27.99f, 3.12f, 1732 },      // Commander
    { 37119, -48.92f, 2213.55f, 27.99f, 3.23f, 2073 },      // Highlord Tirion Fordring
    { 37200, -48.81f, 2211.06f, 27.99f, 3.14f, 1732 },      // Muradin Bronzebart
    { 39371, -49.00f, 2219.47f, 27.99f, 3.12f, 1733 },      // King Varian Wrynn <King of Stormwind>
    { 37997, -79.44f, 2269.37f, 30.66f, 5.3f, 1732 },       // Yili <Rogue Armor>
    { 37998, -70.96f, 2269.32f, 30.66f, 4.46f, 1732 },      // Talan Moonstrike <Hunter Armor>
    { 37999, -75.84f, 2270.65f, 30.66f, 4.92f, 1732 },      // Alana Moonstrike <Druid Armor>
    { 38182, -63.37f, 2260.46f, 30.65f, 1.83f, 1732 },      // Niby the Almighty <Warlock Armor>
    { 38283, -75.8f, 2283.46f, 32.87f, 4.69f, 1732 },       // Malfus Grimfrost <Mage Armor>
    { 38840, -67.79f, 2270.71f, 30.65f, 4.91f, 1732 },      // Jedebia <Shaman Armor>
    //Ramparts of Skull
    { 37200, -555.96f, 2211.4f, 539.37f, 6.27f, 1732 },      // Muradin Bronzebart
};

const ICCSpawns HordeSpawns[13] = {
    // Light's Hammer
    { 37189, -47.59f, 2208.98f, 27.99f, 3.12f, 1734 },      // General
    { 37189, -47.93f, 2216.32f, 27.99f, 3.12f, 1734 },      // General
    { 37189, -46.08f, 2212.61f, 27.99f, 3.12f, 1734 },      // General
    { 39372, -49.00f, 2219.47f, 27.99f, 3.12f, 1734 },      // Garosh Hellscream
    { 37187, -48.81f, 2211.06f, 27.99f, 3.14f, 1734 },      // Highlord Overloard Saurfang
    { 37119, -48.92f, 2213.55f, 27.99f, 3.23f, 2073 },      // Highlord Tirion Fordring
    { 37991, -79.42f, 2269.39f, 30.65f, 5.62f, 1734 },      // Ikfirus the Vile <Rogue Armor>
    { 37992, -75.76f, 2270.64f, 30.65f, 4.85f, 1734 },      // Tortunok <Druid Armor>
    { 37993, -70.92f, 2269.2f, 30.65f, 4.45f, 1734 },       // Gerardo the Suave <Hunter Armor>
    { 38181, -63.37f, 2260.46f, 30.65f, 1.83f, 1734 },      // Haragg the Unseen <Warlock Armor>
    { 38284, -75.81f, 2283.34f, 32.87f, 4.74f, 1734 },      // Uvlus Banefire <Mage Armor>
    { 38841, -67.77f, 2270.51f, 30.65f, 4.93f, 1734 },      // Vol'guk <Shaman Armor>
    //Ramparts of Skull
    { 37187, -555.96f, 2211.4f, 539.37f, 6.27f, 1734 },      // Highlord Overloard Saurfang
};

//////////////////////////////////////////////////////////////////////////////////////////
// Misc
enum Spells
{
    SPELL_ALLIANCE_PHASE                        = 55774,
    SPELL_HORDE_PHASE                           = 55773,
    SPELL_BERSERK                               = 26662,
    SPELL_BERSERK2                              = 47008,

    // Lord Marrowgar
    SPELL_BONE_SLICE                            = 69055,
    SPELL_BONE_STORM                            = 69076,
    SPELL_BONE_STORM_25                         = 70834,
    SPELL_BONE_STORM_Heroic                     = 70835,
    SPELL_BONE_STORM_Heroic_25                  = 70836,
    SPELL_BONE_STORM_EFFECT                     = 69075,
    SPELL_BONE_SPIKE_GRAVEYARD                  = 69057,
    SPELL_COLDFLAME_NORMAL                      = 69140,
    SPELL_COLDFLAME_DAMAGE                      = 69147,
    SPELL_COLDFLAME_BONE_STORM                  = 72705,

    // Bone Spike
    SPELL_IMPALED                               = 69065,
    SPELL_RIDE_VEHICLE                          = 46598,

    // Coldflame
    SPELL_COLDFLAME_PASSIVE                     = 69145,
    SPELL_COLDFLAME_SUMMON                      = 69147,

    // Lady Deathwhisper
    SPELL_MANA_BARRIER                          = 70842,
    SPELL_SHADOW_BOLT                           = 71254,
    SPELL_DEATH_AND_DECAY                       = 71001,
    SPELL_DOMINATE_MIND_H                       = 71289,
    SPELL_FROSTBOLT                             = 71420,
    SPELL_FROSTBOLT_VOLLEY                      = 72905,
    SPELL_TOUCH_OF_INSIGNIFICANCE               = 71204,
    SPELL_SUMMON_SHADE                          = 71363,
    SPELL_SHADOW_CHANNELING                     = 43897, // Prefight, during intro
    SPELL_DARK_TRANSFORMATION_T                 = 70895,
    SPELL_DARK_EMPOWERMENT_T                    = 70896,
    SPELL_DARK_MARTYRDOM_T                      = 70897,

    // Both Adds
    SPELL_TELEPORT_VISUAL                       = 41236,

    // Fanatics
    SPELL_DARK_TRANSFORMATION                   = 70900,
    SPELL_NECROTIC_STRIKE                       = 70659,
    SPELL_SHADOW_CLEAVE                         = 70670,
    SPELL_VAMPIRIC_MIGHT                        = 70674,
    SPELL_FANATIC_S_DETERMINATION               = 71235,
    SPELL_DARK_MARTYRDOM_FANATIC                = 71236,

    //  Adherents
    SPELL_DARK_EMPOWERMENT                      = 70901,
    SPELL_FROST_FEVER                           = 67767,
    SPELL_DEATHCHILL_BOLT                       = 70594,
    SPELL_DEATHCHILL_BLAST                      = 70906,
    SPELL_CURSE_OF_TORPOR                       = 71237,
    SPELL_SHORUD_OF_THE_OCCULT                  = 70768,
    SPELL_ADHERENT_S_DETERMINATION              = 71234,
    SPELL_DARK_MARTYRDOM_ADHERENT               = 70903,

    // Vengeful Shade
    SPELL_VENGEFUL_BLAST                        = 71544,
    SPELL_VENGEFUL_BLAST_PASSIVE                = 71494,
    SPELL_VENGEFUL_BLAST_25N                    = 72010,
    SPELL_VENGEFUL_BLAST_10H                    = 72011,
    SPELL_VENGEFUL_BLAST_25H                    = 72012,

    // Darnavan
    SPELL_BLADESTORM                            = 65947,
    SPELL_CHARGE                                = 65927,
    SPELL_INTIMIDATING_SHOUT                    = 65930,
    SPELL_MORTAL_STRIKE                         = 65926,
    SPELL_SHATTERING_THROW                      = 65940,
    SPELL_SUNDER_ARMOR                          = 65936,

    // Rotting Frost Giant
    SPELL_DEATH_PLAGUE                          = 72879,
    SPELL_DEATH_PLAGUE_AURA                     = 72865,
    SPELL_RECENTLY_INFECTED                     = 72884,
    SPELL_DEATH_PLAGUE_KILL                     = 72867,
    SPELL_STOMP                                 = 64652,
    SPELL_ARCTIC_BREATH                         = 72848,

    // Gunship Battle
    SPELL_BURNING_PITCH_A = 71335,
    SPELL_BURNING_PITCH_H = 71339,
    SPELL_BURNING_PITCH_SIEGE_DMG_A = 70383,
    SPELL_BURNING_PITCH_SIEGE_DMG_H = 70374,
    SPELL_BURNING_PITCH_AOE_DAMAGE = 69660,

    SPELL_WOUNDING_STRIKE_10_NM = 69651,
    SPELL_WOUNDING_STRIKE_10_HM = 72570,
    SPELL_WOUNDING_STRIKE_25_NM = 72569,
    SPELL_WOUNDING_STRIKE_25_HM = 72571,

    SPELL_TELEPORT_VISUAL_GB = 64446,
    SPELL_BLADESTORM_GB = 69652,
    SPELL_BLADESTORM_TRIGGER = 69653,

    // Cannon
    SPELL_HEAT_DRAIN = 69470,
    SPELL_OVERHEAT = 69487, // Triggers spell #69488 every 0.25s
    SPELL_CANNON_BLAST = 69399,
    SPELL_INCINERATING_BLAST = 69401,

    // Auras
    SPELL_ON_ORGRIMS_HAMMERS_DECK = 70121,
    SPELL_ON_SKYBREAKERS_DECK = 70120,

    // Achievement spell required target
    SPELL_ACHIEVEMENT = 72959,

    // Rampart of Skulls NPCs Spells
    // Kor'kron Primalist
    SPELL_WRATH = 69968,
    SPELL_HEALING_TOUCH = 69899,
    SPELL_REGROWTH = 69882,
    SPELL_REJUVENATION = 69898,

    SPELL_SUMMON_BATTLE_STANDART_A = 69810,
    SPELL_SUMMON_BATTLE_STANDART_H = 69811,

    // Kor'kron Defender
    SPELL_DEVASTATE = 69902,
    SPELL_THUNDERCLAP = 69965,
    SPELL_SUNDER_ARMOR_GB = 57807,
    SPELL_SPELL_REFLECT = 69901,

    // Skybreaker Vindicator
    SPELL_AVENGERS_SHIELD = 69927,
    SPELL_CONCENTRATION = 69930,
    SPELL_HOLY_WRATH = 69934,

    // Frostwyrm
    SPELL_FROST_BREATH = 70116,
    SPELL_BLIZZARD = 70362,
    SPELL_FROST_CLEAVE = 70361,

    // Muradin Bronzebeard / High Overlord Saurfang
    SPELL_CLEAVE = 15284,
    SPELL_RENDING_THROW = 70309,
    SPELL_TASTE_OF_BLOOD = 69634,

    // Kor'kron Battle-mage & Skybreaker Sorcerer
    SPELL_BELOW_ZERO = 69705,
    SPELL_SHADOW_CHANNELING_GB = 45104,

    // Experience spells
    SPELL_EXPERIENCED = 71188,
    SPELL_VETERAN = 71193,
    SPELL_ELITE = 71195,
    SPELL_DESPERATE_RESOLVE_10_NM = 69647,
    SPELL_DESPERATE_RESOLVE_10_HM = 72537,
    SPELL_DESPERATE_RESOLVE_25_NM = 72536,
    SPELL_DESPERATE_RESOLVE_25_HM = 72538,

    // Kor'kron Axethrower & Skybreaker Rifleman
    SPELL_HURL_AXE = 70161,
    SPELL_SHOOT = 70162,

    // Kor'kron Rocketeer & Skybreaker Mortar Soldier
    SPELL_ROCKET_ARTILLERY_MARKER = 71371,
    SPELL_ROCKET_ARTILLERY_TRIGGERED = 69679,
    SPELL_ROCKET_ARTILLERY_HORDE = 69678,
    SPELL_ROCKET_ARTILLERY_ALLIANCE = 70609,
    SPELL_EXPLOSION = 69680,

    // Ship Explsion
    SPELL_SHIP_EXPLOSION = 72137,

    // Remove Rocket Packs
    SPELL_REMOVE_ROCKET_PACK = 70713,

    // Achievements
    SPELL_ACHIEVEMENT_CHECK = 72959,

    // Frost Freeze Trap
    SPELL_COLDFLAME_JETS                        = 70460,

    // Alchemist Adrianna
    SPELL_HARVEST_BLIGHT_SPECIMEN               = 72155,
    SPELL_HARVEST_BLIGHT_SPECIMEN25             = 72162,

    // Crok Scourgebane
    SPELL_ICEBOUND_ARMOR                        = 70714,
    SPELL_SCOURGE_STRIKE                        = 71488,
    SPELL_DEATH_STRIKE                          = 71489,

    // Sister Svalna
    SPELL_CARESS_OF_DEATH                       = 70078,
    SPELL_IMPALING_SPEAR_KILL                   = 70196,
    SPELL_REVIVE_CHAMPION                       = 70053,
    SPELL_UNDEATH                               = 70089,
    SPELL_IMPALING_SPEAR                        = 71443,
    SPELL_AETHER_SHIELD                         = 71463,
    SPELL_HURL_SPEAR                            = 71466,

    // Captain Arnath
    SPELL_DOMINATE_MIND                         = 14515,
    SPELL_FLASH_HEAL_NORMAL                     = 71595,
    SPELL_POWER_WORD_SHIELD_NORMAL              = 71548,
    SPELL_SMITE_NORMAL                          = 71546,
    SPELL_FLASH_HEAL_UNDEAD                     = 71782,
    SPELL_POWER_WORD_SHIELD_UNDEAD              = 71780,
    SPELL_SMITE_UNDEAD                          = 71778,

    // Captain Brandon
    SPELL_CRUSADER_STRIKE                       = 71549,
    SPELL_DIVINE_SHIELD                         = 71550,
    SPELL_JUDGEMENT_OF_COMMAND                  = 71551,
    SPELL_HAMMER_OF_BETRAYAL                    = 71784,

    // Captain Grondel
    SPELL_CHARGE_GONDEL                         = 71553,
    SPELL_MORTAL_STRIKE_GONDEL                  = 71552,
    SPELL_SUNDER_ARMOR_GONDEL                   = 71554,
    SPELL_CONFLAGRATION                         = 71785,

    // Captain Rupert
    SPELL_FEL_IRON_BOMB_NORMAL                  = 71592,
    SPELL_MACHINE_GUN_NORMAL                    = 71594,
    SPELL_ROCKET_LAUNCH_NORMAL                  = 71590,
    SPELL_FEL_IRON_BOMB_UNDEAD                  = 71787,
    SPELL_MACHINE_GUN_UNDEAD                    = 71788,
    SPELL_ROCKET_LAUNCH_UNDEAD                  = 71786,

    // Invisible Stalker (Float, Uninteractible, LargeAOI)
    SPELL_SOUL_MISSILE                          = 72585,
};

enum IceCrownCitadelGOs
{
    //GO_Tele
    GO_TELE_1                                   = 202242,
    GO_TELE_2                                   = 202243,
    GO_TELE_3                                   = 202244,
    GO_TELE_4                                   = 202245,
    GO_TELE_5                                   = 202246,

    // Lower Spire Trash
    GO_SPIRIT_ALARM_1                           = 201814,
    GO_SPIRIT_ALARM_2                           = 201815,
    GO_SPIRIT_ALARM_3                           = 201816,
    GO_SPIRIT_ALARM_4                           = 201817,

    // Lord Marrogar
    GO_MARROWGAR_ICEWALL_2                      = 201910,
    GO_MARROWGAR_ICEWALL_1                      = 201911,
    GO_MARROWGAR_DOOR                           = 201857,

    // Lady Deathwhisper
    GO_ORATORY_OF_THE_DAMNED_ENTRANCE           = 201563,
    GO_LADY_DEATHWHISPER_ELEVATOR               = 202220,

    // Gunship Gameobjects
    GO_ORGRIM_S_HAMMER_HORDE_ICC                = 201812,
    GO_ORGRIM_S_HAMMER_ALLIANCE_ICC             = 201581,
    GO_THE_SKYBREAKER_HORDE_ICC                 = 201811,
    GO_THE_SKYBREAKER_ALLIANCE_ICC              = 201580,
    GO_CAPITAN_CHEST_A_10N                      = 201872,
    GO_CAPITAN_CHEST_A_25N                      = 201873,
    GO_CAPITAN_CHEST_A_10H                      = 201874,
    GO_CAPITAN_CHEST_A_25H                      = 201875,
    GO_CAPITAN_CHEST_H_10N                      = 202177,
    GO_CAPITAN_CHEST_H_25N                      = 202178,
    GO_CAPITAN_CHEST_H_10H                      = 202179,
    GO_CAPITAN_CHEST_H_25H                      = 202180,

    // Deathbringer Saurfang
    GO_SAURFANG_S_DOOR = 201825,
    GO_DEATHBRINGER_S_CACHE_10N                 = 202239,
    GO_DEATHBRINGER_S_CACHE_25N                 = 202240,
    GO_DEATHBRINGER_S_CACHE_10H                 = 202238,
    GO_DEATHBRINGER_S_CACHE_25H                 = 202241,
    GO_SCOURGE_TRANSPORTER_SAURFANG             = 202244,

    // Professor Putricide
    GO_ORANGE_PLAGUE_MONSTER_ENTRANCE           = 201371,
    GO_GREEN_PLAGUE_MONSTER_ENTRANCE            = 201370,
    GO_SCIENTIST_AIRLOCK_DOOR_COLLISION         = 201612,
    GO_SCIENTIST_AIRLOCK_DOOR_ORANGE            = 201613,
    GO_SCIENTIST_AIRLOCK_DOOR_GREEN             = 201614,
    GO_DOODAD_ICECROWN_ORANGETUBES02            = 201617,
    GO_DOODAD_ICECROWN_GREENTUBES02             = 201618,
    GO_SCIENTIST_ENTRANCE                       = 201372,
    GO_DRINK_ME                                 = 201584,
    GO_PLAGUE_SIGIL                             = 202182,

    // Blood Prince Council
    GO_CRIMSON_HALL_DOOR                        = 201376,
    GO_BLOOD_ELF_COUNCIL_DOOR                   = 201378,
    GO_BLOOD_ELF_COUNCIL_DOOR_RIGHT             = 201377,

    // Blood-Queen Lana'thel
    GO_DOODAD_ICECROWN_BLOODPRINCE_DOOR_01      = 201746,
    GO_DOODAD_ICECROWN_GRATE_01                 = 201755,
    GO_BLOODWING_SIGIL                          = 202183,

    // Valithria Dreamwalker
    GO_GREEN_DRAGON_BOSS_ENTRANCE               = 201375,
    GO_GREEN_DRAGON_BOSS_EXIT                   = 201374,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_01       = 201380,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_02       = 201381,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_03       = 201382,
    GO_DOODAD_ICECROWN_ROOSTPORTCULLIS_04       = 201383,
    GO_CACHE_OF_THE_DREAMWALKER_10N             = 201959,
    GO_CACHE_OF_THE_DREAMWALKER_25N             = 202339,
    GO_CACHE_OF_THE_DREAMWALKER_10H             = 202338,
    GO_CACHE_OF_THE_DREAMWALKER_25H             = 202340,

    // Sindragosa
    GO_SINDRAGOSA_ENTRANCE_DOOR                 = 201373,
    GO_SINDRAGOSA_SHORTCUT_ENTRANCE_DOOR        = 201369,
    GO_SINDRAGOSA_SHORTCUT_EXIT_DOOR            = 201379,
    GO_ICE_WALL                                 = 202396,
    GO_ICE_BLOCK                                = 201722,
    GO_SIGIL_OF_THE_FROSTWING                   = 202181,

    // The Lich King
    GO_SCOURGE_TRANSPORTER_LK                   = 202223,
    GO_ARTHAS_PLATFORM                          = 202161,
    GO_ARTHAS_PRECIPICE                         = 202078,
    GO_DOODAD_ICECROWN_THRONEFROSTYWIND01       = 202188,
    GO_DOODAD_ICECROWN_THRONEFROSTYEDGE01       = 202189,
    GO_DOODAD_ICESHARD_STANDING02               = 202141,
    GO_DOODAD_ICESHARD_STANDING01               = 202142,
    GO_DOODAD_ICESHARD_STANDING03               = 202143,
    GO_DOODAD_ICESHARD_STANDING04               = 202144,
    GO_DOODAD_ICECROWN_SNOWEDGEWARNING01        = 202190,
    GO_FROZEN_LAVAMAN                           = 202436,
    GO_LAVAMAN_PILLARS_CHAINED                  = 202437,
    GO_LAVAMAN_PILLARS_UNCHAINED                = 202438,
};

enum IceCrownCitadelNpcEntrys
{
    // Lord Marrowgar
    NPC_COLDFLAME                               = 36672,
    NPC_BONE_SPIKE                              = 36619,

    // Lady Deathwhisper
    NPC_CULT_FANATIC                            = 37890,
    NPC_DEFORMED_FANATIC                        = 38135,
    NPC_REANIMATED_FANATIC                      = 38009,
    NPC_CULT_ADHERENT                           = 37949,
    NPC_EMPOWERED_ADHERENT                      = 38136,
    NPC_REANIMATED_ADHERENT                     = 38010,
    NPC_VENGEFUL_SHADE                          = 38222,

    // Gunship
    NPC_GB_SKYBREAKER                           = 37540,
    NPC_GB_ORGRIMS_HAMMER                       = 37215,
    NPC_GB_HIGH_OVERLORD_SAURFANG               = 36939,
    NPC_GB_MURADIN_BRONZEBEARD                  = 36948,
    NPC_GB_HIHG_CAPTAIN_JUSTIN_BARTLETT         = 37182,
    NPC_GB_HIGH_OVERLORD_SAURFANG_NV            = 50004,
    NPC_GB_MURADIN_BRONZEBEARD_NV               = 50006,
    NPC_GB_SKYBREAKER_SORCERER                  = 37026,
    NPC_GB_SKYBREAKER_SORCERERS                 = 37116,
    NPC_GB_KORKRON_REAVER                       = 37920,
    NPC_GB_KORKRON_REAVERS                      = 36957,
    NPC_GB_KORKRON_SERGANTE                     = 36960,
    NPC_GB_SKYBREAKER_SERGANTE                  = 36961,
    NPC_GB_KORKRON_BATTLE_MAGE                  = 37117,
    NPC_GB_SKYBREAKER_MARINE                    = 36950,
    NPC_GB_KORKRON_ROCKETEER                    = 36982,
    NPC_GB_SKYBREAKER_MORTAR_SOLDIER            = 36978,
    NPC_GB_KORKRON_AXETHROWER                   = 36968,
    NPC_GB_SKYBREAKER_RIFLEMAN                  = 36969,
    NPC_GB_SKYBREAKER_DECKHAND                  = 36970,
    NPC_GB_ZAFOD_BOOMBOX                        = 37184,
    NPC_GB_ALLIANCE_CANON                       = 36838,
    NPC_GB_HORDE_CANON                          = 36839,
    NPC_GB_INVISIBLE_STALKER                    = 32780,
    NPC_GB_PORTAL                               = 37227,
    NPC_GB_GUNSHIP_HULL                         = 37547,
    NPC_KORKRON_INVOKER                         = 37033,
    NPC_SPIRE_FROSTWYRM                         = 37230,
    NPC_SKYBREAKER_SORCERER                     = 37026,

    // Deathbringer Saurfang
    NPC_BLOOD_BEAST                             = 38508,
    NPC_SE_JAINA_PROUDMOORE                     = 37188,
    NPC_SE_MURADIN_BRONZEBEARD                  = 37200,
    NPC_SE_KING_VARIAN_WRYNN                    = 37879,
    NPC_SE_HIGH_OVERLORD_SAURFANG               = 37187,
    NPC_SE_KOR_KRON_REAVER                      = 37920,
    NPC_SE_SKYBREAKER_MARINE                    = 37830,
    NPC_FROST_FREEZE_TRAP                       = 37744,

    // Festergut
    NPC_GAS_DUMMY                               = 36659,

    // Rotface
    NPC_OOZE_SPRAY_STALKER                      = 37986,
    NPC_PUDDLE_STALKER                          = 37013,
    NPC_UNSTABLE_EXPLOSION_STALKER              = 38107,

    // Professor Putricide
    NPC_ABOMINATION_WING_MAD_SCIENTIST_STALKER  = 37824,
    NPC_GROWING_OOZE_PUDDLE                     = 37690,
    NPC_GAS_CLOUD                               = 37562,
    NPC_VOLATILE_OOZE                           = 37697,
    NPC_CHOKING_GAS_BOMB                        = 38159,
    NPC_TEAR_GAS_TARGET_STALKER                 = 38317,
    NPC_MUTATED_ABOMINATION_10                  = 37672,
    NPC_MUTATED_ABOMINATION_25                  = 38285,

    // Blood Prince Council
    NPC_BLOOD_ORB_CONTROLLER                    = 38008,
    NPC_FLOATING_TRIGGER                        = 30298,
    NPC_DARK_NUCLEUS                            = 38369,
    NPC_BALL_OF_FLAME                           = 38332,
    NPC_BALL_OF_INFERNO_FLAME                   = 38451,
    NPC_KINETIC_BOMB_TARGET                     = 38458,
    NPC_KINETIC_BOMB                            = 38454,
    NPC_SHOCK_VORTEX                            = 38422,

    // Frostwing Halls gauntlet event
    NPC_CROK_SCOURGEBANE                        = 37129,
    NPC_CAPTAIN_ARNATH                          = 37122,
    NPC_CAPTAIN_BRANDON                         = 37123,
    NPC_CAPTAIN_GRONDEL                         = 37124,
    NPC_CAPTAIN_RUPERT                          = 37125,
    NPC_CAPTAIN_ARNATH_UNDEAD                   = 37491,
    NPC_CAPTAIN_BRANDON_UNDEAD                  = 37493,
    NPC_CAPTAIN_GRONDEL_UNDEAD                  = 37494,
    NPC_CAPTAIN_RUPERT_UNDEAD                   = 37495,
    NPC_YMIRJAR_BATTLE_MAIDEN                   = 37132,
    NPC_YMIRJAR_DEATHBRINGER                    = 38125,
    NPC_YMIRJAR_FROSTBINDER                     = 37127,
    NPC_YMIRJAR_HUNTRESS                        = 37134,
    NPC_YMIRJAR_WARLORD                         = 37133,
    NPC_SISTER_SVALNA                           = 37126,
    NPC_IMPALING_SPEAR                          = 38248,

    // Valithria Dreamwalker
    NPC_GREEN_DRAGON_COMBAT_TRIGGER             = 38752,
    NPC_RISEN_ARCHMAGE                          = 37868,
    NPC_BLAZING_SKELETON                        = 36791,
    NPC_SUPPRESSER                              = 37863,
    NPC_BLISTERING_ZOMBIE                       = 37934,
    NPC_GLUTTONOUS_ABOMINATION                  = 37886,
    NPC_MANA_VOID                               = 38068,
    NPC_COLUMN_OF_FROST                         = 37918,
    NPC_ROT_WORM                                = 37907,
    NPC_THE_LICH_KING_VALITHRIA                 = 16980,
    NPC_DREAM_PORTAL_PRE_EFFECT                 = 38186,
    NPC_NIGHTMARE_PORTAL_PRE_EFFECT             = 38429,
    NPC_DREAM_PORTAL                            = 37945,
    NPC_NIGHTMARE_PORTAL                        = 38430,

    // Sindragosa
    NPC_SPINESTALKER                            = 37534,
    NPC_RIMEFANG                                = 37533,
    NPC_FROSTWARDEN_HANDLER                     = 37531,
    NPC_FROSTWING_WHELP                         = 37532,
    NPC_ICY_BLAST                               = 38223,
    NPC_FROST_BOMB                              = 37186,
    NPC_ICE_TOMB                                = 36980,

    // The Lich King
    NPC_HIGHLORD_TIRION_FORDRING_LK             = 38995,
    NPC_TERENAS_MENETHIL_FROSTMOURNE            = 36823,
    NPC_SPIRIT_WARDEN                           = 36824,
    NPC_TERENAS_MENETHIL_FROSTMOURNE_H          = 39217,
    NPC_SHAMBLING_HORROR                        = 37698,
    NPC_DRUDGE_GHOUL                            = 37695,
    NPC_ICE_SPHERE                              = 36633,
    NPC_RAGING_SPIRIT                           = 36701,
    NPC_DEFILE                                  = 38757,
    NPC_VALKYR_SHADOWGUARD                      = 36609,
    NPC_VILE_SPIRIT                             = 37799,
    NPC_WICKED_SPIRIT                           = 39190,
    NPC_STRANGULATE_VEHICLE                     = 36598,
    NPC_WORLD_TRIGGER                           = 22515,
    NPC_WORLD_TRIGGER_INFINITE_AOI              = 36171,
    NPC_SPIRIT_BOMB                             = 39189,
    NPC_FROSTMOURNE_TRIGGER                     = 38584,

    // Generic
    NPC_INVISIBLE_STALKER                       = 30298,

    // Weekly quests
    NPC_INFILTRATOR_MINCHAR                     = 38471,
    NPC_KOR_KRON_LIEUTENANT                     = 38491,
    NPC_SKYBREAKER_LIEUTENANT                   = 38492,
    NPC_ROTTING_FROST_GIANT_10                  = 38490,
    NPC_ROTTING_FROST_GIANT_25                  = 38494,
    NPC_ALCHEMIST_ADRIANNA                      = 38501,
    NPC_ALRIN_THE_AGILE                         = 38551,
    NPC_INFILTRATOR_MINCHAR_BQ                  = 38558,
    NPC_MINCHAR_BEAM_STALKER                    = 38557,
    NPC_VALITHRIA_DREAMWALKER_QUEST             = 38589,
};

enum IceCrownCitadelCNentry
{
   CN_LORD_MARROWGAR                            = 36612,
   CN_LADY_DEATHWHISPER                         = 36855,  
   CN_DEATHBRINGER_SAURFANG                     = 37813,
   CN_FESTERGUT                                 = 36626,
   CN_ROTFACE                                   = 36627,
   CN_PROFESSOR_PUTRICIDE                       = 36678,
   CN_PRINCE_KELESETH                           = 37972,
   CN_PRINCE_TALDARAM                           = 37973,
   CN_PRINCE_VALANAR                            = 37970,
   CN_BLOOD_QUEEN_LANA_THEL                     = 37955,
   CN_VALITHRIA_DREAMWALKER                     = 36789,
   CN_SINDRAGOSA                                = 36853,
   CN_THE_LICH_KING                             = 36597,
};

enum EventsMarrowgar
{
    EVENT_BONE_SPIKE_GRAVEYARD                  = 1,
    EVENT_COLDFLAME                             = 2,
    EVENT_BONE_STORM_BEGIN                      = 3,
    EVENT_BONE_STORM_MOVE                       = 4,
    EVENT_BONE_STORM_END                        = 5,
    EVENT_ENABLE_BONE_SLICE                     = 6,
    EVENT_ENRAGE                                = 7,
    EVENT_WARN_BONE_STORM                       = 8,

    EVENT_COLDFLAME_TRIGGER                     = 9,
    EVENT_FAIL_BONED                            = 10,
};

enum LordMarrowgarTextIds
{
    SAY_MARR_ENTER_ZONE                         = 922,
    SAY_MARR_AGGRO                              = 923,
    SAY_MARR_BONE_STORM                         = 924,
    SAY_MARR_BONESPIKE_1                        = 925,
    SAY_MARR_BONESPIKE_2                        = 926,
    SAY_MARR_BONESPIKE_3                        = 927,
    SAY_MARR_KILL_1                             = 928,
    SAY_MARR_KILL_2                             = 929,
    SAY_MARR_DEATH                              = 930,
    SAY_MARR_BERSERK                            = 931,
    SAY_MARR_BONE_STORM_EMOTE                   = 932,
};

enum EventsLadyDeathwhisper
{
    // Lady Deathwhisper
    EVENT_INTRO_2                               = 1,
    EVENT_INTRO_3                               = 2,
    EVENT_INTRO_4                               = 3,
    EVENT_INTRO_5                               = 4,
    EVENT_INTRO_6                               = 5,
    EVENT_INTRO_7                               = 6,
    EVENT_BERSERK                               = 7,
    EVENT_DEATH_AND_DECAY                       = 8,
    EVENT_DOMINATE_MIND_H                       = 9,

    // Phase 1 only
    EVENT_P1_SUMMON_WAVE                        = 10,
    EVENT_P1_SHADOW_BOLT                        = 11,
    EVENT_P1_EMPOWER_CULTIST                    = 12,
    EVENT_P1_REANIMATE_CULTIST                  = 13,

    // Phase 2 only
    EVENT_P2_SUMMON_WAVE                        = 14,
    EVENT_P2_FROSTBOLT                          = 15,
    EVENT_P2_FROSTBOLT_VOLLEY                   = 16,
    EVENT_P2_TOUCH_OF_INSIGNIFICANCE            = 17,
    EVENT_P2_SUMMON_SHADE                       = 18,

    // Shared adds events
    EVENT_CULTIST_DARK_MARTYRDOM                = 19,

    // Cult Fanatic
    EVENT_FANATIC_NECROTIC_STRIKE               = 20,
    EVENT_FANATIC_SHADOW_CLEAVE                 = 21,
    EVENT_FANATIC_VAMPIRIC_MIGHT                = 22,

    // Cult Adherent
    EVENT_ADHERENT_FROST_FEVER                  = 23,
    EVENT_ADHERENT_DEATHCHILL                   = 24,
    EVENT_ADHERENT_CURSE_OF_TORPOR              = 25,
    EVENT_ADHERENT_SHORUD_OF_THE_OCCULT         = 26,

    // Darnavan
    EVENT_DARNAVAN_BLADESTORM                   = 27,
    EVENT_DARNAVAN_CHARGE                       = 28,
    EVENT_DARNAVAN_INTIMIDATING_SHOUT           = 29,
    EVENT_DARNAVAN_MORTAL_STRIKE                = 30,
    EVENT_DARNAVAN_SHATTERING_THROW             = 31,
    EVENT_DARNAVAN_SUNDER_ARMOR                 = 32,
};

enum LadyDeathwhisperTextIds
{
    SAY_LADY_INTRO_1                            = 1004,
    SAY_LADY_INTRO_2                            = 1005,
    SAY_LADY_INTRO_3                            = 1006,
    SAY_LADY_INTRO_4                            = 1007,
    SAY_LADY_INTRO_5                            = 1008,
    SAY_LADY_INTRO_6                            = 1009,
    SAY_LADY_INTRO_7                            = 1010,
    SAY_LADY_AGGRO                              = 1011,
    SAY_LADY_PHASE_2                            = 1012,
    SAY_LADY_PHASE_2_EMOTE                      = 1013,
    SAY_LADY_DOMINATE_MIND                      = 1014,
    SAY_LADY_EMPOWERMENT                        = 1015,
    SAY_LADY_TRANSFORMATION                     = 1016,
    SAY_LADY_DEAD                               = 1017,
    SAY_LADY_KILL_1                             = 1018,
    SAY_LADY_KILL_2                             = 1019,
    SAY_LADY_BERSERK                            = 1020,
    SAY_LADY_DEATH                              = 1021,
};

enum PhasesLadyDeathwhisper
{
    PHASE_ALL                                   = 0,
    PHASE_INTRO                                 = 1,
    PHASE_ONE                                   = 2,
    PHASE_TWO                                   = 3
};

enum DeprogrammingData
{
    NPC_DARNAVAN_10                             = 38472,
    NPC_DARNAVAN_25                             = 38485,
    NPC_DARNAVAN_CREDIT_10                      = 39091,
    NPC_DARNAVAN_CREDIT_25                      = 39092,

    ACTION_COMPLETE_QUEST                       = -384720,
    POINT_DESPAWN                               = 384721,
};

enum AdditionalData
{
    DATA_BONED_ACHIEVEMENT                      = 1,
    DATA_GUNSHIP_EVENT                          = 2,
    DATA_TEAM_IN_INSTANCE                       = 3,

    // Gunship
    DATA_BEEN_WAITING_ACHIEVEMENT               = 4,
    DATA_NECK_DEEP_ACHIEVEMENT                  = 5,
    DATA_FIRST_SQUAD_STATE                      = 6,
    DATA_SECOND_SQUAD_STATE                     = 7,
    DATA_SPIRE_FROSTWYRM_STATE                  = 8,  
    DATA_GB_BATTLE_MAGE                         = 9,
    DATA_SKYBREAKER_BOSS                        = 10,
    DATA_ORGRIMMAR_HAMMER_BOSS                  = 11,
    DATA_GB_HIGH_OVERLORD_SAURFANG              = 12,
    DATA_GB_MURADIN_BRONZEBEARD                 = 13,
    DATA_HIGH_OVERLORD_SAURFANG_NOT_VISUAL      = 14,
    DATA_MURADIN_BRONZEBEARD_NOT_VISUAL         = 15,
};

enum Achievements
{
    IM_ON_A_BOAT_10                             = 4536,
    IM_ON_A_BOAT_25                             = 4612
};

enum GunshipBattleActions
{
    ACTION_INTRO_START                          = 1,
    ACTION_BATTLE_EVENT                         = 2,
    ACTION_MAGE_DIE                             = 3,
    ACTION_ROCK_DIE                             = 4,
    ACTION_AXES_RIFL_DIE                        = 5,
    ACTION_DONE                                 = 6,
    ACTION_FAIL                                 = 7,

    // Transporter Actions
    EVENT_PLAYERS_GUNSHIP_SPAWN                 = 22663,
    EVENT_PLAYERS_GUNSHIP_COMBAT                = 22664,
    EVENT_PLAYERS_GUNSHIP_SAURFANG              = 22665,
    EVENT_ENEMY_GUNSHIP_COMBAT                  = 22860,
    EVENT_ENEMY_GUNSHIP_DESPAWN                 = 22861,
};

enum EventsGunshipBattle
{
    EVENT_INTRO_ALLIANCE_1, // Muradin Bronzebeard yells: Fire up the engines! We got a meetin' with destiny, lads!
    EVENT_INTRO_ALLIANCE_2, // Muradin Bronzebeard yells: Hold on to yer hats!
    EVENT_INTRO_ALLIANCE_3, // Muradin Bronzebeard yells: What in the world is that? Grab me spyglass, crewman!
    EVENT_INTRO_ALLIANCE_4, // Muradin Bronzebeard yells: By me own beard! HORDE SAILIN' IN FAST 'N HOT!
    EVENT_INTRO_ALLIANCE_5, // Muradin Bronzebeard yells: EVASIVE ACTION! MAN THE GUNS!
    EVENT_INTRO_ALLIANCE_6, // Muradin Bronzebeard yells: Cowardly dogs! Ye blindsided us!
    EVENT_INTRO_ALLIANCE_7, // High Overlord Saurfang yells: This is not your battle, dwarf. Back down or we will be forced to destroy your ship.
    EVENT_INTRO_ALLIANCE_8, // Muradin Bronzebeard yells: Not me battle? I dunnae who ye think ye are, mister, but I got a score to settle with Arthas and yer not gettin' in me way! FIRE ALL GUNS! FIRE! FIRE!

    EVENT_INTRO_HORDE_1, // High Overlord Saurfang yells: Rise up, sons and daughters of the Horde! Today we battle a hated enemy of the Horde! LOK'TAR OGAR! Kor'kron, take us out!
    EVENT_INTRO_HORDE_1_1, // Kor'kron, take us out!
    EVENT_INTRO_HORDE_2, // High Overlord Saurfang yells: What is that?! Something approaching in the distance!
    EVENT_INTRO_HORDE_3, // High Overlord Saurfang yells: ALLIANCE GUNSHIP! ALL HANDS ON DECK!
    EVENT_INTRO_HORDE_4, // Muradin Bronzebeard yells: Move yer jalopy or we'll blow it out of the sky, orc! The Horde's got no business here!
    EVENT_INTRO_HORDE_5, // High Overlord Saurfang yells: You will know our business soon! KOR'KRON, ANNIHILATE THEM!

    EVENT_OUTRO_ALLIANCE_1,
    EVENT_OUTRO_ALLIANCE_2,
    EVENT_OUTRO_ALLIANCE_3,

    EVENT_OUTRO_HORDE_1,
    EVENT_OUTRO_HORDE_2,
    EVENT_OUTRO_HORDE_3,

    //Fly
    EVENT_START_FLY,

    //Misc battle
    EVENT_WALK_MOBS,
    EVENT_SUMMON_PORTAL,
    EVENT_FREEZE_CANNON,
    EVENT_SHADOW_CHANNELING,
    EVENT_UNSUMMON_PORTAL,
    EVENT_BOARDING_GUNSHIP,
    EVENT_BOARDING_TALK,
    EVENT_BURNING_PITCH,
    EVENT_WOUNDING_STRIKE,
    EVENT_BLADE_STORM,
    EVENT_DONE,
    EVENT_FAIL,
    EVENT_RESTART_EVENT,
    EVENT_BOARDING_REAVERS_MARINE,
    EVENT_WIPE_CHECK,

    // Rampart of Skulls NPCs Events
    EVENT_WRATH,
    EVENT_HEAL,

    EVENT_SUNDER_ARMOR,
    EVENT_SPELL_REFLECT,
    EVENT_THUNDERCLAP,
    EVENT_DEVASTATE,

    EVENT_FROST_BREATH,
    EVENT_BLIZZARD,
    EVENT_CLEAVE,

    // Skybreaker Vindicator
    EVENT_AVENGERS_SHILED,
    EVENT_CONCENTRATION,
    EVENT_HOLY_WRATH,

    // First Squad Assisted
    EVENT_FIRST_SQUAD_ASSISTED_1,
    EVENT_FIRST_SQUAD_ASSISTED_2,

    // Second Squad Assisted
    EVENT_SECOND_SQUAD_ASSISTED_1,
    EVENT_SECOND_SQUAD_ASSISTED_2,
    EVENT_SECOND_SQUAD_ASSISTED_3,

    // Shared experience events
    EVENT_EXPERIENCED,
    EVENT_VETERAN,
    EVENT_ELITE,
    EVENT_ATACK_START,

    // Kor'kron Axethrower & Skybreaker Rifleman
    EVENT_HURL_AXE,
    EVENT_SHOOT,

    // Kor'kron Rocketeer & Skybreaker Mortar Soldier
    EVENT_ROCKET_ART,

    // Muradin Bronzebeard & High Overlord Saurfang
    EVENT_RENDING_THROW,
    EVENT_TASTE_OF_BLOOD,

    // Misc (used in various NPCs)
    EVENT_SPAWN_MAGE,
    EVENT_RESPAWN_AXES_RIFLEMEN,
    EVENT_RESPAWN_ROCKETEER,
};

enum GunshipBattleTextIds
{
    // Muradin Bronzebeard
    SAY_INTRO_ALLIANCE_0                        = 8374,
    SAY_INTRO_ALLIANCE_1                        = 8375,
    SAY_INTRO_ALLIANCE_2                        = 8376,
    SAY_INTRO_ALLIANCE_3                        = 8377,
    SAY_INTRO_ALLIANCE_4                        = 8378,
    SAY_INTRO_ALLIANCE_5                        = 8379,
    SAY_INTRO_ALLIANCE_7                        = 8380,
    SAY_INTRO_HORDE_3                           = 8381,
    SAY_BOARDING_SKYBREAKER_1                   = 8382,
    SAY_BOARDING_ORGRIMS_HAMMER_0               = 8383,
    SAY_NEW_RIFLEMEN_SPAWNED                    = 8384,
    SAY_NEW_MORTAR_TEAM_SPAWNED                 = 8385,
    SAY_NEW_MAGE_SPAWNED                        = 8386,
    SAY_ALLIANCE_VICTORY                        = 8387,
    SAY_ALLIANCE_DEFEAT                         = 8388, // How will we handle that case ? Ie. the player loses

    // High Overlord Saurfang
    SAY_INTRO_HORDE_0                           = 8360,
    SAY_INTRO_HORDE_0_1                         = 8361,
    SAY_INTRO_HORDE_1                           = 8362,
    SAY_INTRO_HORDE_2                           = 8363,
    SAY_INTRO_HORDE_4                           = 8364,
    SAY_BOARDING_SKYBREAKER_0                   = 8366,
    SAY_BOARDING_ORGRIMS_HAMMER_1               = 8367,
    SAY_NEW_AXETHROWER_SPAWNED                  = 8369,
    SAY_NEW_ROCKETEERS_SPAWNED                  = 8370,
    SAY_NEW_BATTLE_MAGE_SPAWNED                 = 8371,
    SAY_HORDE_VICTORY                           = 8372,
    SAY_HORDE_DEFEAT                            = 8373, // How will we handle that case ? Ie. the player loses

    GOSSIP_OPTION_NOT_LEADER                    = 607,  // I'm not the raid leader...
    GOSSIP_OPTION_ALLIANCE_RDY                  = 608,  // My companions are all accounted for, Muradin. Let's go!
    GOSSIP_OPTION_WAIT_LEADER                   = 609,  // I'll wait for the raid leader
    GOSSIP_OPTION_HORDE_RDY                     = 610,  // My companions are all accounted for, Saurfang. Let's go!
    GOSSIP_OPTION_JETPACK                       = 611,    // Yeah, I'm sure that safety is your top priority. Give me a jetpack.
    GOSSIP_OPTION_JETPACK2                      = 612,   // You already have my jetpack!
};

LocationVector const FrostWyrmPosH = { -435.429f, 2077.556f, 219.1148f, 4.767166f };
LocationVector const FrostWyrmPosA = { -437.409f, 2349.026f, 219.1148f, 1.483120f };

struct mortarMarksLoc
{
    uint32 durationBeforeRefreshing;
    LocationVector location;
};

enum MiscInfo
{
    // Data Shares
    DATA_COLDFLAME_GUID = 0,
    DATA_SPIKE_IMMUNE = 1,
    DATA_CULTIST_GUID = 2,

    // Actions
    ACTION_CLEAR_SPIKE_IMMUNITIES = 1,

    //Definitions
    MAX_BONE_SPIKE_IMMUNE = 3,
};

uint32 const SummonEntries[2] = { NPC_CULT_FANATIC, NPC_CULT_ADHERENT };

uint32 const BoneSpikeSummonId[3] = { 69062, 72669, 72670 };

uint32_t boneStormIds[] =
{
    SPELL_BONE_STORM_EFFECT,
    SPELL_BONE_STORM_25,
    SPELL_BONE_STORM_Heroic,
    SPELL_BONE_STORM_Heroic_25,
    0
};

LocationVector const LadyDeathwhisperSummonPositions[7] =
{
    {-578.7066f, 2154.167f, 51.01529f, 1.692969f}, // 1 Left Door 1 (Cult Fanatic)
    {-598.9028f, 2155.005f, 51.01530f, 1.692969f}, // 2 Left Door 2 (Cult Adherent)
    {-619.2864f, 2154.460f, 51.01530f, 1.692969f}, // 3 Left Door 3 (Cult Fanatic)
    {-578.6996f, 2269.856f, 51.01529f, 4.590216f}, // 4 Right Door 1 (Cult Adherent)
    {-598.9688f, 2269.264f, 51.01529f, 4.590216f}, // 5 Right Door 2 (Cult Fanatic)
    {-619.4323f, 2268.523f, 51.01530f, 4.590216f}, // 6 Right Door 3 (Cult Adherent)
    {-524.2480f, 2211.920f, 62.90960f, 3.141592f}, // 7 Upper (Random Cultist)
};

static Movement::Location Doors[] =
{
    { -407.35f, 2147.88f, 42.85f, 0 },       //IceWall1
    { -412.97f, 2285.24f, 42.01f, 0 },       //IceWall2
    { -520.44f, 2211.47f, 63.14f, 0 },       //Door behinde ice problem with viewing distance....
};

// Teleport coords for Gossip
static float ICCTeleCoords[6][5] =
{    // moving this to a clean mysql table with all teleports in it... maybe as spell or event?
    { MAP_ICECROWNCITADEL, -17.856115f, 2211.640137f, 30.115812f, 0.0f },     //1   Teleport to Light's Hammer 
    { MAP_ICECROWNCITADEL, -503.632599f, 2211.219971f, 62.823246f, 0.0f },    //2   Teleport to Oratory of The Damned
    { MAP_ICECROWNCITADEL, -615.098267f, 2211.509766f, 199.973083f, 0.0f },   //3   Teleport to Rampart of Skulls 
    { MAP_ICECROWNCITADEL, -549.151001f, 2211.463967f, 539.290222f, 0.0f },   //4   Teleport to Deathbringer's Rise 
    { MAP_ICECROWNCITADEL, 4356.780273f, 2863.636230f, 349.337982f, 0.0f },   //5   Teleport to the Upper Spire.
    { MAP_ICECROWNCITADEL, 4453.248535f, 2769.325684f, 349.347473f, 0.0f }    //6   Teleport to Sindragosa's Lair
};

void SetupICC(ScriptMgr* mgr);
