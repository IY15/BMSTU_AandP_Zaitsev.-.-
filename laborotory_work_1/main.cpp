#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926579893538;
int main(){
    cout<<"Задание 1, функция 1. Вариант 7"<<endl;
    float alpha;
    double z;
    cout <<"Введите значение alpha для первой функции: ";
    cin >> alpha;
    z = pow(cos((3/8 * PI) - (alpha / 4)), 2) - pow(cos((11/8 * PI) + (alpha / 4)), 2);
    cout << "Результат вычисления: z = " << z << endl;
    cout<<"Задание 1, функция 2. Вариант 7"<<endl;
    cout<<"Введите значение параметра alpha для второй функции: ";
    cin >> alpha;
    double z2;
    z2 = ((sqrt(2)) / 2) * sin(alpha / 2);
    cout << "Результат вычисления: z2 = " << z2;
    return 0;
}