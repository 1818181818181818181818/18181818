#include<stdio.h>
int main(){
    int num=256;
    char grade='A';
    double pi=3.141592;
    printf("10진수%d, 8진수%o, 16진수 %x\n", num,8,num-1,10+5);
    printf("등급: %c, ASCII:%d\n", grade, grade);
    printf("문자열: %s\n", "hello World");
    printf("pi:%f,100의 지수 표기법: %e,%E\n",pi,100.0, 100.0);
    printf("퍼센트 출력%% 따옴표 출력\"\n");
    return 0;
}