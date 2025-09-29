/* Program to determine if given integer N is an element of the Fibonacci Sequence
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int T, N, a, b, c, flag;
	printf("Enter number of test cases : ");
	scanf("%d", &T);
	if (T < 1 || T > pow(10, 5))
	{
		printf("Invalid number of test cases\n");
		exit(1);
	}
	do
	{
		printf("Enter number : ");
		scanf("%d", &N);
		if (T < 1 || T > pow(10, 10))
		{
			printf("Invalid number\n");
			exit(1);
		}
		a = 0; 
		b = 1;
		flag = 0;
		for (; flag == 0;)
		{
			c = a + b;
			if (N == a)
			{
				flag = 1;
			}
			else if (N < a)
			{
				break;
			}
			a = b;
			b = c;
		}
		if (flag == 1)
		{
			printf("IsFibo\n");
		}
		else
		{
			printf("IsNotFibo\n");
		}
	} while (--T > 0);
	return 0;
}