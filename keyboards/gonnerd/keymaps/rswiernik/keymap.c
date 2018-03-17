#include "gonnerd.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* qwerty, mac */
    [0] = KEYMAP_SPLIT_BKSP(\
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,       KC_7,    KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,       KC_U,    KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,       KC_J,    KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,
        KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,       KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(2),
        KC_NO,   KC_LALT, KC_LGUI,          KC_SPC,                      KC_NO,   KC_RCTL, KC_RGUI, KC_NO),
    /* qwerty, normal*/
    [1] = KEYMAP_SPLIT_BKSP(\
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,       KC_7,    KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,       KC_U,    KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,       KC_J,    KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,
        KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,       KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(2),
        KC_NO,   KC_LGUI, KC_LALT,          KC_SPC,                      KC_NO,   KC_RCTL, KC_RGUI, KC_NO),
    /* Useful things */
    [2] = KEYMAP_SPLIT_BKSP(\
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_VOLD, KC_VOLU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_UP,    KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, KC_TRNS, KC_TRNS,
        MO(3), KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_END,  KC_PGDN, KC_DOWN,  KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    /* not as useful things (leds, reset button)*/
    [3] = KEYMAP_SPLIT_BKSP(\
        RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAD, RGB_VAI,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, RGB_RMOD,RGB_TOG, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, RGB_HUI, RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, RGB_HUD, RGB_SAD, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
        };

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  return MACRO_NONE;
};
