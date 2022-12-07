#include<stdio.h>
int main()
{
    printf("Hello world!!\n");
    printf("My name is Bhavit Jain\n");

    // program for addition

    int a,b;
    printf("Enter the value of a =");
    scanf("%d", &a);

    printf("Enter the value of b =");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum of two numbers is: %d\n", sum);

    //Program for subtraction

    int c,d;
    printf("Enter the value of c =");
    scanf("%d", &c);

    printf("Enter the value of f =");
    scanf("%d", &d);

    int sub = c - d;

    printf("Sub of two numbers is: %d\n", sub);
    return 0;
}