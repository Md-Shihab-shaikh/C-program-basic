#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,num3;
   printf("any 3 number your choice \n");
   scanf("%d %d %d",&num1 ,&num2 ,&num3);

   if(num1 > num2 && num1 > num3)
        printf("num1 is a largest number \n",num1);

   if(num2 > num3 && num2 > num3)
        printf("num2 is a largest number \n",num2);

   if(num3 > num1 && num3 > num2)
        printf("num3 is a largest number \n",num3);


   return 0;
}
