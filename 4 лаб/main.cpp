#include <iostream>
#include <cmath>
#include "triangle.h"
#include <windows.h>

// Функции
bool isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

double calculateArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}
// Функции

int main() {
    //локализация
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    //локализация

    double a, b, c;
    std::cout << "Введите длины трех сторон треугольника: ";
    std::cin >> a >> b >> c;

    if (isTriangle(a, b, c)) {
        std::cout << "Периметр: " << calculatePerimeter(a, b, c) << std::endl;
        std::cout << "Площадь: " << calculateArea(a, b, c) << std::endl;
    }
    else {
        std::cout << "Ошибка: Треугольник с такими сторонами не существует." << std::endl;
    }

    return 0;
}
