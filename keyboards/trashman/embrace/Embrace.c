#include "embrace.h"
void matrix_init_kb(void) {
  matrix_init_user();
}
void matrix_scan_kb(void) {
  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
  led_set_user(usb_led);
}

led_config_t g_led_config = {
    {
      // Key Matrix to LED Index
      // TODO Fix the last row and column; I screwed up the mappings for space + enter,
      // and a lot of the final column
      {  NO_LED, 4, 9,    14,   18,   23,    27 },
      {  0,      5, 10,   15,   19,   24,    28,   33,   37, 40, 44, 47 },
      {  1,      6, 11,   16,   20,   25,    29,   34,   38, 41, 51, 48 },
      {  2,      7, 12,   17,   21,   26,    30,   35,   39, 42, 45, 50 },
      {  3,      8, 13,         22,        31, 32, 36,       43, 46, 49 }
    }, {
      // LED Index to Physical Position
      {10, 0}, {31, 0}, {53, 0}, {75, 0}, {97, 0}, {119, 0},
      {0, 16}, {20, 16}, {40, 16}, {60, 16}, {80, 16}, {100, 16}, {120, 16}, {140, 16}, {160, 16}, {180, 16}, {200, 16}, {215, 16},
      {2, 32}, {24, 32}, {44, 32}, {64, 32}, {84, 32}, {104, 32}, {124, 32}, {144, 32}, {164, 32}, {184, 32}, {204, 32}, {220, 32},
      {8, 48}, {28, 48}, {48, 48}, {68, 48}, {88, 48}, {108, 48}, {128, 48}, {148, 48}, {168, 48}, {188, 48}, {208, 48}, {224, 48},
      {2, 64}, {32, 64}, {52, 64}, {92, 64}, {122, 64}, {142, 64}, {168, 64}, {188, 64}, {208, 64}, {224, 64}
    }, {
      // LED Index to Flag
      4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4
    } 
};