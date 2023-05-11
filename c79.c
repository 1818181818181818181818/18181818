#include<stdio.h>
int main(){
    putchar('A');
    putchar(10);
    putchar(97);
    char text;
    while(getchar()!='\n);
    text=getchar();
    printf("input:%c\n",text);

    return 0;
}   