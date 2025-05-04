#include <Adafruit_NeoPixel.h>

// LED strip constants
#define LED_COUNT 24 // Number of LEDs in each strip

// Define the pins for each strip
#define STRIP1_PIN 4 //left mid
#define STRIP2_PIN 5 //left top
#define STRIP3_PIN 9 //left bot
#define STRIP4_PIN 10 //right mid
#define STRIP5_PIN 11 //right top
#define STRIP6_PIN 12 //right bot

// Create an instance of the Adafruit_NeoPixel class for each strip
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(LED_COUNT, STRIP1_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(LED_COUNT, STRIP2_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(LED_COUNT, STRIP3_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(LED_COUNT, STRIP4_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(LED_COUNT, STRIP5_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip6 = Adafruit_NeoPixel(LED_COUNT, STRIP6_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip1.begin();
  strip2.begin();
  strip3.begin();
  strip4.begin();
  strip5.begin();
  strip6.begin();
  
  setStripColor(strip1, 100, 0, 0); // Red
  setStripColor(strip2, 0, 100, 0); // Green
  setStripColor(strip3, 0, 0, 100); // Blue
  setStripColor(strip4, 100, 100, 0); // Yellow
  setStripColor(strip5, 0, 100, 100); // Cyan
  setStripColor(strip6, 100, 0, 100); // Magenta

  showAllStrips(); // Update the strips to display the colors
}

void loop() {
  // No dynamic behavior specified, so do nothing here
}

void setStripColor(Adafruit_NeoPixel &strip, uint8_t red, uint8_t green, uint8_t blue) {
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(red, green, blue));
  }
}

void showAllStrips() {
  strip1.show();
  strip2.show();
  strip3.show();
  strip4.show();
  strip5.show();
  strip6.show();
}
