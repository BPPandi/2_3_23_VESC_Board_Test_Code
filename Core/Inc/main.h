/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CURREN_1_Pin GPIO_PIN_0
#define CURREN_1_GPIO_Port GPIOC
#define CURREN_2_Pin GPIO_PIN_1
#define CURREN_2_GPIO_Port GPIOC
#define CURREN_3_Pin GPIO_PIN_2
#define CURREN_3_GPIO_Port GPIOC
#define VSENS_1_Pin GPIO_PIN_0
#define VSENS_1_GPIO_Port GPIOA
#define VSENS_2_Pin GPIO_PIN_1
#define VSENS_2_GPIO_Port GPIOA
#define VSENS_3_Pin GPIO_PIN_2
#define VSENS_3_GPIO_Port GPIOA
#define TEMP_NTC_Pin GPIO_PIN_3
#define TEMP_NTC_GPIO_Port GPIOA
#define ADC_EXT1_Pin GPIO_PIN_5
#define ADC_EXT1_GPIO_Port GPIOA
#define ADC_EXT2_Pin GPIO_PIN_6
#define ADC_EXT2_GPIO_Port GPIOA
#define TEMP_MOTOR_Pin GPIO_PIN_4
#define TEMP_MOTOR_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_1
#define LED_RED_GPIO_Port GPIOB
#define L1_Pin GPIO_PIN_13
#define L1_GPIO_Port GPIOB
#define L2_Pin GPIO_PIN_14
#define L2_GPIO_Port GPIOB
#define L3_Pin GPIO_PIN_15
#define L3_GPIO_Port GPIOB
#define H1_Pin GPIO_PIN_8
#define H1_GPIO_Port GPIOA
#define H2_Pin GPIO_PIN_9
#define H2_GPIO_Port GPIOA
#define H3_Pin GPIO_PIN_10
#define H3_GPIO_Port GPIOA
#define EN_GATE_Pin GPIO_PIN_5
#define EN_GATE_GPIO_Port GPIOB
#define FAULT_Pin GPIO_PIN_7
#define FAULT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
