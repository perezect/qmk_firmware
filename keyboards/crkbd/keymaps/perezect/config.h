/*
This is the c configuration file for the keymap

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

#define PERMISSIVE_HOLD
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 180
#define SPLIT_WPM_ENABLE

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_SPLIT
    #define RGBLED_NUM 54
    // #define RGBLED_SPLIT { 27, 27 }
    #define RGBLIGHT_LIMIT_VAL 150
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
    #define RGBLIGHT_LAYERS
    #define RGBLIGHT_MAX_LAYERS 4
#endif

#ifdef RGB_MATRIX_ENABLE
    #define SPLIT_LAYER_STATE_ENABLE
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true  // turn off effects when suspended
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
    #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16
    #define RGB_MATRIX_DEFAULT_HUE 33
    #define RGB_MATRIX_DEFAULT_SPD 90
    #define RGB_MATRIX_HUE_STEP 60
    #define RGB_MATRIX_SAT_STEP 12
    #define RGB_MATRIX_VAL_STEP 10
    #define RGB_MATRIX_SPD_STEP 10

    #define ENABLE_RGB_MATRIX_BREATHING

    #define RGB_MATRIX_KEYPRESSES  // reacts to keypresses

    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE


#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"