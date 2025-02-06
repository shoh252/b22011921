/*
    Laboratory 6
    Exercise 2
    Filename: helloGoodbye.c
    Student ID: b2300521
    Student Name: Kiniashev Mikhail
*/

#include<stdio.h>
int fourth(int a);
int main()
{
int number;
printf("Enter an integer: ");
scanf("%d", &number);
int result = fourth(number);
printf("Fourth power of %d is %d\n", number, result);
}
int fourth(int a)
{
    int ctr = 1;
    int result = 1;
    while(ctr <= 4)
    {
        result *= a;
        ctr++;
    }
    return result;
}
