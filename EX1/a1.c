//1a. Write a C Program to find the given number is Armstrong number or not
// Created by praha on 27-01-2023.
//
#include<stdio.h>
int main()
{
    int num,r,temp;
    int sum=0;

    printf("Enter any number to check Armstrong:");
    scanf("%d",&num);

    temp=num;
    while(num!=0)
    {
        r=num%10;
        num=num/10;
        sum=sum+(r*r*r);
    }
    if(sum==temp)
        printf("%d is an Armstrong number",temp);
    else
        printf("%d is not an Armstrong number",temp);

    return 0;
}
