#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#pragma once

#include "Object.h"

extern "C"
{
    #include "../world/entrance.h"
}

class EntranceObject : public Object
{
private:
    rct_object_entry    _objectEntry;
    rct_entrance_type   _legacyType;

public:
    const rct_object_entry * GetObjectEntry() override { return &_objectEntry; }
    void *                   GetLegacyData()  override { return &_legacyType; }

protected:
    void Load(IStream * stream) override;
};
