#pragma once

void EPD_DLY_LP(unsigned int ms);
void EPD_SPI_Write(unsigned char value);
void EPD_WriteCmd(unsigned char cmd);
void EPD_WriteData(unsigned char data);
void EPD_CheckStatus(void);
void EPD_LoadImage(unsigned char *image, int size);
void init_epd();
void deinit_epd(void);
void EPD_Display(unsigned char *image, int size);
void epd_display();
void epd_display_char(uint8_t data);
void epd_clear();