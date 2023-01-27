// Write a C Program to find largest number in an array
// Created by praha on 27-01-2023.
//
#include <stdio.h>
int main(){
    int num;
    double arr[25];

    // Asking for input
    printf("Please enter total no. of elements[1 to 25]: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i){
        printf("%d.Enter the number: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < num; ++i){
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("Largest element of the array is: %.2lf", arr[0]);
    return 0;
}
