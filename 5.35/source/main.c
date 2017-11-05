#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);
int main(void)
{
	int a;

	printf("輸入一個數字：");
	scanf_s("%d", &a);

	for (int i = 0; i <= a; i++)
	{
		printf("%llu \n", fibonacci(i));
		if (fibonacci(i) > fibonacci(i + 1))
		{
			break;
		}
	}

	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	unsigned long long int x;
	unsigned long long int n_1 = 0, n_2 = 1;

	if (n == 0)
	{
		x = n_1;
	}
	else if (n == 1)
	{
		x = n_2;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			x = n_1 + n_2;
			n_1 = n_2;
			n_2 = x;
		}
	}

	return x;
}