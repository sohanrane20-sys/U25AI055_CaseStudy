/* Q. 2. Animesh has N empty candy jars, numbered from 1 to N, with infinite capacity. He performs M operations. Each operation is
described by 3 integers a, b and k. Here, a and b are indices of the jars, and k is the number of candies to be added inside each
jar whose index lies between a and b (both inclusive). Program to calculate the average number of candies after M operations.
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int N, M, a, b, k, i, j, sum;
	printf("Enter number of empty candy jars : ");
	scanf("%d", &N);
	if (N < 3 || N > pow(10, 7))
	{
		printf("Invalid number of empty candy jars\n");
		exit(1);
	}
	int jar[N];
	for (i = 1; i <= N; i++)
	{
		jar[i] = 0;
	}
	printf("Enter number of operations : ");
	scanf("%d", &M);
	if (M < 1 || M > pow(10, 5))
	{
		printf("Invalid number of operations\n");
		exit(1);
	}
	for (i = 1; i <= M; i++)
	{
		printf("Enter indices of jars : ");
		scanf("%d%d", &a, &b);
		if (a > b)
		{
			printf("Invalid indices of jars\n");
			exit(1);
		}
		else if (a < 1 || b > N)
		{
			printf("Invalid indices of jars\n");
			exit(1);
		}
		printf("Enter number of candies : ");
		scanf("%d", &k);
		if (k < 0 || k > pow(10, 6))
		{
			printf("Invalid number of candies\n");
			exit(1);
		}
		for (j = a - 1; j < b; j++)
		{
			jar[j] = jar[j] + k;
		}
	}
	sum = 0;
	for (i = 0; i < N; i++)
	{
		sum = sum + jar[i];
	}
	printf("Average number of candies = %d", (int) (sum / N));
	return 0;
}