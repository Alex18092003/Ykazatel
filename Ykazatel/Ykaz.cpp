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
	printf("��� ������: ");
	for (int i = 0; i < n; i++)
	{
		array[i] = i;
		printf("%d ", array[i]);
	}
	int sum = 0;
	for (int  i = 0; i < n; i++) {
		sum = sum + *(array + i);
	}
	printf("\n����� ��������� ����� = %d", sum);
}


int main()
{
	system("chcp 1251>null");

	//����� 1 (�)
	/*printf("������� ���������� �������� ������, ��������� ���, ������� �������� �� �����(������ ��� ������ ������ ���� �������� �����������)\n");
	int n ;
	printf("������� ����������� �������: ");
	scanf_s("%d", &n);
	int* array = (int*)malloc(sizeof(int) * n);
	One(array, n);
	free(array);*/
	
	//����� 1 (�)
	/*printf("������� ��������� �������� ������, ��������� ���, ������� �������� �� �����(������ ��� ������ ������ ���� �������� �����������)\n");
	int n, m;
	printf("������� ���������� �����: ");
	scanf_s("%d", &n);
	printf("������� ���������� ��������: ");
	scanf_s("%d", &m);
	int* array = (int*)malloc(n * m * sizeof(int));
	Two(array, n, m);
	free(array);*/

	//����� 1 (�)
	/*printf("������� ������ (������ ��������), ��������� ���, ������� �������� �� ����� (������ ��� ������ ������ ���� �������� �����������)\n");
	int n;
	printf("������� ���������� �������� � ������ ��������: ");
	scanf_s("%d", &n);
	while (getchar() != '\n');
	char* a = (char*)malloc(sizeof(char) * n + 2);
	printf("������� ������: ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%c", &a[i]);
	}
	a[n] = '\0';
	printf("���� ������: ");
	printf("%s", a);
	free(a);*/

	//����� 2
	printf("��������� ����� ��������� �������, �� ��������� ���������� � ��������.\n");
	int n;
	printf("������� ����������� �������: ");
	scanf_s("%d", &n);
	int* array = (int*)malloc(sizeof(int) * n);
	Three(array, n);
	free(array); 
}
