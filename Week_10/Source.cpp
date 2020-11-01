#include<stdio.h>
int pyramid(int x)
{
	int num = 1;
	int n = 0;
	char a = 'A';
	for (int i = 0; i < x; i++)
	{
		for (int j = i; j < x - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{

			if (i > 25)
			{
				n = i % 26;
			}
			
			printf("%c ", a + n);
		}
		if (a + n == 'Z')
		{
			num++;
		}
		n++;
		printf("\n");
	}
	return num;
}

int main()
{
	int x,n;
	scanf_s("%d", &x);
	n=pyramid(x);
	printf("Count Loop A : %d", n);
	return 0;
}