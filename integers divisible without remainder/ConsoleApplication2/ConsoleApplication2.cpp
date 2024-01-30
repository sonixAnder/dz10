#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    cout << "Числа, на которые " << number << " делится без остатка: ";

    for (int i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            cout << i << " ";
        }
    }

    return 0;
}