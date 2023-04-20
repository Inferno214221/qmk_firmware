#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
  ST_MACRO_41,
  ST_MACRO_42,
  ST_MACRO_43,
  ST_MACRO_44,
  ST_MACRO_45,
  ST_MACRO_46,
  ST_MACRO_47,
  ST_MACRO_48,
  ST_MACRO_49,
  ST_MACRO_50,
  ST_MACRO_51,
  ST_MACRO_52,
  ST_MACRO_53,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_CALCULATOR,                                  KC_PSCREEN,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TG(1),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_HOME,                                        KC_END,         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           TO(3),
    KC_LGUI,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_GRAVE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           ST_MACRO_4,                                     ST_MACRO_5,     KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLASH,
    LCTL(KC_X),     KC_MINUS,       KC_EQUAL,       KC_UP,          KC_DOWN,                                                                                                        KC_LEFT,        KC_RIGHT,       KC_LBRACKET,    KC_RBRACKET,    KC_DELETE,
                                                                                                    TO(2),          KC_MEH,         KC_PC_COPY,     KC_PC_PASTE,
                                                                                                                    KC_LALT,        KC_RCTRL,
                                                                                    KC_LSHIFT,      KC_BSPACE,      KC_LCTRL,       KC_LGUI,        KC_SPACE,       KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    TO(2),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
    TO(0),          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  TO(0),          TO(0),                                          TO(0),          TO(0),          TO(0),          TO(0),          KC_SYSTEM_SLEEP,KC_SYSTEM_POWER,TO(0),
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                                                                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_7,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
    KC_GRAVE,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_8,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT,
    KC_LCTRL,       KC_F1,          KC_F2,          KC_F3,          KC_M,                                                                                                           KC_DELETE,      KC_SLASH,       KC_LEFT,        KC_DOWN,        KC_RIGHT,
                                                                                                    KC_9,           KC_0,           KC_LBRACKET,    KC_RBRACKET,
                                                                                                                    LGUI(KC_PSCREEN),KC_TRANSPARENT,
                                                                                    KC_BSPACE,      KC_SPACE,       KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_28,    ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    TO(0),
    KC_TRANSPARENT, ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_33,    ST_MACRO_34,    ST_MACRO_35,    ST_MACRO_36,    ST_MACRO_37,    TO(0),
    KC_TRANSPARENT, ST_MACRO_16,    KC_TRANSPARENT, ST_MACRO_17,    KC_TRANSPARENT, ST_MACRO_18,                                                                    ST_MACRO_38,    KC_TRANSPARENT, ST_MACRO_39,    ST_MACRO_40,    ST_MACRO_41,    ST_MACRO_42,
    KC_TRANSPARENT, ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    KC_TRANSPARENT, ST_MACRO_22,    ST_MACRO_23,                                    KC_TRANSPARENT, ST_MACRO_43,    ST_MACRO_44,    ST_MACRO_45,    ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,
    KC_TRANSPARENT, ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,                                                                                                    ST_MACRO_49,    ST_MACRO_50,    ST_MACRO_51,    ST_MACRO_52,    KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_53,    KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_DOT, KC_EQUAL, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_COMMA, KC_EQUAL, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_MINUS, KC_EQUAL, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
    COMBO(combo1, ST_MACRO_1),
    COMBO(combo2, ST_MACRO_2),
    COMBO(combo3, ST_MACRO_3),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255} },

    [1] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255} },

    [3] = { {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255}, {89,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_F)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_KP_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_A)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_7) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_7) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_7)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_6)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_8)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_4)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_4)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_6)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_7)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_2)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_9) SS_DELAY(100) SS_TAP(X_KP_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_9) SS_DELAY(100) SS_TAP(X_KP_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_0)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_KP_7)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_4) SS_DELAY(100) SS_TAP(X_KP_8)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_0)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_7)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_9)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_9)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_KP_0)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_8)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_A)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_KP_9) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_D)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_3) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_4));
    }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_KP_7)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_9) SS_DELAY(100) SS_TAP(X_KP_0)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_9) SS_DELAY(100) SS_TAP(X_KP_2)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_KP_9)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_8) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_0)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};



