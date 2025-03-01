// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_CODE                                                                                                                                                            \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp GRAVE,         &kp DLLR,          &kp LPAR,          &kp RPAR,          &kp SQT,   \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp AMPS,          &kp EQUAL,         &kp LBKT,          &kp RBKT,          &kp SEMI,  \
U_NA,              &kp RALT,          &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              &kp BSLH,          &kp MINUS,         &kp COMMA,         &kp DOT,           &kp SLASH, \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp EXCL,          &kp BSPC,          &kp AT,            U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_CODE MIRYOKU_MAPPING

#define MIRYOKU_LAYER_BASE 																																								 	\
&kp Q,             &kp W,         &kp F,              &kp P,              &kp B,             &kp J,            &kp L,             &kp U,            &kp Y,           &kp SQT,               \
U_MT(LGUI, A),     U_MT(LALT, R), U_MT(LCTRL, S),     U_MT(LSHFT, T),     &kp G,             &kp M,            U_MT(LSHFT, N),    U_MT(LCTRL, E),   U_MT(LALT, I),   U_MT(LGUI, O),         \
U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C,              &kp D,              &kp V,             &kp K,            &kp H,             &kp COMMA,        U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH), \
U_NP,              U_NP,          U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_CODE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,            U_NP

#define MIRYOKU_LAYOUTMAPPING_CORNE( 					  	                 \ 
     	   K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09,            \
     	   K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19,            \
     	   K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29,            \
     	   N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39             \
) 																			 \
U_NA  	   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp  U_NA  \
&kp LSHFT  K10  K11  K12  K13  K14  	 K15  K16  K17  K18  K19  &kp  RSHFT \
U_NA       K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp  U_NA  \
               		 K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#define MIRYOKU_LAYER_LIST  \
MIRYOKU_X(BASE,   "Base")   \
MIRYOKU_X(EXTRA,  "Extra")  \
MIRYOKU_X(TAP,    "Tap")    \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav")    \
MIRYOKU_X(MOUSE,  "Mouse")  \
MIRYOKU_X(MEDIA,  "Media")  \
MIRYOKU_X(NUM,    "Num")    \  
MIRYOKU_X(SYM,    "Sym")    \
MIRYOKU_X(FUN,    "Fun")    \
MIRYOKU_X(CODE,   "Code")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_CODE  10

