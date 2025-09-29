/* Q. 1. Program to rearrange the letters of word w to construct another word s in such a way that, s is lexicographically greater than w
Author : Sohan */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int t, i, temp;
	char w[100], s[100];
	printf("Enter number of test cases : ");
	scanf("%d", &t);
	if (t < 1 || t > pow(10, 5))
	{
		printf("Invalid number of test cases\n");
		exit(1);
	}
	do 
	{
		printf("Enter word : ");
		scanf("%s", &w);
		for (i = 0; i < strlen(w); i++)
		{
			if (w[i] < 'a' || w[i] > 'z')
			{
				printf("Word can contain only lowercase english letters\n");
				exit(1);
			}
		}
		strcpy(s, w);
		for (i = (strlen(s) - 1); i > 0; i--)
		{
			if (s[i] > s[i - 1])
			{
				temp = s[i];
				s[i] = s[i - 1];
				s[i - 1] = temp;
				break;
			}
		}
		for (; i < (strlen(s) - 1); i++)
		{
			if (s[i] > s[i + 1])
			{
				temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
			}
		}
		if (!strcmp(s, w))
		{
			printf("no answer\n");
		}
		else
		{
			printf("%s\n", s);
		}
	} while (--t >= 1);
	return 0;
}