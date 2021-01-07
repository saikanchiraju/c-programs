/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,rev=0,j;
    printf("enter an integer");
    scanf("%d",&i);
    while(i!=0)
    {
      j=i%10;  
      rev=rev*10+j;
      i/=10;
    }
    printf("reverse number=%d",rev);

    return 0;
}
