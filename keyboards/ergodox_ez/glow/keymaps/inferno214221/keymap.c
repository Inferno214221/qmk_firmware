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
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_CALCULATOR,                                  KC_PSCREEN,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TG(1),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_HOME,                                        KC_END,         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           TO(2),
    KC_LGUI,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_GRAVE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_PGUP,                                        KC_PGDOWN,      KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLASH,
    LCTL(KC_X),     KC_MINUS,       KC_EQUAL,       KC_UP,          KC_DOWN,                                                                                                        KC_LEFT,        KC_RIGHT,       KC_LBRACKET,    KC_RBRACKET,    KC_DELETE,
                                                                                                    KC_TRANSPARENT, KC_MEH,         KC_PC_COPY,     KC_PC_PASTE,
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
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255} },

    [1] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {89,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255}, {157,255,255}, {157,255,255}, {139,255,255}, {139,255,255} },

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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

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

