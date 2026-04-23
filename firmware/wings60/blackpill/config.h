#pragma once

#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6   // USART TX pin
#define SERIAL_USART_RX_PIN B7   // USART RX pin

#define WS2812_PWM_DRIVER PWMD5
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM6
#define WS2812_DMA_CHANNEL 6

#define EE_HANDS