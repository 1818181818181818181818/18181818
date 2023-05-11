#include<stdio.h>
int main(){
    char string[30];
    fgets(string,30,stdin);
    printf("input1:%s\n",string);
    gets(string);
    printf("input2:%s\n",string)
    return 0;
}