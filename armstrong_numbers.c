/*
Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
*/

/*
1. Check how many digits the input number contains and store it in a var
2. Get each digit
3. Each digit power to the number of digits
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "armstrong_numbers.h"

// Function signatures
int num_places(int n);
int powered_digits(int input);
int * separate_digits(int input);

int main(int argc, char *argv[]) 
{

    int input_number = 0;

    printf("Input your number (up to 4 digits): ");
    scanf("%d", &input_number);   

    int result = num_places(input_number);
    int* places = separate_digits(result);

    printf("result is %d ", *places);
    
    
    return 0;
}

// Step 1: Check the number of digits the input contains
int num_places(int n) {
    if (n < 10) { return 1; }
    if (n < 100) { return 2; }
    if (n < 1000) { return 3; }
    if (n < 10000) { return 4; }
}

// Step 2: Break apart the digits of the number (ex 153 turns into 1, 5, 3)
int * separate_digits(int num_of_digits, int input_number) {
    // Create array with the number of digits
    int* ptr = (int*)malloc((num_of_digits) * sizeof(int));


    for (int i = 0; i < num_of_digits; i++)
    {
        ptr[i] = i + 1;
    }

    for (int n = 0; n < num_of_digits; n++)
    {
        printf("%d", ptr[n]);
    }
    

    return 0;
    
}

// Step 3: each digit to the power of total digits
int powered_digits(int input) {

    int num_of_digits = num_places(input);
    int result = 0;

    for (int i = 0; i < num_of_digits; i++)
    {
        result += pow(input, num_of_digits); 
    }

    return result;
    
}