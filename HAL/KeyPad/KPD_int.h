/*
 * KPD_int.h
 *
 *  Created on: Aug 14, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef HAL_KEYPAD_KPD_INT_H_
#define HAL_KEYPAD_KPD_INT_H_
#include "../../LIB/STD_TYPES.h"
#define KPD_PORT	PORTA	//config.h

void HKPD_voidInit();
u8 HKPD_u8GetPressedKey();

#endif /* HAL_KEYPAD_KPD_INT_H_ */
