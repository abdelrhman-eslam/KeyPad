/*
 * KPD_prog.c
 *
 *  Created on: Aug 14, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO.h"
#include "util/delay.h"
#include "KPD_int.h"


static const u8 GKPD_KEYS[16]={'1','4','7','c','2','5','8','0','3','6','9','=','/','*','-','+'};

void HKPD_voidInit(){

	MDIO_voidSetPortDirection(KPD_PORT, 0x0f);
	MDIO_voidSetPortValue(KPD_PORT,0xff);

}

u8 HKPD_u8GetPressedKey(){

	u8 Pressed_Key = 20;

	for (u8 col=0; col<4; col++){
		/*activate current column*/

		MDIO_voidSetPinValue(KPD_PORT, col, LOW);

		for(u8 row=0; row<4; row++){
			if(MDIO_U8GetPinValue(KPD_PORT,row+4) == 0){
				Pressed_Key= row+ (col*4) + 1 ;
			}
			while(MDIO_U8GetPinValue(KPD_PORT, row+4) == 0){}
			_delay_ms(10);
		}
		MDIO_voidSetPinValue(KPD_PORT, col, HIGH);
	}

	return GKPD_KEYS[Pressed_Key];	}

