#include <iostream>
#include "figure.h"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;

    cout << "Введите координаты x и y для 1 точки: ";
    cin >> x1 >> y1;
    cout << "Введите координаты x и y для 2 точки: ";
    cin >> x2 >> y2;
    cout << "Введите координаты x и y для 3 точки: ";
    cin >> x3 >> y3;
    cout << "Введите координаты x и y для 4 точки: ";
    cin >> x4 >> y4;

    Figure f1(x1, x2, x3, x4, y1, y2, y3, y4);
    f1.show();

    if (f1.is_square()) {
        cout << "Это квадрат" << endl;
    }
    else if (f1.is_romb()) {
        cout << "Это ромб" << endl;
    }
    else if (f1.is_prug()) {
        cout << "Это прямоугольник" << endl;
    }
    else {
        cout << "Это четырёхугольник" << endl;
    }

    if (f1.is_in_circle()) {
        cout << "В этот четырехугольник может быть вписана окружность." << endl;
    }
    else {
        cout << "В этот четырехугольник не можеь быть вписана окружность" << endl;
    }

    if (f1.is_out_circle()) {
        cout << "Этот четырехугольник может быть вписан в окружность" << endl;
    }
    else {
        cout << "Этот четырехугольник не может быть вписан в окружность" << endl;
    }

    cout << endl;
    return 0;
}