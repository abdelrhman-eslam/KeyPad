/*
 * KPD_int.h
 *
 *  Created on: Aug 14, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef HAL_KEYPAD_KPD_INT_H_
#define HAL_KEYPAD_KPD_INT_H_
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO.h"
#include "util/delay.h"



#define KPD_PORT	PORTA	//config.h

#define RowNumber 4
#define ColNumber 4

u8 G_u8PortNum;


void HKPD_voidInit();
u8 HKPD_u8GetPressedKey();

#endif /* HAL_KEYPAD_KPD_INT_H_ */
