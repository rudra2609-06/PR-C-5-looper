//Digit Counter 
//Rudra Thakkar
//03-07-2025

#include <stdio.h>

int main()
{
	int num, count = 0;
	printf("Enter number:  \n");
	scanf("%d", &num);

	int temp = num;

	if (num == 0)
	{
		printf("Total number of digits in 0 is 1\n");
	}
	else
	{
		for (; num != 0; num /= 10)
		{
			count++;
		}
	}

	printf("Total digits in %d is %d\n", temp, count);

	return 0;
}