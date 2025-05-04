#include <Adafruit_NeoPixel.h>

// LED strip constants
#define LED_COUNT 24 // Number of LEDs in each strip

// Define the pins for each strip
#define STRIP1_PIN 5
#define STRIP2_PIN 4
#define STRIP3_PIN 9
#define STRIP4_PIN 12
#define STRIP5_PIN 10
#define STRIP6_PIN 11

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
}

void loop() {
  // Preset 1: Different colors for each strip
  setStripColor(strip1, 100, 0, 0); // Red MidR
  setStripColor(strip2, 0, 100, 0); // Green topR
  setStripColor(strip3, 0, 0, 100); // Blue BotR
  setStripColor(strip4, 100, 100, 0); // Yellow topL
  setStripColor(strip5, 0, 100, 100); // Cyan BotL
  setStripColor(strip6, 100, 0, 100); // Magenta MidL
  showAllStrips();
  delay(10000);

  // Preset 2: 2 strips same color, 3 groups
  setStripColor(strip1, 100, 0, 0); // Red
  setStripColor(strip2, 100, 0, 0); // Red
  setStripColor(strip3, 100, 0, 0); // Red
  setStripColor(strip4, 0, 0, 100); // Blue
  setStripColor(strip5, 0, 0, 100); // Blue
  setStripColor(strip6, 0, 0, 100); // Blue
  showAllStrips();
  delay(10000);

  // Preset 3: Different luminosities of blue to white
  setStripColor(strip2, 0, 0, 200); // Blue
  setStripColor(strip1, 0, 0, 160); // Lighter Blue
  setStripColor(strip3, 0, 0, 120); // Even Lighter Blue
  setStripColor(strip5, 0, 0, 80); // Near White Blue
  setStripColor(strip6, 0, 0, 40); // Lightest Blue
  setStripColor(strip4, 0, 0, 0); // White
  showAllStrips();
  delay(10000);

  // Preset 4: All white
  setStripColor(strip1, 100, 100, 100);
  setStripColor(strip2, 100, 100, 100);
  setStripColor(strip3, 100, 100, 100);
  setStripColor(strip4, 100, 100, 100);
  setStripColor(strip5, 100, 100, 100);
  setStripColor(strip6, 100, 100, 100);
  showAllStrips();
  delay(10000);
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
