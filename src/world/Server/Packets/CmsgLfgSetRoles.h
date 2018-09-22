/*
Copyright (c) 2014-2018 AscEmu Team <http://www.ascemu.org>
This file is released under the MIT license. See README-MIT for more information.
*/

#pragma once

#include <cstdint>

#include "ManagedPacket.h"
#include "WorldPacket.h"

namespace AscEmu { namespace Packets
{
    class CmsgLfgSetRoles : public ManagedPacket
    {
    public:
        uint8_t roles;

        CmsgLfgSetRoles() : CmsgLfgSetRoles(0)
        {
        }

        CmsgLfgSetRoles(uint8_t roles) :
            ManagedPacket(CMSG_LFG_SET_ROLES, 1),
            roles(roles)
        {
        }

    protected:
        bool internalSerialise(WorldPacket& packet) override
        {
            return false;
        }

        bool internalDeserialise(WorldPacket& packet) override
        {
            packet >> roles;
            return true;
        }
    };
}}