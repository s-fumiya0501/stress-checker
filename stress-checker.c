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
    printf("%s����̃X�g���X�`�F�b�N���n�߂܂�\n",name);

    Q1();



}

void Q1(){
    int judge1;
    printf("��́H�ƕ����ꂽ�炷���ɓ�������(�͂�->0/������->1�j\n");
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
    printf("���ɂ͎d���ŋC���𔲂����Ƃ�����(�͂�->0/������->1�j\n");
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
    printf("�����Ȃ�̂����Ղ񐰂炵�������Ă���(�͂�->0/������->1�j\n");
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
    printf("��ƒc�R�Ŋy����ł���(�͂�->0/������->1�j\n");
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
    printf("�������Ԃ͂�������Ǝ��Ă���(�����\\��->0/�܂��\\��->1/������->2)\n");
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
    printf("������1�l�ł̂܂Ȃ�(����->0/��������->1/������->2�j\n");
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
    printf("�K���I�ɉ����̉^�����Ă���(����->0/��������->1/������->2�j\n");
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
    printf("���ӂ������Ɠ��������Ă���(�͂�->0/������->1�j\n");
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
printf("�Ƒ���F�l�Ƃ悭�b��(�\\��->0/�܂��\\��->1/������->2)\n");
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
    printf("�ق��̉������d�����D��Ƃ͎v��Ȃ�(����->0/��������->1/������->2�j\n");
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
    printf("�H���̓��e�ɂ͋C��t���Ă���(����->0/��������->1/������->2�j\n");
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
    printf("�ǂ�ȂɖZ�����Ă��H���͌������Ȃ�(�͂�->0/������->1�j\n");
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
    printf("�ӌ�������ꍇ���̏�Ō����Ă��܂�(�͂�->0/������->1�j\n");
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
    printf("�ЂƂ��ѐE��𗣂ꂽ��d���̂��Ƃ͖Y���(�͂�->0/������->1�j\n");
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
    printf("�d���̍��Ԃɏ_��̑�������(�͂�->0/������->1�j\n");
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
    printf("�������͖��������Q��(�͂�->0/������->1�j\n");
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
    printf("���i��");
}
void ans2(){
    printf("�܂��܂�");
}
void ans3(){
    printf("�v����");
}
void ans4(){
    printf("�댯��ł�");
}
    
    
        
    
