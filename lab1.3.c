#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, num, root;
    for(i=1; i<10; i++)
    {
        for(j=0; j<10; j++)
          {
              num=1000*i+100*i+10*j+j;
              for(root=1000; root<num/2; root++)
                {
                   if(num/root==root)
                    {
                     printf("%d is a perfect square of %d", num,root);


                     }
          }

    }
}
return 0;
}
