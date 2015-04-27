//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2014 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------------

//#####################################################################
//### MODULE: Sprites                                               ###
//#####################################################################
//### This module contains several functions and routines to manage ###
//### sprites and video memory in an Amstrad CPC environment.       ###
//#####################################################################
//

#ifndef CPCT_SPRITES_H
#define CPCT_SPRITES_H

#include <types.h>

// Calculate mem page value for cpct_setVideoMemoryPage
#define cpct_memPage6(A) ((A) >> 2)

extern void cpct_drawSprite2x8_aligned     (void *sprite, void* memory);
extern void cpct_drawSprite2x8Fast_aligned (void *sprite, void* memory);
extern void cpct_drawSprite4x8_aligned     (void *sprite, void* memory);
extern void cpct_drawSprite4x8Fast_aligned (void *sprite, void* memory);
extern void cpct_drawSprite                (void *sprite, void* memory, u8 width, u8 height);
extern void cpct_drawMaskedSprite          (void *sprite, void* memory, u8 width, u8 height);
extern void cpct_drawSolidBox              (void *memory, u8 colour_pattern, u8 width, u8 height);
extern void cpct_setVideoMemoryPage        (  i8 page_codified_in_6LSb);
extern void cpct_setVideoMemoryOffset      (  i8 offset);
extern void cpct_memset                    (void *array, u8 value, u16 size);

extern   u8 cpct_px2byteM0(u8 px0, u8 px1);
extern   u8 cpct_px2byteM1(u8 px0, u8 px1, u8 px2, u8 px3);

#endif
