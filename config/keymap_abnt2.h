#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * BASE SYMBOLS:
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ' │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ´ │ [ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ç │ ~ │ ] │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┤
 * │    │ \ │ Z │ X │ C │ V │ B │ N │ M │ < │ > │ ; │ / │      │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬──┴─┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// *1*
#define BR_SQT   GRAVE // '
#define BR_1     N1    // 1
#define BR_2     N2    // 2
#define BR_3     N3    // 3
#define BR_4     N4    // 4
#define BR_5     N5    // 5
#define BR_6     N6    // 6
#define BR_7     N7    // 7
#define BR_8     N8    // 8
#define BR_9     N9    // 9
#define BR_0     N0    // 0
#define BR_MINUS MINUS // )
#define BR_EQUAL EQUAL // =
 
// *2*
#define BR_Q     Q    // Q
#define BR_W     W    // W
#define BR_E     E    // E
#define BR_R     R    // R
#define BR_T     T    // T
#define BR_Y     Y    // Y
#define BR_U     U    // U
#define BR_I     I    // I
#define BR_O     O    // O
#define BR_P     P    // P
#define BR_ACUTE LBKT // ´ (dead)
#define BR_LBKT  RBKT // [

// *3*
#define BR_A     A    // A
#define BR_S     S    // S
#define BR_D     D    // D
#define BR_F     F    // F
#define BR_G     G    // G
#define BR_H     H    // H
#define BR_J     J    // J
#define BR_K     K    // K
#define BR_L     L    // L
#define BR_CEDIL SEMI // Ç
#define BR_TILDE SQT  // ~ (dead)
#define BR_RBKT  BSLH // ]

// *4*
#define BR_BSLH  NUBS  // (backslash)
#define BR_Z     Z     // Z
#define BR_X     X     // X
#define BR_C     C     // C
#define BR_V     V     // V
#define BR_B     B     // B
#define BR_N     N     // N
#define BR_M     M     // M
#define BR_COMMA COMMA // ,
#define BR_DOT   DOT   // .
#define BR_SEMI  SLASH // ;
#define BR_FSLH  INT1  // /

/*
 * SHIFT SYMBOLS:
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ " │ ! │ @ │ # │ $ │ % │ ¨ │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ` │ { │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ^ │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┤
 * │    │ | │   │   │   │   │   │   │   │ < │ > │ : │ ? │      │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬──┴─┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// *1*
#define BR_DQT   LS(BR_SQT)   // "
#define BR_EXCL  LS(BR_1)     // !
#define BR_AT    LS(BR_2)     // @
#define BR_HASH  LS(BR_3)     // #
#define BR_DLLR  LS(BR_4)     // $
#define BR_PRCNT LS(BR_5)     // %
#define BR_DIARS LS(BR_6)     // ¨
#define BR_AMPS  LS(BR_7)     // &
#define BR_STAR  LS(BR_8)     // *
#define BR_LPAR  LS(BR_9)     // (
#define BR_RPAR  LS(BR_0)     // )
#define BR_UNDER LS(BR_MINUS) // _
#define BR_PLUS  LS(BR_EQUAL) // +

// *2*
#define BR_GRAVE LS(BR_ACUTE) // `
#define BR_LBRC  LS(BR_LBKT)  // {

// *3*
#define BR_CARET LS(BR_TILDE) // ^
#define BR_RBRC  LS(BR_RBKT)  // }

// *4*
#define BR_PIPE  LS(BR_BSLH)  // |
#define BR_LT    LS(BR_COMMA) // <
#define BR_GT    LS(BR_DOT)   // >
#define BR_COLON LS(BR_SEMI)  // :
#define BR_QMARK LS(BR_FSLH)  // ?

/*
 *  ALTGR SYMBOLS
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ ° │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┤
 * │    │   │ « │ » │   │   │   │   │   │   │   │   │   │      │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬──┴─┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// *2*
#define BR_DGREE RA(BR_E) // °

// *4*
#define BR_LGLMT RA(BR_Z) // «
#define BR_RGLMT RA(BR_X) // »

/*
 * ┌────┬────┬────┬────┬────┬────┐         ┌───┬───┬───┬───┬───┬───┐
 * │    │    │    │    │    │    │         │   │   │   │   │   │   │
 * ├────┼────┼────┼────┼────┼────┤         ├───┼───┼───┼───┼───┼───┤
 * │    │    │    │    │    │    │         │   │   │   │   │   │   │
 * ├────┼────┼────┼────┼────┼────┤         ├───┼───┼───┼───┼───┼───┤
 * │    │    │    │    │    │    │         │   │   │   │   │   │   │
 * └────┴────┴────┼────┼────┼────┤         ├───┼───┼───┼───┴───┴───┘
 *             │   │   │   │         │   │   │   │
 *             └───┴───┴───┘         └───┴───┴───┘
 */
