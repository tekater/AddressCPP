#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int const length = 20;
// Указатель - это переменная, которая указывает на адрес другой переменной.
// Синтаксис создания: тип_данных * имя_указателя.
// & - оператор взятий адреса
// * - позволяет показать содержимое по адресу, например | Покажет значение: cout << *p_a / Покажет Адрес cout << p_a;

// Арифметика указателей и массивы


int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");

	int arr[5] = {5,10,15,5,10};
	//int arr[5] = { 2,2,2,2,2 };
	int* p_arr = arr;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *p_arr;
		p_arr++;
	}
	cout << "Сумма: " << (*p_arr + 0) + (*p_arr + 1) + (*p_arr + 2) + (*p_arr + 3) + (*p_arr + 4) << endl;
	cout << "Sum: " << sum << endl;
	
	
}
