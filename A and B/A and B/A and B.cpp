#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A, B;

	cout << "Введите число: ";
	cin >> A;

	cout << "Производим необходимые вычисления... Подождите" << endl;
	Sleep(5000);
	cout << "Готово! Вот резульат: " << endl;

	for (int i = A - 1; i > 1; i--)
	{
		B = i;
		
		if ((A % (B * B) == 0) && (A % (B * B * B) != 0))
			
		{
			
			cout << B << "\n";
		}
	}
	return 0;
}