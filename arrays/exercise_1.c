/* QUESTION: https://www.w3resource.com/c-programming-exercises/array/index.php

1. Write a program in C to store elements in an array and print it. Go to the editor
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

#include <stdio.h>
#include <stdlib.h>

// Function signatures
int user_input();
int *create_int_array(int);

int main(int argc, char *argv[])
{
    int *array_ptr = create_int_array(10);
    
}

// Create int array
int *create_int_array(int size)
{
    return (int*)malloc((size) * sizeof(int));
}

// User input
int user_input()
{
    printf("Input 10 elements in the array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("element - %d", i);
        scanf("%d", &n);
    }
}