#include <stdio.h>

void sum(int a, int b)
{
    printf("\n adition of %d & %d is :%d", a, b, a + b);
}

void sub(int a, int b)
{
    printf("\n subtraction of %d & %d is :%d", a, b, a - b);
}

void mul(int a, int b)
{
    printf("\n multiplication of %d & %d is :%d", a, b, a * b);
}

void div(int a, int b)
{
    printf("\n division of %d & %d is :%d", a, b, a / b);
}

int main()
{
    int a, b;

    printf("enter A : ");
    scanf("%d", &a);

    printf("enter B : ");
    scanf("%d", &b);

    int choice;

    do
    {
        printf("\n 1. For Addition.");
        printf("\n 2. For Subtraction.");
        printf("\n 3. For Multiplication.");
        printf("\n 4. For Division.");
        printf("\n 0. For Exit.");

        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sum(a, b);
            break;

        case 2:
            sub(a, b); 
            break;

        case 3:
            mul(a, b); 
            break;

        case 4:
            div(a, b); 
            break;

        default:
            printf("Invalib choice");
            break;
        }
    } while (choice !=0);

    return 0;
}