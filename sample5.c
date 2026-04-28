#include<stdio.h>

int main()
{
    int c;
    //getchar()は1�?字もらってくると�?�?関数
    //人�?字もらった後にcの中に格納す�?
    //EOF(End Of File)のことctrl-zでEOFが�?�る�?�でwhile�?が終�?
    while((c = getchar()) != EOF)
    putchar(c);
}