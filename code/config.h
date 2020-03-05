/*
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

#include QMK_KEYBOARD_CONFIG_H

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1257
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keebio
// Left
// #define PRODUCT         DINO
// Right
#define PRODUCT         SAUR
#define DESCRIPTION     Split 60/65 percent staggered keyboard

// Pick either or
// #define MASTER_LEFT
#define MASTER_RIGHT

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS { F7, B7, B5, D7, C6, D0 }
#define MATRIX_COL_PINS { F6, F5, F4, F1, F0, D2, D3, B6 } 
#define MATRIX_ROW_PINS_RIGHT { F7, B7, B5, D7, C6, D0 }
#define MATRIX_COL_PINS_RIGHT { F6, F5, F4, F1, F0, D2, D3, B6 } 
// #define SPLIT_HAND_PIN D2

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
// #define RGB_DI_PIN D3
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 16    // Number of LEDs
