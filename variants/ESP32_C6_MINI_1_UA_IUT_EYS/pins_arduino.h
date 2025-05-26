#pragma once

#include <stdint.h>
#include <stdbool.h>

// === UART (Serial) ===
#define PIN_SERIAL_TX 4    // LP_UART_TXD
#define PIN_SERIAL_RX 5    // LP_UART_RXD
static const uint8_t TX = PIN_SERIAL_TX;
static const uint8_t RX = PIN_SERIAL_RX;

// === I2C ===
#define PIN_WIRE_SDA 6     // LP_I2C_SDA
#define PIN_WIRE_SCL 7     // LP_I2C_SCL
static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

// === SPI (à adapter si utilisé) ===
#define PIN_SPI_SS    10
#define PIN_SPI_MOSI  11
#define PIN_SPI_MISO  12
#define PIN_SPI_SCK   13
static const uint8_t SS   = PIN_SPI_SS;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

// === Analog Pins ===
#define A0 0   // GPIO0 - ADC1_CH0
#define A1 1   // GPIO1 - ADC1_CH1
#define A2 2   // GPIO2 - ADC1_CH2

#define NUM_DIGITAL_PINS        8  // Total estimé
#define NUM_ANALOG_INPUTS       3

#undef LED_BUILTIN

// === Reset ===
// EN est une broche spéciale (Enable), pas utilisable en tant que GPIO
// Le bouton reset matériel agit directement sur EN (non mappable dans le code)

// === USB CDC info ===
#define USB_VID 0x303A
#define USB_PID 0x1001
#define USB_MANUFACTURER "IUT Angers"
#define USB_PRODUCT "ESP32-C6-MINI-1 UA Board"
