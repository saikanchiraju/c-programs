/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter values a");
    scanf("%d",&a);
    printf("enter values b");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swap an integer");
    printf("%d%d",a,b);
    return 0;
}
