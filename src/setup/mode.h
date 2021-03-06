// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 2008 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//

#ifndef SETUP_MODE_H
#define SETUP_MODE_H

#include "d_mode.h"
#include "d_iwad.h"

typedef void (*GameSelectCallback)(void);
extern GameMission_t gamemission;

void SetupMission(GameSelectCallback callback);
void InitBindings(void);
char *GetExecutableName(void);
char *GetGameTitle(void);
const iwad_t **GetIwads(void);

#endif /* #ifndef SETUP_MODE_H */

