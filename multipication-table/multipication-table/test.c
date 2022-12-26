#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mult_table(int a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}

}
int main()
{
	int a = 0;
	printf("ÇëÊäÈë£º");
	scanf("%d", &a);
	mult_table(a);
	return 0;
}