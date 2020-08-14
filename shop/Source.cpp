#include<stdio.h>
int main()
{
	float age;
	printf("Enter your age :");
	scanf_s("%f", &age);
	if (0 <= age && age < 18)
	{
		printf("Can not sell for you");
		return 0;
	}
	if (age >= 18 && age < 20)
	{
		printf("You can buy only Cigarette");
		return 0;
	}
	if (age >= 20 && age < 150)
	{
		printf("You can buy Cigarette and Alcohol");
		return 0;
	}
	if (age >= 150)
	{
		printf("You are not die???");
		return 0;
	}
	else
	{
		printf("Error");
		return 0;
	}
	return 0;
#define _CRT_SECURE_NO_WARNINGS
}
/*for shop that sell Alcohol and Cigarette*/
