#include<stdio.h>
int main(){
    int dodo,gogo;
    int total, deposit, change,rest,menu;
    int w500,w100,w50,w10;
    int cnt_dodo, cnt_gogo;
while(1){
    printf("또또면 70원 꽁꽁바 30원 입니다.\n");
    printf("각각의 개수를 띄어서 입력하시오.\n");
    scanf("%d %d",&cnt_dodo,&cnt_gogo);
    dodo=70*cnt_dodo;
    gogo=30*cnt_gogo;
    total=dodo + gogo;
    printf("총금액은 %d입니다\n",total);
    printf("투입할 금액을 입력하세요\n");
    scanf("%d",&deposit);
    if(deposit>=total){
        change=deposit-total;
        w500=change/500;
        w100=change%500/100;
        w50=change%100/50;
        w10=change%50/10;
        printf("또또면 전체금액:%d\n",dodo);
        printf("꽁꽁바 전체금액:%d\n",gogo);
        printf("거스름돈:%d\n",change);
        printf("##########거스름돈##########");
        printf("500원: %d, 100원: %d,50원: %d,10원: %d\n",w500,w100,w50,w10);
        printf("계속하시려면 1, 나가려면 0을 입력하세요\n");
        scanf("%d",&menu);
        if(menu==0)break;
        else continue;
    }
    else{
        printf("금액이 부족합니다.");
        break;
    }
}
}