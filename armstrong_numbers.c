#include <stdio.h>
#include "armstrong_numbers.h"

int main(int argc, char const *argv[])
{
    int number;

    printf("Input your number (up to 4 digits): ");
    scanf("%d", &number);
    
    if (is_armstrong_number(number) == 0) {
        printf("false");
    }
    return 0;
}

// Check if number is armstrong number
bool is_armstrong_number(int candidate) {
    if (candidate % 1000 == 0) {return true;}
    else {
        return false;
    }
}
