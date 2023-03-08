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

#include "Embrace.h"

enum layer_names {
  _DEFAULT,
  _SYMBOLS,
  _NUMS,
  _UTIL
};

enum custom_keycodes {
    BSP_DEL = SAFE_RANGE,
    RGB_SOL,  // RGB_MATRIX_SOLID_COLOR
    RGB_BRE,  // RGB_MATRIX_BREATHING
    RGB_REW,  // RGB_MATRIX_SOLID_REACTIVE_WIDE
    RGB_RE    // RGB_MATRIX_SOLID_REACTIVE
};

// Layer toggle and switch
#define T_SYM TT(_SYMBOLS)
#define TG_SYM TG(_SYMBOLS)

#define T_NUM TT(_NUMS)
#define TG_NUM TG(_NUMS)

#define TG_UTIL TG(_UTIL)
// Layer keys with functionality on tap
#define NUM_F LT(_NUMS, KC_F)
#define NUM_J LT(_NUMS, KC_J)

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT(
    //,-------------------------------------------------------.
        KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6, /*|-----------------------------------------*/ KC_MPLY,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   BSP_DEL,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        T_SYM,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LSPO,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH,  KC_RSPC,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, KC_LALT, KC_LCTL,           KC_ENT,          KC_SPC,          T_NUM, XXXXXXX, XXXXXXX, XXXXXXX
    //`-----------------------------------------------------------------------------------------------------------'
    ),

    [_SYMBOLS] = LAYOUT(
    //,-------------------------------------------------------.
        KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6, /*|-----------------------------------------*/ XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_GRV,  KC_EXLM, KC_AT,  KC_HASH,  KC_DLR, KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,  KC_DEL,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        TG_SYM, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN, KC_LBRC,  KC_RBRC, XXXXXXX, KC_UP,  KC_LBRC, KC_RBRC, KC_BSLS,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
    KC_LSFT, KC_ESC, KC_NO, LCTL(KC_INS),LSFT(KC_INS), KC_PGUP, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, KC_LALT, KC_LCTL,           KC_ENT,          KC_SPC,          TG_UTIL, XXXXXXX, XXXXXXX, XXXXXXX
    //`-----------------------------------------------------------------------------------------------------------'
    ),

    [_NUMS] = LAYOUT(
    //,-------------------------------------------------------.
        KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6, /*|-----------------------------------------*/ KC_MPLY,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_TAB,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_7,    KC_8,    KC_9,    KC_0,  XXXXXXX,  KC_BSPC,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        TG_UTIL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_6,    KC_4,     KC_5,   KC_6,   XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_1,     KC_2,   KC_3,  KC_DOT, KC_SLSH, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, KC_LALT, KC_LCTL,           KC_ENT,          KC_SPC,           TG_NUM,  KC_0, XXXXXXX,  XXXXXXX
    //`-----------------------------------------------------------------------------------------------------------'
    ),

    [_UTIL] = LAYOUT(
    //,-------------------------------------------------------.
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,/*|-----------------------------------------*/ XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, RGB_BRE, RGB_SOL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, RGB_REW, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, RGB_RE,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, TG_UTIL, XXXXXXX,           XXXXXXX,          XXXXXXX,          TG_UTIL, XXXXXXX, XXXXXXX, XXXXXXX
    //`-----------------------------------------------------------------------------------------------------------'
    )
    // TODO ADD GAME SPECIFIC LAYERS
};

//Encoder
void encoder_update_user(uint8_t index, bool clockwise) {
     if (index == 0) {
        switch(biton32(layer_state)){
            case _SYMBOLS:
                if (clockwise) {
                    tap_code(KC_WH_U);
                } else {
                    tap_code(KC_WH_D);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
        }
    }
}

// Handle custom keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint8_t saved_mods   = 0;
    uint16_t       temp_keycode = keycode;

    // Filter out the actual keycode from MT and LT keys.
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        temp_keycode &= 0xFF;
    }
    switch (temp_keycode) {
        case BSP_DEL:
            if (record->event.pressed) {
                saved_mods = get_mods() & MOD_MASK_SHIFT;

                if (saved_mods == MOD_MASK_SHIFT) {  // Both shifts pressed
                    register_code(KC_DEL);
                } else if (saved_mods) {   // One shift pressed
                    del_mods(saved_mods);  // Remove any Shifts present
                    register_code(KC_DEL);
                    add_mods(saved_mods);  // Add shifts again
                } else {
                    register_code(KC_BSPC);
                }
            } else {
                unregister_code(KC_DEL);
                unregister_code(KC_BSPC);
            }
            return false;
    }
    return true;

}
