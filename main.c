#include <stdio.h>
#include "luhn.h"
int main() {
    int l,num;
    // Write C code here
    printf("Hello world\r\n");
    num = 992739871;
    l=luhn_check_digit(num,10);
    printf("num=%d, luhn check=%d\r\n",num,l);
    return 0;
}