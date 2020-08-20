#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[1000] = { 1 };
int main()
{
	bool ch = 0;
	int sum = 0,max = -1;
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			a[j] *= 2;
			if (ch)
			{
				ch = 0;
				a[j]++;
			}
			if (a[j] >= 10)
			{
				a[j] %= 10;
				ch = 1;
				if (j > max)max = j;
			}
			else if (j>max)break;
		}
	}
	for (int i = 0; i <= 1000; i++)
	{
		sum += a[i];
	}
	printf("%d", sum);
}