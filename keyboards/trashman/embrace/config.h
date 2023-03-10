/* 
Copyright 2023 Evan Sailer & QMK Firmware

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

// #define MATRIX_ROWS 5
// #define MATRIX_COLS 12
// #define MATRIX_ROW_PINS { B0, D4, D6, B7, B3 }
// #define MATRIX_COL_PINS { F1, F4, F5, B6, B5, B4, D7, D0, D5, D3, D2, D1 }

#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B1 }

#define DIODE_DIRECTION ROW2COL

#define BACKLIGHT_LEVELS 1
#define BACKLIGHT_PIN F6

#define DEBOUNCE 5

#define USB_MAX_POWER_CONSUMPTION 100
#define PERMISSIVE_HOLD
#define RGB_DI_PIN F0
#define RGBLED_NUM 52
#define RGBLIGHT_SLEEP
#define IS_COMMAND() ( keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) )
