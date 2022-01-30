#include<stdio.h>
/*
    We can determine that input number is even or odd by & operator
    *****************      Algorithm       *******************
    If input number for example is 4
    Then: we'll AND its binary with 1
    e.g: 4 = 100
          100
           &
          001
          ---
          000
    first bit in any even number is (0), so (0) & (1) = 0
    but the first bit in any odd number is (1), so (1) & (1) = 1
    e.g: 5 = 101
          101
           &
          001
          ---
          001
    so if condition is true (1) --> Then: print "Odd number", else --> print "Even number"
*/
void main(void)
{
    int number;
    printf("Please number: ");
    scanf("%d",&number);
    number&1?printf("%d is odd number",number):printf("%d is even number",number);
}
