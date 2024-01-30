#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    string result = "";
    string numberString = to_string(number);

    for (char digit : numberString) 
    {
        if (digit != '3' && digit != '6') 
        {
            result += digit;
        }
    }

    cout << "Число без цифр 3 и 6: " << result << endl;

    return 0;
}