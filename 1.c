#include<stdio.h>
int main()
{
float score;
char grade;
int n;
scanf("%f",&score);
if(score<0&&score>100)
	printf("Data error");
else
{
	n=score/10;
	switch(n)
	{
	case 10:
	case 9: grade='A';break;
	case 8: grade='B';break;
	case 7: grade='C';break;
	case 6: grade='D';break;
	case 5: 
	case 4:
	case 3:
	case 2:
    case 1:
    case 0:grade='E';break;
	}
}
printf("%c",grade);
}














  



