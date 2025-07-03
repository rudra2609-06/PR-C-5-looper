//Digit Addition 
//Rudra Thakkar
//03-07-2025


#include <stdio.h>

int main()
{
	int num,first,last;
	printf("Enter number:  \n");
	scanf("%d",&num);

	int temp = num;

	last = num % 10;

	for (int i = 0; i < num; i++)
	{
		num = num / 10;
	}

	first = num;

	printf("The sum of first and last digit of %d is %d\n",temp,first+last);
	
	return 0;
}