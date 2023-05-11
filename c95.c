#include<stdio.h>
int main(){
    int kor, eng, math;
    printf("korean:"),scanf("%d",&kor);
    printf("english:"),scanf("%d",&eng);
    printf("math:"),scanf("%d",&math);
    //조건? 참실행:거짓실행;
    kor>=70&&eng>=70||math>=80? printf("greate"):printf("ok");
    return 0;
}