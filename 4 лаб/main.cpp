#include <iostream>
#include <cmath>
#include "triangle.h"
#include <windows.h>


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


int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    

    double a, b, c;
    std::cout << "Ââĺäčňĺ äëčíű ňđĺő ńňîđîí ňđĺóăîëüíčęŕ: ";
    std::cin >> a >> b >> c;

    if (isTriangle(a, b, c)) {
        std::cout << "Ďĺđčěĺňđ: " << calculatePerimeter(a, b, c) << std::endl;
        std::cout << "Ďëîůŕäü: " << calculateArea(a, b, c) << std::endl;
    }
    else {
        std::cout << "Îřčáęŕ: Ňđĺóăîëüíčę ń ňŕęčěč ńňîđîíŕěč íĺ ńóůĺńňâóĺň." << std::endl;
    }

    return 0;
}
