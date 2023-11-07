#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Encoder.h>

// Screen initialization
const uint32_t SCREEN_WIDTH = 128; // OLED display width, in pixels
const uint32_t SCREEN_HEIGHT = 64; // OLED display height, in pixels

// Declaration for SSD1306 display connected using software SPI (default case):
const uint32_t OLED_MOSI   = 9;
const uint32_t OLED_CLK   = 10;
const uint32_t OLED_DC    = 11;
const uint32_t OLED_CS    = 12;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

// Knob initialization
const uint32_t KNOB_PIN_0 = 5;
const uint32_t KNOB_PIN_1 = 6;
const uint32_t KNOB_BUTTON = 7;
Encoder knob( KNOB_PIN_1, KNOB_PIN_1 );
// knob.read();

// Button initialization
const uint32_t AUX_BUTTON_1 = A3;
const uint32_t AUX_BUTTON_2 = A2;
const uint32_t AUX_BUTTON_3 = A1;
const uint32_t AUX_BUTTON_4 = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  KNOB_BUTTON.PinMode( INPUT );
  AUX_BUTTON_1.PinMode( INPUT );
  AUX_BUTTON_2.PinMode( INPUT );
  AUX_BUTTON_3.PinMode( INPUT );
  AUX_BUTTON_4.PinMode( INPUT );
}

void loop() {
  // put your main code here, to run repeatedly:

}

// Here's stuff that will come in handy with the graph
// display.drawLine(0, display.height()-1, i, 0, SSD1306_WHITE);
// display.clearDisplay();
// display.setTextSize(2); // Draw 2X-scale text
// display.setTextColor(SSD1306_WHITE);
// display.setCursor(10, 0);
// display.println(F("scroll"));
// display.display();      // Show initial text

