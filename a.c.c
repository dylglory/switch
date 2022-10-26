#include<stdio.h>
void main()
{
char c;
scanf("%c", &c);
switch (c)
{
case 'A':
printf("A is 90~100\n"); break;
case 'B':
printf("B is 80~89\n"); break;
case 'C':
printf("C is 70~79\n"); break;
case 'D':
printf("D is 60~69\n"); break;
case 'E':
printf("E is 0~59\n"); break;
default:
printf("errno");
}

}

