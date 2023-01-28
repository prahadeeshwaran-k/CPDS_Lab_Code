//Write a C Program to count the repeated numbers in an array of elements
#include <stdio.h>
#include <conio.h>
int main()
{
    //declare array and initialize the variables
    int arr[10000],i,j,n,count=0 ;
    printf("Enter the size of the array- ");
    scanf("%d", &n);
    printf("Enter elements in the array- ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //loops to iterate through the array
    for(i=0; i<n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            //Condition to check if the element is duplicate or not
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total duplicate numbers in the array- %d",count);
    return 0;
}