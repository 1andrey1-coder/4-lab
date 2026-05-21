#include <math.h>
#include "geometry.h"

double getPerimeter(double a, double b, double c) {
    return a + b + c;
}

double getArea(double a, double b, double c) {
    double p = getPerimeter(a, b, c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
