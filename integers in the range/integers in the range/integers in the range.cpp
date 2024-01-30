#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int count = 0;

    for (int i = 100; i <= 999; i++) 
    {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int ones = i % 10;

        if (hundreds == tens || hundreds == ones || tens == ones) 
        {
            count++;
        }
    }
    cout << "Считаем... подождите" << endl;
    Sleep(5000);
    cout << "Кол-во чисел с двумя одинаковыми цифрами: " << count << endl;
    return 0;
}
