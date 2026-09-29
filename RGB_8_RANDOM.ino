//
// This is a program to get a 8 RGB module to work through cycles of 8 of a random color
//

#include "Freenove_WS2812_Lib_for_ESP32.h"

#define LEDS_PIN 2
#define LEDS_COUNT 8
#define CHANNEL 0

Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);

int red;
int green;
int blue;

void setup() {
  strip.begin(); //intialzies the LED
  strip.setBrightness(10); //sets LED brightness to 10
  delay(200);
}

void loop() {
  green = random(0, 256); //
  red = random(0, 256);   // gives us 3 random RGB values
  blue = random(0, 256);  // 

    
    for (int i = 0; i < LEDS_COUNT; i++) { //counts through our defined LEDS_COUNT
      strip.setLedColorData(i, red, green, blue); //gives each LED our random RGB values
      strip.show(); //sends information to the LEDS
    }
    delay(10);

}
