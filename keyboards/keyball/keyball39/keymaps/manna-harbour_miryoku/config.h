// Copyright 2026 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define MASTER_LEFT

#define XXX KC_NO

// Compatibility aliases for current QMK keycode names.
#ifdef KEYBALL_MODERN_QMK
#define KC_MS_U MS_UP
#define KC_MS_D MS_DOWN
#define KC_MS_L MS_LEFT
#define KC_MS_R MS_RGHT
#define KC_BTN1 MS_BTN1
#define KC_BTN2 MS_BTN2
#define KC_BTN3 MS_BTN3
#define KC_WH_U MS_WHLU
#define KC_WH_D MS_WHLD
#define KC_WH_L MS_WHLL
#define KC_WH_R MS_WHLR
#define RGB_TOG UG_TOGG
#define RGB_MOD UG_NEXT
#define RGB_HUI UG_HUEU
#define RGB_SAI UG_SATU
#define RGB_VAI UG_VALU
#endif

#define LAYOUT_miryoku( \
    K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,        K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,        K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,        K35, K36, K37, N38, N39 \
) \
LAYOUT_universal( \
    K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,        K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,        K25, K26, K27, K28, K29, \
    XXX, XXX, XXX, K32, K33, K34,   K35, K36, XXX, XXX, XXX, K37 \
)

// Arrange the thumb layers as Media, Navigation, Function on the left and
// Symbol, Number, Mouse on the right.  Keep pointing controls on the trackball
// half; Mouse uses the right home-row index, middle, and ring keys for clicks
// and momentary trackball scrolling.
#define LAYOUT_keyball39_base( \
    K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,        K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,        K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,        K35, K36, K37, N38, N39 \
) \
LAYOUT_miryoku( \
    K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,        K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,        K25, K26, K27, K28, K29, \
    N30, N31, LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_FUN, KC_TAB),        LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_MOUSE, KC_DEL), N38, N39 \
)

#define LAYOUT_keyball39_mouse( \
    K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,        K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,        K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,        K35, K36, K37, N38, N39 \
) \
LAYOUT_miryoku( \
    K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,        KC_BTN1, KC_BTN2, SCRL_MO, K18, K19, \
    K20, K21, K22, K23, K24,        K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,        K35, K36, K37, N38, N39 \
)

#define MIRYOKU_LAYERMAPPING_BASE LAYOUT_keyball39_base
#define MIRYOKU_LAYERMAPPING_MOUSE LAYOUT_keyball39_mouse

// Miryoku uses more than the eight layers supported by Keyball's default.
#undef LAYER_STATE_8BIT
#define LAYER_STATE_32BIT
