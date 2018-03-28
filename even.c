#include<stdio.h>
int main()
{
	int num,difference;
	printf("Enter two numbers:");
	scanf("%d %d"&num);
	difference=num;
	if(difference%2==0)
	{
		printf("The difference %d is even",difference);
	}
	else
	{
		printf("The difference %d is odd",difference);
	}
	return 0;
}
