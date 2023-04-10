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

void Sum(int p_arr, int* num, int* zero, int* disnum, int length = 5) {
	int sum = 0;
	int proz = 1;
	for (int i = 0; i <= length; i++) {
		sum += p_arr;
		proz *= p_arr;
		if (p_arr < 0) {
			*disnum += 1;;
		}
		if (p_arr > 0) {
			*num += 1;
		}
		if (p_arr == 0) {
			*zero += 1;
		}
		p_arr++;
	}
	cout << "Сумма: " << sum << "\nПроизведение: " << proz << endl;
}

int* subsets(int* arr1, int* arr2, int R = 4, int R2 = 10) {
	int* subr = nullptr, i, j;
	for (i = 0; i < R; i++) {
		for (j = 0; j < R2; j++) {
			if (arr2[i] == arr1[j]) {
				if (!subr) {
					subr = &arr1[j];
				}
				break;
			};
		}
		if (j == R2) {
			return nullptr;
		}
		return subr;
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");

	int arr[5] = { 5,10,15,5,10 };
	int p_arr = *arr;

	cout << "Задание 1-2\n";
	int num = 0; int zero = 0; int disnum = 0;

	Sum(p_arr, &num, &zero, &disnum);

	cout << "Нули: " << zero << "\nПоложительные: " << num - 1 << "\nОтрицательные: " << disnum << endl;

	cout << "\n\nЗадание 3\n";

	const int R = 4; const int R2 = 10;

	int arr1[R2] = { 1,2,3,4,5,0,3,4,2,1 };
	int arr2[R] = { 3,4,2,1 };

	cout << "A: ";
	for (int i = 0; i < R2; i++)
	{
		//arr1[i] = rand() % 9 + 1;
		cout << arr1[i] << " ";
	}
	cout << "\nB:             ";
	for (int i = 0; i < R; i++)
	{
		//arr2[i] = rand() % 9 + 1;
		cout << arr2[i] << " ";
	}
	int* sub = subsets(arr1, arr2);

	if (sub) { cout << "\nB является подмножеством A.\n"; }
	else { cout << "\nB не является подмножеством A."; }

	return 0;
}
