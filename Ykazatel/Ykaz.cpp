#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_INCREMENT 10
#define MAX_STRING_LENGTH 20
using namespace std;

void One(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = i;

		printf("%d ", array[i]);

	}
}

void Two(int* array, int n, int m)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", (array + i * m + j));
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) 
		{
			printf("%5d ", *(array + i * m + j));
		}
		printf("\n");
	}

}

void Three(int* array, int n)
{
	printf("Ваш массив: ");
	for (int i = 0; i < n; i++)
	{
		array[i] = i;
		printf("%d ", array[i]);
	}
	int sum = 0;
	for (int  i = 0; i < n; i++) {
		sum = sum + *(array + i);
	}
	printf("\nСумма элементов равна = %d", sum);
}


int main()
{
	system("chcp 1251>null");

	//номер 1 (а)
	/*printf("Создать одномерный числовой массив, заполнить его, вывести значения на экран(память под массив должна быть выделена динамически)\n");
	int n ;
	printf("Введите размерность массива: ");
	scanf_s("%d", &n);
	int* array = (int*)malloc(sizeof(int) * n);
	One(array, n);
	free(array);*/
	
	//номер 1 (б)
	/*printf("Создать двумерный числовой массив, заполнить его, вывести значения на экран(память под массив должна быть выделена динамически)\n");
	int n, m;
	printf("Введите количество строк: ");
	scanf_s("%d", &n);
	printf("Введите количество столбцов: ");
	scanf_s("%d", &m);
	int* array = (int*)malloc(n * m * sizeof(int));
	Two(array, n, m);
	free(array);*/

	//номер 1 (в)
	/*printf("Создать строку (массив символов), заполнить его, вывести значения на экран (память под массив должна быть выделена динамически)\n");
	int n;
	printf("Введите количество символов с учетом пробелов: ");
	scanf_s("%d", &n);
	while (getchar() != '\n');
	char* a = (char*)malloc(sizeof(char) * n + 2);
	printf("Введите строку: ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%c", &a[i]);
	}
	a[n] = '\0';
	printf("Ваша строка: ");
	printf("%s", a);
	free(a);*/

	//номер 2
	printf("Вычислить сумму элементов массива, не используя переменные с индексом.\n");
	int n;
	printf("Введите размерность массива: ");
	scanf_s("%d", &n);
	int* array = (int*)malloc(sizeof(int) * n);
	Three(array, n);
	free(array); 
}
