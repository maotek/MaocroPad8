// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_AUDIO_MUTE,
        KC_A,   KC_B,   KC_C,
        KC_D,   KC_E,   KC_F
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {  NO_LED, NO_LED, NO_LED },
  {  0, 1, 2 },
  {  3, 4, 5 }
}, {
  // LED Index to Physical Position
  { 188,  16 }, { 187,  48 }, { 149,  64 },
  { 112,  64 }, {  37,  48 }, {  38,  16 },
}, {
  // LED Index to Flag
  4, 4, 4, 
  4, 4, 4
} };