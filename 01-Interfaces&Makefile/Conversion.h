#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED
#include <stdio.h>

float fahr, celsius;

const int LOWER = 0; // lower limit of table
const int UPPER = 300; // upper limit
const int STEP = 20; // step size

const float LOWERF = -17.78; // lower limit of table
const float UPPERF = 148.89; // upper limit
const float STEPF = 11.12; // step size

double Celsius(double f);

double Farenheit(double c);

#endif