//Write a C program using the switch statement to display the day of the week based on user input (1 for Monday, 2 for Tuesday, etc.).
#include<stdio.h>
int main()
{

    int day;

    printf("Enter Day's No: 1-Monday, 2- Tuesday, 3- Wednesday, 4- Thursday, 5- Friday, 6- Saturday, 7- Sunday:\n ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("Monday");
            break;

             case 2:
            printf("Tuesday");
            break;

             case 3:
            printf("Wednesday");
            break;

             case 4:
            printf("Thursday");
            break;

             case 5:
            printf("Friday");
            break;

             case 6:
            printf("Saturday");
            break; 

            case 7:
            printf("Sunday");
            break;

            default:
            printf("Invalid Input");
            break;
    }






    return 0;
}