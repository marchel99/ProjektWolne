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
#include "stm32l4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USER_BUTTON_Pin GPIO_PIN_13
#define USER_BUTTON_GPIO_Port GPIOC
#define LD6_Pin GPIO_PIN_10
#define LD6_GPIO_Port GPIOB
#define LD7_Pin GPIO_PIN_11
#define LD7_GPIO_Port GPIOB
#define LD8_Pin GPIO_PIN_12
#define LD8_GPIO_Port GPIOB
#define LD9_Pin GPIO_PIN_13
#define LD9_GPIO_Port GPIOB
#define LD10_Pin GPIO_PIN_14
#define LD10_GPIO_Port GPIOB
#define LD11_Pin GPIO_PIN_15
#define LD11_GPIO_Port GPIOB
#define USER_BUTTON2_Pin GPIO_PIN_8
#define USER_BUTTON2_GPIO_Port GPIOC
#define USER_BUTTON3_Pin GPIO_PIN_9
#define USER_BUTTON3_GPIO_Port GPIOC
#define LD1_Pin GPIO_PIN_5
#define LD1_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_6
#define LD2_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_7
#define LD3_GPIO_Port GPIOB
#define LD4_Pin GPIO_PIN_8
#define LD4_GPIO_Port GPIOB
#define LD5_Pin GPIO_PIN_9
#define LD5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
