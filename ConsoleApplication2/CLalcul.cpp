#include "CLcalcul.h"
#include <math.h>
#include <iostream>

void CLcalcul::placepoint(double a, double b) {
	this->x = a;
	this->y = b;
}

double CLcalcul::distance(const CLcalcul &C) {
	double r1, r2;
	r1 = x - C.x;
	r2 = y - C.y;
	return sqrt(pow(r1, 2)+ pow(r2, 2));
}

