#include <stdio.h>
#include "geometry.h"
#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif
    double a, b, c;

    printf("Введите три стороны треугольника: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Ошибка ввода\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Стороны должны быть больше нуля\n");
        return 1;
    }

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Треугольник с такими сторонами не существует\n");
        return 1;
    }

    double perimeter = getPerimeter(a, b, c);
    double area = getArea(a, b, c);

    printf("Периметр: %.2lf\n", perimeter);
    printf("Площадь: %.2lf\n", area);

    return 0;
}
