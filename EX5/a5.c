//Write a C Program to find Factorial of a given number using recursive function (50)
// Created by praha on 27-01-2023.
//
#include<stdio.h>
long factorial(int n)
{
    return(n * factorial(n-1));
}
void main()
{
    int number;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &number);
    fact = factorial(number);
    printf("Factorial of %d is %ld\n", number, fact);
}