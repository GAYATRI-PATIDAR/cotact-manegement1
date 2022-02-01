#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
void adddata();
void list();
int main()
{
char t;
FILE *fp=NULL;
fp=fopen("hello.txt","r");
if(fp==NULL)
printf("ERROR\n");
while(!feof(fp))
{
t=fgetc(fp);
printf("%c",t);
}
sleep(7);
system("cls");
fclose(fp);
                       //can use struct type one more variable to  get 2 contact no with name
 int x,y;
 while(y!=5)
 {
 printf("----------------------------------------MENU----------------------------------------\n");
 printf("               \n               1)LIST ALL CONTACT\n               2)ADD NEW CONTACT IN PHONEBOOK\n               3)EXIT\n      CHOICE\n");
 printf("------------------------------------------------------------------------------------\n");
 scanf("%d",&x);
 sleep(2);

 switch(x)
 {
 case 2:
    adddata();
    break;
 case 1:
    list();
    break;
case 3:
     exit(1);
 }
     printf("\nENTER 5 TO STOP THE PROGRAM");
     scanf("%d",&y);
}
return 0;
}

void adddata()
{
long long int mobile;
char name[30];
FILE *fp=NULL;
printf("ENTER \nMOBILE NUMBER\nNAME\n\n\n");
scanf("%lld%*c",&mobile);
gets(name);
fp=fopen("p2.txt","a");
if(fp==NULL)
printf("ERROR\n");
fputs("\n\n",fp);
fputs("name=",fp);
fflush(fp);
fputs(name,fp);
fputs("\n",fp);
fputs("mobile number=",fp);
fprintf(fp,"%lld",mobile);
fclose(fp);
}
void list()
{
char ch;
FILE *fp=NULL;
fp=fopen("p2.txt","r");
if(fp==NULL)
printf("ERROR\n");
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}
