#include<stdio.h>
int swap(int *a,int *b);
int main()
{
 int a = 2;
 int b = 3;
 printf("from the main function,a = %d, b = %d",a,b);
 swap(&a,&b);
 printf("back in main function a = %d, b = %d",a,b);
} 
 int swap(int *i,int *j)
{
 int temp;
 temp = *i;
 *i = *j;
 *j = temp;
 printf("from function swap a = %d, b = %d",*i,*j);
 return 0;
}
