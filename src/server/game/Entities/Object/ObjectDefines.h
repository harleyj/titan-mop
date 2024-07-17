/*
* This file is part of the Legends of Azeroth Pandaria Project. See THANKS file for Copyright information
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TRINITY_OBJECTDEFINES_H
#define TRINITY_OBJECTDEFINES_H

#include "Define.h"

#define CONTACT_DISTANCE                    0.5f
#define INTERACTION_DISTANCE                5.0f
#define TRADE_DISTANCE                      11.11f
#define PETBATTLE_INTERACTION_DIST          20.0f
#define ATTACK_DISTANCE                     5.0f
#define MAX_VISIBILITY_DISTANCE             SIZE_OF_GRIDS           // max distance for visible objects
#define SIGHT_RANGE_UNIT                    50.0f
#define VISIBILITY_DISTANCE_GIGANTIC        400.0f
#define VISIBILITY_DISTANCE_LARGE           200.0f
#define VISIBILITY_DISTANCE_NORMAL          100.0f
#define VISIBILITY_DISTANCE_SMALL           50.0f
#define VISIBILITY_DISTANCE_TINY            25.0f
#define DEFAULT_VISIBILITY_DISTANCE         VISIBILITY_DISTANCE_NORMAL                  // default visible distance, 100 yards on continents
#define DEFAULT_VISIBILITY_INSTANCE         170.0f                  // default visible distance in instances, 170 yards
#define DEFAULT_VISIBILITY_BGARENAS         533.0f                  // default visible distance in BG/Arenas, roughly 533 yards

#define DEFAULT_PLAYER_BOUNDING_RADIUS      0.388999998569489f      // player size, also currently used (correctly?) for any non Unit world objects
#define DEFAULT_PLAYER_COMBAT_REACH         1.5f
#define MIN_MELEE_REACH                     2.0f
#define NOMINAL_MELEE_RANGE                 5.0f
#define MELEE_RANGE                         (NOMINAL_MELEE_RANGE - MIN_MELEE_REACH * 2) //center to center for players

#define EXTRA_CELL_SEARCH_RADIUS            40.0f // We need in some cases increase search radius. Allow to find creatures with huge combat reach in a different nearby cell.

enum class VisibilityDistanceType : uint8
{
    Normal = 0,
    Tiny = 1,
    Small = 2,
    Large = 3,
    Gigantic = 4,
    Infinite = 5,

    Max
};

enum TempSummonType
{
    TEMPSUMMON_TIMED_OR_DEAD_DESPAWN       = 1,             // despawns after a specified time OR when the creature disappears
    TEMPSUMMON_TIMED_OR_CORPSE_DESPAWN     = 2,             // despawns after a specified time OR when the creature dies
    TEMPSUMMON_TIMED_DESPAWN               = 3,             // despawns after a specified time
    TEMPSUMMON_TIMED_DESPAWN_OUT_OF_COMBAT = 4,             // despawns after a specified time after the creature is out of combat
    TEMPSUMMON_CORPSE_DESPAWN              = 5,             // despawns instantly after death
    TEMPSUMMON_CORPSE_TIMED_DESPAWN        = 6,             // despawns after a specified time after death
    TEMPSUMMON_DEAD_DESPAWN                = 7,             // despawns when the creature disappears
    TEMPSUMMON_MANUAL_DESPAWN              = 8              // despawns when UnSummon() is called
};

enum PhaseMasks
{
    PHASEMASK_NORMAL   = 0x00000001,
    PHASEMASK_ANYWHERE = 0xFFFFFFFF
};

enum NotifyFlags
{
    NOTIFY_NONE                     = 0x00,
    NOTIFY_AI_RELOCATION            = 0x01,
    NOTIFY_VISIBILITY_CHANGED       = 0x02,
    NOTIFY_ALL                      = 0xFF
};

enum GOSummonType
{
   GO_SUMMON_TIMED_OR_CORPSE_DESPAWN = 0,    // despawns after a specified time OR when the summoner dies
   GO_SUMMON_TIMED_DESPAWN = 1     // despawns after a specified time
};

enum HighGuid
{
    HIGHGUID_ITEM           = 0x400,                       // blizz 4000
    HIGHGUID_CONTAINER      = 0x400,                       // blizz 4000
    HIGHGUID_PLAYER         = 0x070,                       // blizz depends on realm?
    HIGHGUID_GAMEOBJECT     = 0xF11,                       // blizz F110
    HIGHGUID_TRANSPORT      = 0xF12,                       // blizz F120 (for GAMEOBJECT_TYPE_TRANSPORT)
    HIGHGUID_UNIT           = 0xF13,                       // blizz F130
    HIGHGUID_PET            = 0xF14,                       // blizz F140
    HIGHGUID_VEHICLE        = 0xF15,                       // blizz F550
    HIGHGUID_DYNAMICOBJECT  = 0xF10,                       // blizz F100
    HIGHGUID_CORPSE         = 0xF101,                      // blizz F100
    HIGHGUID_AREATRIGGER    = 0xF1B,                       // blizz F1B
    HIGHGUID_LOOT           = 0xF19,
    HIGHGUID_BATTLEGROUND   = 0x1F1,                       // new 4.x
    HIGHGUID_MO_TRANSPORT   = 0x1FC,                       // blizz 1FC0 (for GAMEOBJECT_TYPE_MO_TRANSPORT)
    HIGHGUID_GROUP          = 0x1F5,
    HIGHGUID_GUILD          = 0x1FF,                       // new 4.x
    HIGHGUID_INSTANCE_SAVE  = 0x104,                       // new 5.x
    HIGHGUID_WOW_ACCOUNT    = 0x1E8,                       // new 5.x
    HIGHGUID_SCENARIO       = 0xF18,                       // new 5.x
    HIGHGUID_VIGNETTE       = 0x200,
};

// used for creating values for respawn for example

inline bool IS_EMPTY_GUID(uint64 guid);
inline bool IS_CREATURE_GUID(uint64 guid);
inline bool IS_PET_GUID(uint64 guid);
inline bool IS_VEHICLE_GUID(uint64 guid);
inline bool IS_CRE_OR_VEH_GUID(uint64 guid);
inline bool IS_CRE_OR_VEH_OR_PET_GUID(uint64 guid);
inline bool IS_PLAYER_GUID(uint64 guid);
inline bool IS_GUILD_GUID(uint64 guid);
inline bool IS_UNIT_GUID(uint64 guid);
inline bool IS_ITEM_GUID(uint64 guid);
inline bool IS_GAMEOBJECT_GUID(uint64 guid);
inline bool IS_DYNAMICOBJECT_GUID(uint64 guid);
inline bool IS_CORPSE_GUID(uint64 guid);
inline bool IS_TRANSPORT_GUID(uint64 guid);
inline bool IS_MO_TRANSPORT_GUID(uint64 guid);
inline bool IS_GROUP_GUID(uint64 guid);
inline bool IS_AREATRIGGER_GUID(uint64 guid);

// l - OBJECT_FIELD_GUID
// e - OBJECT_FIELD_ENTRY_ID for GO (except GAMEOBJECT_TYPE_MO_TRANSPORT) and creatures or UNIT_FIELD_PET_NUMBER for pets
// h - OBJECT_FIELD_GUID + 1
inline uint64 MAKE_NEW_GUID(uint32 l, uint32 e, uint32 h);

//#define GUID_HIPART(x)   (uint32)((uint64(x) >> 52)) & 0x0000FFFF)
inline uint32 GUID_HIPART(uint64 guid);
inline uint32 GUID_ENPART(uint64 x);
inline uint32 GUID_LOPART(uint64 x);

inline bool IsGuidHaveEnPart(uint64 guid);
inline char const* GetLogNameForGuid(uint64 guid);

inline uint64 MAKE_PAIR64(uint32 l, uint32 h)
{
    return uint64(l | (uint64(h) << 32));
}

inline uint32 PAIR64_HIPART(uint64 x)
{
    return (uint32)((x >> 32) & UI64LIT(0x00000000FFFFFFFF));
}

inline uint32 PAIR64_LOPART(uint64 x)
{
    return (uint32)(x & UI64LIT(0x00000000FFFFFFFF));
}

inline uint16 MAKE_PAIR16(uint8 l, uint8 h)
{
    return uint16(l | (uint16(h) << 8));
}

inline uint32 MAKE_PAIR32(uint16 l, uint16 h)
{
    return uint32(l | (uint32(h) << 16));
}

inline uint16 PAIR32_HIPART(uint32 x)
{
    return (uint16)((x >> 16) & 0x0000FFFF);
}

inline uint16 PAIR32_LOPART(uint32 x)
{
    return (uint16)(x & 0x0000FFFF);
}

bool IS_EMPTY_GUID(uint64 guid)
{
    return guid == 0;
}

bool IS_CREATURE_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_UNIT;
}

bool IS_PET_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_PET;
}

bool IS_VEHICLE_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_VEHICLE;
}

bool IS_CRE_OR_VEH_GUID(uint64 guid)
{
    return IS_CREATURE_GUID(guid) || IS_VEHICLE_GUID(guid);
}

bool IS_CRE_OR_VEH_OR_PET_GUID(uint64 guid)
{
    return IS_CRE_OR_VEH_GUID(guid) || IS_PET_GUID(guid);
}

bool IS_PLAYER_GUID(uint64 guid)
{
    return guid != 0 && GUID_HIPART(guid) == HIGHGUID_PLAYER;
}

bool IS_GUILD_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_GUILD;
}

bool IS_UNIT_GUID(uint64 guid)
{
    return IS_CRE_OR_VEH_OR_PET_GUID(guid) || IS_PLAYER_GUID(guid);
}

bool IS_ITEM_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_ITEM;
}

bool IS_GAMEOBJECT_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_GAMEOBJECT;
}

bool IS_DYNAMICOBJECT_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_DYNAMICOBJECT;
}

bool IS_CORPSE_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_CORPSE;
}

bool IS_TRANSPORT_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_TRANSPORT;
}

bool IS_MO_TRANSPORT_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_MO_TRANSPORT;
}

bool IS_GROUP_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_GROUP;
}

bool IS_AREATRIGGER_GUID(uint64 guid)
{
    return GUID_HIPART(guid) == HIGHGUID_AREATRIGGER;
}

uint64 MAKE_NEW_GUID(uint32 l, uint32 e, uint32 h)
{
    return uint64(uint64(l) | (uint64(e) << 32) | (uint64(h) << ((h == HIGHGUID_CORPSE) ? 48 : 52)));
}

uint32 GUID_HIPART(uint64 guid)
{
    uint32 t = ((uint64(guid) >> 48) & 0x0000FFFF);
    return (t == HIGHGUID_CORPSE) ? t : ((t >> 4) & 0x00000FFF);
}

uint32 GUID_ENPART(uint64 x)
{
    return IsGuidHaveEnPart(x)
            ? ((uint32)((x >> 32) & UI64LIT(0x00000000000FFFFF)))
            : 0;
}

uint32 GUID_LOPART(uint64 x)
{
    // _GUID_LOPART_3 and _GUID_LOPART_2 were both equal to PAIR64_LOPART
    return PAIR64_LOPART(x);
}

bool IsGuidHaveEnPart(uint64 guid)
{
    switch (GUID_HIPART(guid))
    {
        case HIGHGUID_ITEM:
        case HIGHGUID_PLAYER:
        case HIGHGUID_DYNAMICOBJECT:
        case HIGHGUID_CORPSE:
        case HIGHGUID_GROUP:
        case HIGHGUID_GUILD:
            return false;
        case HIGHGUID_GAMEOBJECT:
        case HIGHGUID_TRANSPORT:
        case HIGHGUID_UNIT:
        case HIGHGUID_PET:
        case HIGHGUID_VEHICLE:
        case HIGHGUID_MO_TRANSPORT:
        case HIGHGUID_AREATRIGGER:
        default:
            return true;
    }
}

char const* GetLogNameForGuid(uint64 guid)
{
    switch (GUID_HIPART(guid))
    {
        case HIGHGUID_ITEM:         return "item";
        case HIGHGUID_PLAYER:       return guid ? "player" : "none";
        case HIGHGUID_GAMEOBJECT:   return "gameobject";
        case HIGHGUID_TRANSPORT:    return "transport";
        case HIGHGUID_UNIT:         return "creature";
        case HIGHGUID_PET:          return "pet";
        case HIGHGUID_VEHICLE:      return "vehicle";
        case HIGHGUID_DYNAMICOBJECT:return "dynobject";
        case HIGHGUID_CORPSE:       return "corpse";
        case HIGHGUID_MO_TRANSPORT: return "mo_transport";
        case HIGHGUID_GROUP:        return "group";
        case HIGHGUID_GUILD:        return "guild";
        case HIGHGUID_AREATRIGGER:  return "areatrigger";
        case HIGHGUID_VIGNETTE:     return "vignette";
        default:
            return "<unknown>";
    }
}

#endif
