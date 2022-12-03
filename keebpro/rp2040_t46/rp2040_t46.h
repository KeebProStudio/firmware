/*
 * @Author: Fengz
 * @Date: 2022-03-26 10:38:54
 * @LastEditTime: 2022-04-03 09:49:22
 * @LastEditors: Fengz
 * @Description: 
 * @FilePath: /undefined/Users/fengz/qmk_firmware/keyboards/rp2040_example/rp2040_example.h
 * @My Blog: http://sync.sh
 */


#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_all( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302, K303,             K306, K307, K308, K309, K310, K311  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211 }, \
	{ K300,  K301,  K302,  K303,  KC_NO, KC_NO, K306,  K307,  K308,  K309,  K310,  K311 }  \
}
