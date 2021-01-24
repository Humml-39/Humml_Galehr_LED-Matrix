/*
 * _8x8_matrix_font.h
 *
 * Created: 24.01.2021 15:07:38
 *  Author: johih
 */ 


#ifndef MATRIX_FONT_H_
#define MATRIX_FONT_H_


extern void write2MAX7219(char adress, char data);
extern void halfwrite2MAX7219(char adress, char data);
extern void Matrix_init(int intensity, int shutdown);
extern void multiMatrix_init(int intensity, int shutdown, int NUMofMatrix);
extern void Matrix_intensity(int intensity, int NUMofMatrix);
extern void draw2Matrix(int row0, int row1, int row2, int row3, int row4, int row5, int row6, int row7);
extern void multidraw2Matrix(int row0, int row1, int row2, int row3, int row4, int row5, int row6, int row7,int Matrix);
extern void multiwrite2Matrix(char zeichen, int Matrix);
extern void write2Matrix(char zeichen);


#endif /* 8X8_MATRIX_FONT_H_ */