#include<stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF)
        if(c >= 'A' && c <= 'Z')
            putchar(c - 'A' + 'a');
        else
            putchar(c);
    
}