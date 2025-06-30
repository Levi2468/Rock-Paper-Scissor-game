#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int w1=0;
int w2=0;
char c1;
char c2;
int end=0;
int step=1;
int select2;
void score(int p1,int p2){
printf("\n\t\tPLAYER 1 SCORE\t\t\t PLAYER 2 SCORE\n");
printf("\n\t\t\t%d\t\t\t\t%d\n",p1,p2);
if(p1==3 || p2==3){
end=1;
step=3;
}
}
int play(){
char subform=c1;
char rock[]="Rock";
char paper[]="Paper";
char scissor[]="Scissor";
char fullform1[10];
char fullform2[10];
int abb=0;

srand(time(NULL));
select2=(rand()%9)+1;
if(select2<=3){
 c2='R';
}else if(select2<=6){
 c2='P';
}else{
 c2='S';
}

for(abb=1;abb<=2;abb++){
if(subform=='R'&& abb==1){
strcpy(fullform1,rock);
}
if(subform=='R'&& abb==2){
strcpy(fullform2,rock);
}
if(subform=='P'&& abb==1){
strcpy(fullform1,paper);
}
if(subform=='P'&& abb==2){
strcpy(fullform2,paper);
}
if(subform=='S'&& abb==1){
strcpy(fullform1,scissor);
}
if(subform=='S'&& abb==2){
strcpy(fullform2,scissor);
}
subform=c2;
}
printf("\n\t\t\t%s\t\t\t\t%s\n",fullform1,fullform2);
if((c1=='R'&& c2=='S')|| (c1=='P' && c2=='R')||(c1=='S' && c2=='P')){
printf("\n\t\t\t+1 point\n");
w1++;
}else if(c1==c2){
printf("\n\t\t\t\t\t   TIE\n\t\t\t\t\tNO POINTS\n");
}else{
printf("\n\t\t\t\t\t\t\t+1 point\n");
w2++;
}
delay(1000);
printf("\n\n\t\t\t      Press any key to continue");
getch();
return 1;
}


void choose(char choice1){
choice1=toupper(choice1);
if(choice1=='R'||choice1=='P'||choice1=='S'){
c1=choice1;
step++;
delay(400);
printf("\n\tRock...");
delay(500);
printf("\t\t\tPaper...");
delay(500);
printf("\t\t\tScissor...");
delay(600);

}
}

void instruction(){
printf("\n\t\tFirst player to get 3 POINTS wins the match\n");
printf("\n\t   Enter -> R for Rock \t->P  for Paper \t->S for Scissor\n");
}
void line(){
int i;
for(i=1;i<32;i++){
printf("_");
   }
}

void welcome(w1,w2){
line();
printf("Rock Paper Scissor");
line();
instruction();
score(w1,w2);
}
void main(){
while(end==0){
clrscr();
welcome(w1,w2);
if(step==1){
char choice;
printf("\n\t\t\t\tEnter Your choice\n\t\t\t\t\t");
scanf("%c",&choice);
choose(choice);
}
else if(step==2){
step=play();
}
else{
if(w1==3){
printf("\n\t\t\t\tPLAYER 1 WIN!!!");
getch();
}
if(w2==3){
printf("\n\t\t\t\tPLAYER 2 WIN!!!");
getch();
}
}
}
}







































































































































































































































































































































































































