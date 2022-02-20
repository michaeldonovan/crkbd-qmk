/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define AUTO_SHIFT_REPEAT

#define IGNORE_MOD_TAP_INTERRUPT

#define MOUSEKEY_DELAY          0
#define MOUSEKEY_INTERVAL       16
// #define MOUSEKEY_MOVE_DELTA     20
#define MOUSEKEY_MAX_SPEED      5
#define MOUSEKEY_TIME_TO_MAX    64

// #define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 3

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

// #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define OLED_FONT_H "keyboards/crkbd/keymaps/michaeldonovan/glcdfont.c"
