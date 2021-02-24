#include<stdio.h>
#include<stdlib.h>

void Q1();void Q2();void Q3();void Q4();
void Q5();void Q6();void Q7();void Q8();
void Q9();void Q10();void Q11();void Q12();
void Q13();void Q14();void Q15();void Q16();
void ans1();void ans2(); void ans3();void ans4();

void main(void){
    char name[256];
    printf("name please->");
    scanf("%s",name);
    printf("%sさんのストレスチェックを始めます\n",name);

    Q1();



}

void Q1(){
    int judge1;
    printf("趣味は？と聞かれたらすぐに答えられる(はい->0/いいえ->1）\n");
    scanf("%d",&judge1);
    if(judge1==0){
        Q2();
    }else if(judge1==1){
        Q5();
    }else{
    printf("error");
    }
    
}
void Q2(){
    int judge2;
    printf("時には仕事で気や手を抜くことがある(はい->0/いいえ->1）\n");
    scanf("%d",&judge2);
    if(judge2==0){
        Q3();
    }else if(judge2==1){
        Q6();
    }else{
    printf("error");
    }
    
}
void Q3(){
    int judge3;
    printf("自分なりのうっぷん晴らしをもっている(はい->0/いいえ->1）\n");
    scanf("%d",&judge3);
    if(judge3==0){
        Q4();
    }else if(judge3==1){
        Q7();
    }else{
    printf("error");
    }
    
}
void Q4(){
    int judge1;
    printf("一家団欒で楽しんでいる(はい->0/いいえ->1）\n");
    scanf("%d",&judge1);
    if(judge1==0){
        ans1();
    }else if(judge1==1){
        Q8();
    }else{
    printf("error");
    }
    
}
void Q5(){
    int judge5;
    printf("睡眠時間はしっかりと取れている(いつも十\分->0/まあ十\分->1/いいえ->2)\n");
    scanf("%d",&judge5);
    if(judge5==0){
        Q2();
    }else if(judge5==1){
        Q6();
    }else if(judge5==2){
        Q9();
    }
    else{
    printf("error");
    }
    
}
void Q6(){
    int judge6;
    printf("お酒は1人でのまない(いつも->0/だいたい->1/いいえ->2）\n");
    scanf("%d",&judge6);
    if(judge6==0){
        Q3();
    }else if(judge6==1){
        Q7();
    }else if(judge6==2){
        Q10();
    }
    else{
    printf("error");
    }
    
}
void Q7(){
    int judge7;
    printf("規則的に何かの運動している(いつも->0/だいたい->1/いいえ->2）\n");
    scanf("%d",&judge7);
    if(judge7==0){
        Q3();
    }else if(judge7==1){
        Q8();
    }else if(judge7==2){
        Q11();
    }
    else{
    printf("error");
    }
    
}
void Q8(){
    int judge8;
    printf("毎晩ゆっくりと入浴をしている(はい->0/いいえ->1）\n");
    scanf("%d",&judge8);
    if(judge8==0){
        ans2();
    }else if(judge8==1){
        Q12();
    }else{
    printf("error");
    }
    
}
void Q9(){
    int judge9;
printf("家族や友人とよく話す(十\分->0/まあ十\分->1/いいえ->2)\n");
    scanf("%d",&judge9);
    if(judge9==0){
        Q6();
    }else if(judge9==1){
        Q10();
    }else if(judge9==2){
        Q13();
    }
    else{
    printf("error");
    }
}
void Q10(){
    int judge10;
    printf("ほかの何よりも仕事が優先とは思わない(いつも->0/だいたい->1/いいえ->2）\n");
    scanf("%d",&judge10);
    if(judge10==0){
        Q7();
    }else if(judge10==1){
        Q11();
    }else if(judge10==2){
        Q14();
    }
    else{
    printf("error");
    }
}
void Q11(){
    int judge11;
    printf("食事の内容には気を付けている(いつも->0/だいたい->1/いいえ->2）\n");
    scanf("%d",&judge11);
    if(judge11==0){
        Q8();
    }else if(judge11==1){
        Q12();
    }else if(judge11==2){
        Q15();
    }
    else{
    printf("error");
    }
}
void Q12(){
    int judge12;
    printf("どんなに忙しくても食事は欠かさない(はい->0/いいえ->1）\n");
    scanf("%d",&judge12);
    if(judge12==0){
        ans3();
    }else if(judge12==1){
        Q16();
    }else{
    printf("error");
    }
    
}
void Q13(){
    int judge13;
    printf("意見がある場合その場で言ってしまう(はい->0/いいえ->1）\n");
    scanf("%d",&judge13);
    if(judge13==0){
        Q10();
    }else if(judge13==1){
        Q14();
    }else{
    printf("error");
    }
    
}
void Q14(){
    int judge14;
    printf("ひとたび職場を離れたら仕事のことは忘れる(はい->0/いいえ->1）\n");
    scanf("%d",&judge14);
    if(judge14==0){
        Q11();
    }else if(judge14==1){
        Q15();
    }else{
    printf("error");
    }
    
}
void Q15(){
    int judge15;
    printf("仕事の合間に柔軟体操をする(はい->0/いいえ->1）\n");
    scanf("%d",&judge15);
    if(judge15==0){
        Q12();
    }else if(judge15==1){
        Q16();
    }else{
    printf("error");
    }
    
}
void Q16(){
    int judge16;
    printf("眠い時は無理せず寝る(はい->0/いいえ->1）\n");
    scanf("%d",&judge16);
    if(judge16==0){
        ans3();
    }else if(judge16==1){
        ans4();
    }else{
    printf("error");
    }
    
}
void ans1(){
    printf("合格圏");
}
void ans2(){
    printf("まずまず");
}
void ans3(){
    printf("要注意");
}
void ans4(){
    printf("危険域です");
}
    
    
        
    
