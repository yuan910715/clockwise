#ifndef Display_h
#define Display_h

#include <Arduino.h>
#include "Adafruit_GFX.h"

class Display {
  private:
    Adafruit_GFX* _display;

  public:
    Display(Adafruit_GFX* display);
    void draw(const unsigned short frame[], int x, int y, int w, int h);
    void fillRect(int x, int y, int w, int h, uint16_t color);
    void drawRect(int x, int y, int w, int h, uint16_t color);
    void drawCircle(int32_t x0, int32_t y0, int32_t r, uint32_t color);

    void setTextColor(uint16_t c);
    void setCursor(int16_t x, int16_t y);
    void print(String str);
    void setFont(const GFXfont *f);
    void println(String str);
    void setTextWrap(boolean wrapX, boolean wrapY);
    void setTextSize(uint8_t size);
    void drawHLine(int32_t x, int32_t y, int32_t w, uint32_t color);
    void drawVLine(int32_t x, int32_t y, int32_t w, uint32_t color);

    void refresh();
    
};




#endif