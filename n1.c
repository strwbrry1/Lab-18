// Lab 18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "stdio.h"
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Матвиенко Семён\n");
	printf("Задача 1\n");

	int a, b, c;
	int p;

	scanf_s("%d%d%d", &a, &b, &c);
	printf("Ввод: %d, %d, %d\n", a, b, c);

	p = a * b * c;
	printf("p =  %d\n", p);

}

