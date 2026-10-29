#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	int s1, s2, s3;
	char c;

	printf("Введите сторону s1 первого квадрата\n");
	scanf("%d", &s1);

	printf("Введите сторону s2 области пересечения двух квадратов\n");
	scanf("%d", &s2);

	printf("Введите сторону s3 второго квадрата\n");
	scanf("%d", &s3);

	printf("Введите символ\n");
	scanf(" %c", &c);

	if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s2 > s1 || s2 > s3)
	{
		printf("Размеры заданы неверно");
		return 1;
	}
	int size = s1 + s3 - s2;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int a1 = (i < s1 && j < s1);
			int a2 = (i >= s1 - s2 && i < s1 - s2 + s3 && j >= s1 - s2 && j < s1 - s2 + s3);

			if (a1 && a2)
				printf(" ");
			else if (a1 || a2)
				printf("%c", c);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}