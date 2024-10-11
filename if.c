#include<stdio.h>

int main()
{
const int MIMOR=25;

int age=0;

printf("请输入你的年龄：");
scanf("%d",&age);

if (age<MIMOR){
    printf("年轻是美好的");
}else{
    printf("年龄是你的花\n");
}

    return 0;
}