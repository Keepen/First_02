#include<stdio.h>
#include<stdlib.h>

void excel(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-3d*%-3d=%-3d", j, i, i*j);
			if (i == j)
			{
				printf("\n");
			}
		}
	}
}

int main()
{
	//excel('A');//当作其ASCII码值进行运算
	excel(9);
	system("pause");
	return 0;
}