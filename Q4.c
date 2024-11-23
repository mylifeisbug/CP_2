//Write a program to find the largest of three numbers using the else if ladder.
#include<stdio.h>
int main()
{
    int no_1=100,no_2=350,no_3=250;

    if(no_1>=no_2 && no_1>=no_3)
    {
        printf("%d is Larger than %d and %d",no_1,no_2,no_3);
    }
    else if(no_2>=no_1 && no_2>=no_3)
    {
        printf("%d is Larger than %d and %d",no_2,no_1,no_3);
    }
    else{
        printf("%d is Larger than %d and %d",no_3,no_1,no_2);
    }
    






    return 0;
}