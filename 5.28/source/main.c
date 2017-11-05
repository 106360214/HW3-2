#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	int asc(char x);

	printf("輸入一個字母：");
	scanf_s("%c", &a);
	a = asc(a);
	printf("轉換後：%c\n", a);

	system("pause");
	return 0;
}

int asc(char x)
{
	if (x <= 90)
	{
		x = x + 32;
	}
	else
	{
		x = x - 32;
	}
	return x;
}