#include <ESP32-HUB75-MatrixPanel-I2S-DMA.h>


#define PANEL_RES_X 64 // 64 LEDs wide
#define PANEL_RES_Y 32 // 32 LEDs long
#define PANEL_CHAIN 1 // Only 1 panel
#define PANEL_BRIGHTNESS 100 // OFF = 0, MAX = 255

MatrixPanel_I2S_DMA *dma_display = nullptr; // Null pointer for the display

// Define all the colours for later use
uint16_t display_BLACK = dma_display->color565(0, 0, 0);
uint16_t display_WHITE = dma_display->color565(255, 255, 255);
uint16_t display_RED = dma_display->color565(255, 0, 0);
uint16_t display_GREEN = dma_display->color565(0, 255, 0);
uint16_t display_BLUE = dma_display->color565(0, 0, 255);

void setup() {
  // Set up a config struct
  HUB75_I2S_CFG mxconfig(
    PANEL_RES_X,
    PANEL_RES_Y,
    PANEL_CHAIN
  );

  mxconfig.clkphase = false;
  mxconfig.driver = HUB75_I2S_CFG::FM6126A; // Define the LED controller chip

  dma_display = new MatrixPanel_I2S_DMA(mxconfig); // Generate a new instance of display
  dma_display->begin(); // Start
  dma_display->setBrightness8(PANEL_BRIGHTNESS); // Set display brightness
  dma_display->clearScreen(); // Turn all LEDs off
}

void loop() {
  dma_display->fillScreen(display_BLUE); // Display all Blue
  delay(2000);
  dma_display->fillScreen(display_RED); // Display all Red
  delay(2000);
  dma_display->fillScreen(display_GREEN); // Display all Green
  delay(2000);
  dma_display->fillScreen(display_WHITE); // Display all White
  delay(2000);
}
