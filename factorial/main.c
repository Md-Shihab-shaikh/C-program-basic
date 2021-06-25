#include <stdio.h>
#include <stdlib.h>

int main()
{
int f,n=1;
scanf("%d",&f);
for(int i=1; i<=f; i++)

{
    n=n*i;
}
printf("factorial is %d \n",n);
    return 0;
}
