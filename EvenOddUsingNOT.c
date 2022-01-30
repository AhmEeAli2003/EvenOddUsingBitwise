#include<stdio.h>
#include<math.h>
/*
    We can determine that input number is even or odd by ~ operator
    *****************      Algorithm       *******************
    If input number for example is 4
    Then: we'll NOT its binary == we'll get its 1's complement
    How about 1's complement?
    we knew (r-1) comp = r - n - 1 = (r-1) - n that r = radix = base & n = number
    So the binary numbers base\radix is 2, Then r-1 = 2-1 = 1
    If number for example is 4 bit, r = 1111, then we'll subtract r from number taking into consideration sign bit
    e.g: 4 = 100
          1111
        - 0100          ~ 0100
          ----            ----      [convert bits]
          1011            1011
    The result is equal (-5), which means -(n+1) = -n + (-1) [Search: Negative numbers representation in binary]
    Now we'll NOT an odd number's binary
    e.g: 5 = 101
          1111
        ~ 0101          ~ 0101
          ----            ----
          1010            1010
    The result is equal (-6)
    Unfortunately, the written first line is not true enough, it is true if we want to determine that input number is positive or negative
    Now, we'll NOT a negative number such as -4 = 1100
           1111
         - 1100         ~ 1100
           ----           ----
           0011           0011
    The result is 3, which means (-n) - 1
    We can use absolute [abs() function] to determine that result is bigger than input or less than it
    If abs(result) > abs(input) --> Then: "Positive number", else "Negative number"
    But in our case We can determine that input number is even or odd by ~ operator with &
    The algorithm will be same algorithm in program "EvenOddUsingAND" with small changes
    if ~(number & 1) --> Then: take first bit
    if (1)--> Then: "Even number", else "Odd number", but I don't prefer it; because it will take more clock cycles
*/
void main(void)
{
    int number,result,i,firstBit;
    printf("Please number: ");
    scanf("%d",&number);
    result = (~(number&1));     //It is not give our a binary number
    /****So, we'll change it to binary using bitwise right shift and take first bit only***/
    for(i = 31; i >= 0; i--)   // 32 bit [from 0 to 31] = 4 byte
        if((result>>i&1)) firstBit = 1;
        else firstBit = 0;
    !firstBit?printf("%d is odd number",number):printf("%d is even number",number);
    /************************* Positive & Negative *****************************/
    abs(~number) > abs(number)?printf("\n%d is positive number",number):printf("\n%d is negative number",number);
}
/*Finally, this program includes 3 functions
    1- determine input number is even or odd using NOT with AND bitwise operators
    2- convert decimal to binary using bitwise right shift with AND operators
    3- determine input number is positive or negative using NOT

*/


