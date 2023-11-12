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

	int n;
	int avg = 0;
	int a[10];

	FILE* fin = fopen("in6.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);
	if (n > 10) {
		printf("n не должно быть больше 10");
		return;
	}
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("n = %d\n", n);
	printf("a[%d] = ", n);
	for (int i = 0; i < n; i++) {
		avg += a[i];
		printf("%d ", a[i]);
	}

	avg = avg / n;
	for (int i = 0; i < n; i++) {
		if (a[i] < avg && a[i] % 2 == 0) {
			a[i] = a[i] / 2;
		}
	}

	FILE* fout = fopen("out6.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден");
		return;
	}

	for (int i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	printf("\nВывод: a[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	fclose(fout);

}

