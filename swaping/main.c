#include <stdio.h>
#include <stdlib.h>

int main()
{

 int num1,num2,temp;
   printf("before shap \n");
   scanf("%d %d", & num1,& num2);

temp=num1;
num1=num2;
num2=temp;

printf("after shaping\n %d\n %d \n",num1,num2);


    return 0;
}
