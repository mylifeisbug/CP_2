//Write a program that reads the marks of a student and determines the grade (A, B, C, etc.) using nested if…else statements
#include<stdio.h>
int main()
{
    int no_1,no_2,no_3,no_4,no_5,no_6;
    int sum;

    printf("Enter Your Marks out of (25): \n");
    scanf("\n%d",&no_1);
    scanf("\n%d",&no_2);
    scanf("\n%d",&no_3);
    scanf("\n%d",&no_4);
    scanf("\n%d",&no_5);
    scanf("\n%d",&no_6);

    printf("Yours Marks are:");
    printf("\n1.C.P: %d",no_1);
    printf("\n2.C.F: %d",no_2);
    printf("\n3.W.T: %d",no_3);
    printf("\n4.B.M: %d",no_4);
    printf("\n5.DLF: %d",no_5);
    printf("\n6.BCS: %d",no_6);

    sum= no_1+no_2+no_3+no_4+no_5+no_6;
    printf("\nTotal Marks out of 150 is: %d",sum);

     float perc= (sum*100)/150;
     printf("\nYour Percentage : %.2f\n",perc);

     if(perc<=100 && perc>=90)
     {
        printf("Grade A");
     }
     else if(perc<=90 && perc>=80)
     {
        printf("Grade B");
     }
     else if(perc<=80 && perc>=70)
     {
        printf("Grade C");
     }
     else if(perc<=70 && perc>=60)
     {
        printf("Grade D");
     }
     else if(perc<=60 && perc>=45)
     {
        printf("Grade E");
     }
     else{
        printf("Better Luck Next Time");
     }


    return 0;
}