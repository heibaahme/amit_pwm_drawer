/*
 * MACROS.h
*
 *  Created on: 1 Feb 2023
 *      Author: Ahmed emad
 */

#ifndef ETC_MACROS_H_
#define ETC_MACROS_H_

#define SET_PIN(REG, PIN_NUM) 		REG |=  (1 << PIN_NUM)
#define CLR_PIN(REG, PIN_NUM) 		REG &=~ (1 << PIN_NUM)
#define TOGGLE_PIN(REG, PIN_NUM) 	REG ^=  (1 << PIN_NUM)
#define GET_PIN(REG, PIN_NUM) 		((REG >> PIN_NUM) & 1)

#endif /* ETC_MACROS_H_ */
