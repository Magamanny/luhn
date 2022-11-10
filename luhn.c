#include "luhn.h"
// Luhn algo
int luhn_check_digit(uint32_t num,int digits)
{
    int luhn=0;
    for(int i=0;i<digits;i++)
    {
        uint32_t temp=0;
        temp = num%10;
        if(i%2==0)
        {
            temp = 2*temp;
        }
        // step
        if(temp>9)
        {
            temp = temp/10 + temp%10;
        }
        luhn += temp;
        num = num/10;
    }
    luhn = 10-luhn%10;
    return luhn;
}