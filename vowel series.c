/*
The program must accept an alphabet CH as the input. If CH is a vowel then the program 
must print all the vowels starting from CH as the output in an alphabetical order. 
Else the program must print '-1' as the output. 
Note: Alphabet is only in lower-case. 
Example Input/Output 1: 
Input: 
e 
Output: 
eiou 
Example Input/Output 2: 
Input: 
v 
Output: 
-1
*/

#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
            printf("aeiou");
            break;
        case 'e':
            printf("eiou");
            break;
        case 'i':
            printf("iou");
            break;
        case 'o':
            printf("ou");
            break;
        case 'u':
            printf("u");
            break;
        default:
            printf("-1");
            break;
    }

    return 0;
}
