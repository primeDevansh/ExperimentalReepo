#include <stdio.h>
#include <limits.h>

int main() {
    printf("SIZEOF CHAR: %d\n", sizeof(char));
    printf("SIZEOF SHORT: %d\n", sizeof(short));

    unsigned char ch = 129;  //bin: 1000 0001
    short s = ch;   
    
    /* 
        expected bin: 1111 1111 1000 0001 = dec: -128
        Basically, when I copy char ch to short s and print s, the output should be -128
    */
   
   printf("\nCharacter %d is Short %d\n", (int)ch, s);

   printf("\n%d\n", CHAR_MAX);

    printf("\n\n%c\n", -65);
   
    return 0;
}