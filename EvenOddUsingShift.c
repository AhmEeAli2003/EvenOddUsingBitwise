#include<stdio.h>
/*
    We can determine that input number is even or odd by shift right operator [>>]
    *****************      Algorithm       *******************
    If input number for example is 4
    Then: we'll make shift right for its binary
    e.g: 4 = 100
      >>  100
          ---
          010   .0
    The result is 2, which means 4/2 without remainder
    Lets try it on odd number such as 5
    e.g: 5 = 101
      >>  101
          ---
          010   .1
    The result is 2, but as we see there is remainder (1)
    So, if number >> 1 == number / 2.0 Or if number >> 1 == (float)number / 2 --> THen: "Even number", else "Odd number"
    The casting in compare [(float)number] or writing 2.0 as float is important for know remainder
    NOTE: we can't using shift left operator for the same program, because shift left is double any number [even and odd]
*/
void main(void)
{
    int number;
    printf("Please number: ");
    scanf("%d",&number);
    (number>>1) == (number/2.0)?printf("%d is even number",number):printf("%d is odd number",number);
}

