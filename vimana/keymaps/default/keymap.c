// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define OLED_SW USER07

enum combo_events {
  COMBO_DEL,
  COMBO_TAB
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                KC_Q, KC_W, KC_E, KC_R, KC_T,          KC_ESC, KC_LALT,         KC_Y, KC_U, KC_I, KC_O, KC_P,
                KC_A, KC_S, KC_D, KC_F, KC_G,  KC_LCTL,                KC_ENT,  KC_H, KC_J, KC_K, KC_L, KC_SCLN,
        LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B,          KC_LGUI, KC_MS_BTN2,     KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH),
                                       LT(1,KC_BSPC),  KC_MS_BTN2, MO(2),    KC_SPC
    ),

    [1] = LAYOUT(
    
    KC_1, KC_2, KC_3, KC_4, KC_5,                        _______, _______,             KC_6, KC_7, KC_8, KC_9, KC_0, 
    _______, _______, _______, _______, _______, _______,                  _______,    KC_MINS, KC_EQL,  KC_TILD, KC_GRV,  KC_QUOT, 
    _______, _______, KC_MUTE, KC_VOLU, KC_VOLD,         _______, _______,             KC_LBRC, KC_RBRC, _______, _______, KC_BSLS, 
                                           _______,      _______, _______,        _______  

    ),
    [2] = LAYOUT(
        KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,            _______, _______,           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        _______, _______, _______, _______, _______, _______,                 _______,   _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,         _______, _______,           _______, _______, _______, _______, _______,
                                              _______,       _______, _______,     _______
    ),
    [3] = LAYOUT(
        _______, KC_UP,   _______, _______, _______,         _______, _______,          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,                  _______, KC_F12, KC_F13, KC_F14, _______, _______,
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                   _______, _______,          CPI_SW,  SCRL_SW, ROT_L15, ROT_R15, _______,
                                              _______,       _______, _______,     _______
    )
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_del[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_Q, KC_A, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_DEL] = COMBO(combo_del, KC_DEL),
  [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
};
#endif
