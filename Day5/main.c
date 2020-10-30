#include <stdio.h>
#include <stdlib.h>
int Max(int x,int y,int z)
{
    int max=x;
    if(x>max)
    {

        max=x;

    }
    else
    {    max=y;

    }

    if(max<z)
    {
        max=z;
    }
    return max;
}
int main()
{    int num1,num2,num3;
    printf("enter first number\n");
    scanf("%d",&num1);
     printf("enter second number\n");
    scanf("%d",&num2);
     printf("enter third number\n");
    scanf("%d",&num3);
     printf("the max number is %d\n",Max(num1,num2,num3));
    return 0;
}
