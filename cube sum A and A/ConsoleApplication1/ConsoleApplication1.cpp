#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int a;

    cout << "Введите целое число: ";
    cin >> a;

    int sum = 0;
    int num = a;

    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;
    }

    int sumCube = sum * sum * sum;

    if (sumCube == a * a) 
    {
        cout << "Куб суммы цифр числа " << a << " равен a*a." << endl;
    }
    else 
    {
        cout << "Куб суммы цифр числа " << a << " не равен a*a." << endl;
    }

    return 0;
}
