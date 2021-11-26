/*
 * TIM_Callback.c
 *
 *  Created on: Nov 26, 2021
 *      Author: pukhov
 */
#include "gpio.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {

	if(htim->Instance == TIM2) {	//check if the interrupt comes from TIM2
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
	}
}

