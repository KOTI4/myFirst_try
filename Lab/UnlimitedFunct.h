#pragma once
#ifndef _WORK_ 
#define _WORK_ 
//функция min с переменным числом параметров, которая находит минимальный элемент среди введеных
void  min( int *min ,int  k, ...);


void minu(int a, int b, int *s);
void  minu(double a, double b, double *s);
void minu(long a, long b, long *s);
//void MinusKom(int a1, int a2, int b1, int b2, int *kom);
//double MinusKom(double a1, double a2, double b1, double b2);
//long MinusKom(long a1, long a2, long b1, long b2);
//int MinusKom(int a1, int a2, int b1, int b2);
//void minu(int a1, int a2, int b1, int b2, int *kom);

//перегруженная функция находящая разность целых чимел типа double
void  minu(double a1, double a2, double b1, double b2, double *k1, double *k2);


//перегруженная функция находящая разность целых чимел типа long
void  minu(long a1, long a2, long b1, long b2, long *k1, long *k2);

//перегруженная функция находящая разность целых чимел типа int 
void  minu(int a1, int a2, int b1, int b2, int *k1, int *k2);

//ввод уменьшаемого и вычитаемого типа int 
void vvod(int *x, int *y);

//ввод уменьшаемого и вычитаемого  типа long
void vvod(long *x, long *y);

//ввод уменьшаемого и вычитаемого типа double
void vvod(double *x, double *y);
//void VvodKomp(int *komA1, int *komA2, int *komB1, int *komB2);
//void VvodKomp(float  *komA1, float  *komA2, float  *komB1, float *komB2);
//void VvodKomp(double *komA1, double *komA2, double *komB1, double *komB2);
//void VvodKomp(long  *komA1, long  *komA2, long  *komB1, long  *komB2);

//присвоение комплексным числам случайных значений
void RandKomp(float  *komA1, float  *komA2, float  *komB1, float *komB2);

//присвоение комплексным числам случайных значений
void RandKomp(int  *komA1, int  *komA2, int   *komB1, int  *komB2);

//присвоение комплексным числам случайных значений
void RandKomp(double  *komA1, double   *komA2, double    *komB1, double   *komB2);
#endif