#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			int j;
			for (j = 1; j <= i; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	return 0;
}
