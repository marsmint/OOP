#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int i=0;
    scanf("%d", &num);
    while(num!=0)
    {  num=num%10;
       i++;

    }
    i=i+1;
 printf("%d", i);
 }
