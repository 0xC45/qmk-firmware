/* Copyright 2019 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "quantum.h"

enum macro_keycodes {
    MICMUTE = SAFE_RANGE,
    MACRO1,
    MACRO2,
    MACRO3,
    MACRO4,
    MACRO5,
    MACRO6,
    MACRO7,
    MACRO8
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_4x4( /* Base */
    MICMUTE, KC_MUTE, KC_VOLD, KC_VOLU,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    MACRO1,  MACRO2,  MACRO3,  MACRO4,
    MACRO5,  MACRO6,  MACRO7,  MACRO8
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MICMUTE:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F10)))));
    }
    break;
  case MACRO1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F1)))));
    }
    break;
  case MACRO2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F2)))));
    }
    break;
  case MACRO3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F3)))));
    }
    break;
  case MACRO4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F4)))));
    }
    break;
  case MACRO5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F5)))));
    }
    break;
  case MACRO6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F6)))));
    }
    break;
  case MACRO7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F7)))));
    }
    break;
  case MACRO8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT(SS_TAP(X_F8)))));
    }
    break;
  }
  return true;
}
