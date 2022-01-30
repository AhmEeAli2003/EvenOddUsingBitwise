#include<stdio.h>
/*
    We can determine that input number is even or odd by ^ operator
    *****************      Algorithm       *******************
    If input number for example is 4
    Then: we'll XOR its binary with 1
    e.g: 4 = 100
          100
           ^
          001
          ---
          101
    The result is equal input number + 1
    Now we'll XOR an odd number's binary with 1
    e.g: 5 = 101
          101
           ^
          001
          ---
          100
    The result is equal input number - 1
    So, if input number incremented after OR operation --> Then: print "Even number", else --> print "Odd number"
    Otherwise: if input number decremented after OR operation --> Then: print "Odd number", else --> print "Even number"
*/
void main(void)
{
    int number;
    printf("Please number: ");
    scanf("%d",&number);
    (number^1) == (number-1)?printf("%d is odd number",number):printf("%d is even number",number);
}


