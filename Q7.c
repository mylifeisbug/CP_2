//Write a program to demonstrate the use of the goto statement by skipping certain parts of the code
#include<stdio.h>
int main()
{
    printf("Welcome!");
    printf("\nThis will print");

    goto hello;
    printf("\nThis statement is Skipped");

    hello:
        printf("\nThe above statement is skipped");
        printf("\nBye");




    return 0;
}