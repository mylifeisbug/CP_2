//Write a program to find the minimum of two numbers using the conditional operator.
#include<stdio.h>
int main()
{
    int no_1=50,no_2=50;

    (no_1<no_2) ? printf("%d is Smaller than %d",no_1,no_2):
    (no_2<no_1) ? printf("%d is smaller than %d",no_2,no_1):
    printf("Both are equal");






    return 0;
}