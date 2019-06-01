//WAP TO FIND THE GRADE OF A STUDENT
#include<stdio.h>
int main()
{
int obtainedmarks,fullmarks,per,grade;
printf("what is  your obtained marks:");
scanf("%d",&obtainedmarks);
printf("What is the full marks:");
scanf("%d",&fullmarks);
per = (obtainedmarks/fullmarks)*100;
printf("Your percentage is %d",per);
return 0;
}
