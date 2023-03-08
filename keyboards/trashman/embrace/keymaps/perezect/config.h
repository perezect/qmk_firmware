/* 
Copyright 2023 Felis Perez & QMK Firmware

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

#define PERMISSIVE_HOLD
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 180
#define IGNORE_MOD_TAP_INTERRUPT  // Testing this setting

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
