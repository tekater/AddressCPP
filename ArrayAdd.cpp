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

void swaper(int *arr) {
	swap(*arr, *(arr+1));
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	int arr[length] = {};
	int* p_arr = arr;
	for (int i = 0; i < length; i++) {
		arr[i] = 1 + rand() % 100;
	}
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	} cout << endl << endl; // Вывод.



	for (int i = 0; i < length; i++) {
		if (i == length || i == length - 1) {

		}
		else {
			swaper(&arr[i]);
		}
	}

	int temp = arr[0];
	arr[0] = arr[length-1];
	arr[length - 1] = temp;


	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}// Вывод. 2

	
	
}
