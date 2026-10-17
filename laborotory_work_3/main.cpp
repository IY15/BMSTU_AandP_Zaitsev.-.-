#include <iostream>
#include <cmath>
using namespace std;
const double x1 = -7 , x2 = 11;
int main(){
    double x, dx, y;
    cout <<"Лаба 3, Задание 1, Вариант 7" << endl;
    cout <<"Введите dx: "; cin >> dx;
    x = x1 + dx;
    cout << "Полученный x = " << x << endl;
    while(x < x2){
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
        break;
    }
    cout <<"Лаба 3, Задание 2, Вариант 7" << endl;
    return 0;
}