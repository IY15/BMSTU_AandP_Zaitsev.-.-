#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, y, x1, y1, R;
    cout <<"Лаба 2, Задание 1, Вариант 7" << endl;
    cout << "Введите значение x: ";
    cin >> x;
    if (x >= - 7 and x <= -3){
        y = 3;
    }
    else if (x <= 3 and x > -3){
        y = 0 - sqrt(9 - x * x) + 3;
    }
    else if (x <= 6 and x > 3){
        y = -2 * x + 9;
    }
    else if (x <= 11 and x > 6){
        y = x - 9;
    }
    else {
        cout << "x вне области определения функции" << endl;
        // и не выводить y
    }
    cout << "Значение y = " << y << endl;
    cout <<"Лаба 2, Задание 2, Вариант 7" << endl;
    cout <<"Введите координаты точки x";
    cin >> x1;
    cout <<"Введите координаты точки y";
    cin >> y1;
    cout <<"Введите значени R";
    cin >> R;
    cout <<"Координаты вашей точки (x, y): (" << x1 << ", " << y1 <<")" <<endl;
    cout <<"Значение вашего R: " << R;
    if (pow((x1 + R), 2) + pow((y1 - R), 2) <= pow(R, 2)){
        cout << endl;
        cout << "Точка попадает";
    }
    else if(-R <= y1 && y1 <= 0 && 0 <= x1 && x1 <= 2 * R){
        cout << endl;
        cout <<"Точка попадает";
    }
    else{
        cout << endl;
        cout << "Точка не попадает";
    }
    return 0;
}