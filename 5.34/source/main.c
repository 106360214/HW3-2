#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int integerPower(int base, int exponent);
	int x, y;

	printf("�п�J���ƻP���ơG");
	scanf_s("%d%d", &x, &y);
	printf("%d��%d���謰�G%d\n", x, y, integerPower(x, y));

	system("pause");
	return 0;
}

int integerPower(int base, int exponent)
{
	int a;
	if (exponent == 1)
	{
		return base;
	}
	else
	{
		a = base*integerPower(base, exponent - 1);
	}
	return a;
}