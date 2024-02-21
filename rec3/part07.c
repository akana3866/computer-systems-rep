#include <stdio.h>
#include <assert.h>

void print_in_binary(char);

void part_completed(int);

/*
Using the or operator is good for turning designated bits on.
So remember for every given bit in a and b
  0 | 0 = 0
  0 | 1 = 1
  0 | 1 = 1
  1 | 1 = 1
*/

int main()
{
    short a = 0b1010000; // Binary 80

    /* TODO: Initialize 'mask' such that when 'a' is
       OR'ed with it turns the last three bits of 'a' on
       (bits that are on are equal to 1) and leaves the other
       bits unchanged. */
    short mask= 0b1010111;;
    assert((a | mask) == 0b1010111);

    /* TODO: Initialize 'decimal_result' with a decimal
        number so that the assertion passes.  */
    short decimal_result = 0b1010111;
    assert((a | decimal_result) == 87);

    part_completed(7);

    return 0;
}
