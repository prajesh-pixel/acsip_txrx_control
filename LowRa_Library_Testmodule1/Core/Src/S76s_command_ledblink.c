/*
 * S76s_command_ledblink.c
 *
 *  Created on: May 19, 2021
 *      Author: KIIT
 */

#include "S76s_command_ledblink.h"
#include "stm32f1xx_hal.h"

char* LoRa_TX(char* DATA){
	char* str1;
	str1= "rf set_frequency";
	strcat(str1,DATA);
	return str1;
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_SET);
	HAL_Delay(1000);
}

char* LoRa_tx(char* DATA){
	char* str1;
	str1= "rf tx";
	strcat(str1,DATA);
	return str1;
	return "ok";
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_RESET);
	HAL_Delay(1000);

}
