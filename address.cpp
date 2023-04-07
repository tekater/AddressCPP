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

void Foo(int *a,int *b) // По указателю
{
	if (*a > *b) {
		cout << "max: " << *a << endl;
	}
	else {
		cout << "max: " << *b << endl;
	}
}

void znak(char *num) {
	int a = *num;
	cout << "Знак: " << a << endl;
}
void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void calc(int* a, int* b) {
	int num = 0;
	cout << "Выберите действие:\n[1] - Сложение\n[2] - Вычитание\n[3] - Умножение\n[4] - Деление\n";
	cin >> num;
	switch (num) {
	case 1:
		cout <<"Решение: " << * a + *b;
		break;
	case 2:
		cout << "Решение: " << *a - *b;
		break;
	case 3:
		cout << "Решение: " << *a * *b;
		break;
	case 4:
		if (*a == 0 || *b == 0) {
			cout << "Решение: 0";
		}
		else {
			cout << "Решение: " << *a / *b;
		}
		break;
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");

	int a = 7; int b = 4;
	//cout << "A: " << a << endl; cout << "B: " << b << endl; cout << "C: " << c << endl;
	Foo(&a, &b);

	char num = 0;
	cout << "Введите знак:\n";
	cin >> num;
	znak(&num);
	cout << endl;

	cout << "A: " << a; cout << " B: " << b << endl;
	Swap(&a, &b);
	cout << "A: " << a; cout << " B: " << b << endl;
	cout << endl;

	int A; cout << "Введите первое число: "; cin >> A;
	int B; cout << "Введите второе число: "; cin >> B;
	calc(&A,&B);

}
