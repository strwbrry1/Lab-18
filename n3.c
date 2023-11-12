// Lab 18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include "stdio.h"
#include "Windows.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Матвиенко Семён\n");
	printf("Задача 1\n");

	int a, b, c, d, e;
	int p;

	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("Ввод: %d, %d, %d, %d, %d\n", a, b, c, d, e);

	p = a + b + c + d + e;
	printf("p =  %d\n", p);

}

