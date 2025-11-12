#include <TFT_eSPI.h>
#include <Wire.h>
#include <cst816d.h>

#define TP_RST 25
#define I2C_SDA 33
#define I2C_SCL 32

#define WIDTH 240
#define HEIGHT 320

TFT_eSPI tft = TFT_eSPI();
CST816D touch(TP_RST, -1, Wire); // irq pin = -1

void setup() {
  Serial.begin(115200);
  Wire.begin(I2C_SDA, I2C_SCL);

  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_WHITE);

  if (!touch.begin(WIDTH, HEIGHT)) {
    Serial.println("Touch init failed!");
    while (1);
  }

  touch.set_rotation(1);
  Serial.println("Touch initialized OK");
}

void loop() {
  uint16_t x = touch.get_x();
  uint16_t y = touch.get_y();

  if (x != 0 || y != 0) {
    Serial.printf("Touch at X=%d Y=%d\n", x, y);
    tft.fillCircle(x, y, 5, TFT_RED);
  }
}
