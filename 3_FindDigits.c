/* Program to print the number of positions where digits exactly divides a given number N
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int T, N, n, d, i;
	printf("Enter number of test cases : ");
	scanf("%d", &T);
	if (T < 1 || T > 15)
	{
		printf("Invalid number of test cases\n");
		exit(1);
	}
	do
	{
		printf("Enter number : ");
		scanf("%d", &N);
		if (N <= 0 || N > pow(10, 10))
		{
			printf("Invalid number\n");
			exit(1);
		}
		n = N;
		d = 0;
		while (n > 0)
		{
			if (N % (n % 10) == 0)
			{
				d = d + 1;
			}
			n = n / 10;
		}
		printf("Number of positions = %d", d);
	} while (--T > 0);
	return 0;
}