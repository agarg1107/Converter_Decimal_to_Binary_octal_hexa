#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Press 1 to convert Decimal to Binary\n");
    printf("Press 2 to convert Decimal to Octal\n");
    printf("Press 3 to convert Decimal to HexaDecimal\n");
    printf("Press 4 to exit the program\n");

    scanf("%d",&a);

    if (a == 1)
    {
    int num;
    int rem;
    int t =1;
    int bnum = 0;
    printf("Enter Decimal number :- \n");
    scanf("%d",&num);

    while(num != 0)
    {
        rem = num%2;
        num = num/2;
        bnum = bnum + rem*t;
        t = t*10;
    }

    printf("%d",bnum);
        
    }
    else if(a == 2)
    {
        	int number;
    int rem;
    int t =1;
    int onum = 0;
    printf("Enter the Decimal number\n");
    scanf("%d",&number);

    while (number != 0)
    {
        rem = number%8;
        number = number/8;
        onum = onum + rem*t;
        t = t*10;
    }
    printf("%d",onum);


    }
    else if(a == 3)
    {
        long int decimalNumber,remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0) {
		temp = quotient % 16;
		//To convert integer into character
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexadecimalNumber[j]);
	return 0;

    }
    else if (a == 4)
    {
        exit(0);
    }  

}