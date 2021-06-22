#include <stdio.h>
#include <stdlib.h>

int main()
{

int num,count = 0;
scanf("%d",&num);
for(int i=1; i<num; i++)
{
    if(num %i==0){
        count++;
    }
}
    if(count==2)

        printf("it is prime number %d\n",num);
    else

        printf("not prime\n");


    return 0;
}
