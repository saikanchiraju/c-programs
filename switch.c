/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    char c;
    printf("enter an operator +,-,*,/");
    scanf("%c",&c);
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    
    
    switch(c)
    {
        case '+':
        printf("addition of a,b :%d",(a+b));
        break;
        case '-':
        printf("subtraction of a,b:%d",(a-b));
        break;
        case '*':
        printf("multiplication of a,b:%d",(a*b));
        break;
        case '/':
        printf("division of a,b:%d",(a/b));
        break;
    }
    return 0;
}
