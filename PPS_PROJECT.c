#include <stdio.h>
int quizz();
void pin();
 struct user{
    char name[31];
    int rollno;
    char section[4];
    int marks;
}u1;
int main()
{
    char grade;
    pin();
    return 0;
}
void pin(){
    int pin;
    printf("enter the pin : ");
    scanf("%d",&pin);
    if(pin==1234){
        printf("Welcome!!\n");
        printf("enter your name: ");    
        scanf("%s",u1.name);
        printf("enter the rollno : ");
        scanf("%d",&u1.rollno);
        printf("enter the section : ");
        scanf("%s",u1.section);
        /it is for progress/    
       u1.marks=quizz();
        printf("\nPROGRESS\n");
        printf("Name :%s\n",u1.name);
        printf("Roll number :%d \n",u1.rollno);
        printf("section : %s\n",u1.section);
        printf("marks : %d\n",u1.marks);
        if(u1.marks==3){
        printf("grade:A");
        }else if(u1.marks==2){
        printf("grade:B");
        }else if(u1.marks==1){
        printf("grade:C");
        }else{
        printf("Better luck next time!!");
        }
    }
    else{
        printf("invalid pin!!");
    }
    return ;
}
int quizz(){
    int count=0;
printf("The quizz starts now!!\nARE YOU READY ??\n LETS GO");
printf("\n there are no negative points \n answer all questions ");
printf("1). Which of the following cannot be a structure member?\na) Another structure \nb) Function\nc) Array\nd) None of the mentioned");
char ans;
printf("\nenter answer : ");
scanf(" %c",&ans);
switch(ans){
    case 'a':printf("wrong!!");
    break;
    case 'b':printf("correct!!");
    count++;
    break;
    case 'c':printf("wrong!!");
    break;
    case 'd':printf("wrong!!");
    break;
    default:printf(" Invalid option!!");
    break;
}
printf("\n2).Presence of code like “s.t.b = 10” indicates __\na) Syntax Error\nb) Structure\nc) double data type\nd) An ordinary variable name");
char ans1;
printf("\nenter answer : ");
scanf(" %c",&ans1);
switch(ans1){
    case 'a':printf("wrong!!");
    break;
    case 'b':printf("correct!!");
    count++;
    break;
    case 'c':printf("wrong!!");
    break;
    case 'd':printf("wrong!!");
    break;
    default:printf("Invalid option!!");
    break;
}
printf("\n3).Which of the following return-type cannot be used for a function in C?\na) char *\nb) struct\nc) void\nd) none of the mentioned");
char ans2;
printf("\nenter answer : ");
scanf(" %c",&ans2);
switch(ans2){
    case 'a':printf("wrong!!");
    break;
    case 'b':printf("wrong");
    break;
    case 'c':printf("wrong!!");
    break;
    case 'd':printf("correct!!");
    count++;
    break;
    default:printf("Invalid option!!");
}
    return count ;
}
