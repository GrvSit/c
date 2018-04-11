#include<stdio.h>
main()
{
	float bs , da , hra , ts;
	printf("Enter the Basic Salary");
	scanf("%f",&bs);
	da=(bs*40)/100;
	printf("Dearness allowance=%f",da);
	hra=(bs*20)/100;
	printf("house rent allowance =%f",hra);
	ts=bs+da+hra;
	printf("Total salary =%f",ts);
	
}
