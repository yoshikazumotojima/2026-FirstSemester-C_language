#include<stdio.h>

int main()
{
    int c,nwhite = 0,nother = 0,ndigit = 0,alpha = 0;

    while((c = getchar()) != EOF){
        if(c>='0' && c<='9'){
            ndigit++;
        }else if(c==' ' || c =='\n' || c =='\t'){
            nwhite++;
        }else if(c>='a' && c>='z' || c<='A'&& c<='z'){
            alpha++;
        }
        else{
            nother++;
        }
    }

    printf("digit = %d,white scape = %d, other = %d\n",ndigit,nwhite,nother);
}