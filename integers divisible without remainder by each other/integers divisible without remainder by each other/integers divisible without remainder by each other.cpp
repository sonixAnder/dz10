#include <iostream>
#include <Windows.h>
using namespace std;

int main()

{
    setlocale(LC_ALL, "ru");
    int num1, num2;

    cout << "Введите два целых числа (пример: 5 5): ";
    cin >> num1 >> num2;

    cout << "Делители обоих чисел без остатка: ";
    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            cout << i << " ";
        }
    }

    return 0;
}
