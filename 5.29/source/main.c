#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int lcm(int x, int y);
	int a, b;

	printf("請輸入兩個數：");
	scanf_s("%d%d", &a, &b);
	printf("最小公倍數為：%d\n", lcm(a, b));

	system("pause");
	return 0;
}

int lcm(int x, int y)
{
	int i, j, z, g;

	for (i = 1; i <=x*y ; i++)
	{
		z = i%x;
		g = i%y;
		if ((z == 0) && (g == 0))
		{
			break;
		}
	}

	return i;
}