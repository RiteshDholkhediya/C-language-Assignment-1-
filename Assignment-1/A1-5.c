#include<stdio.h>
#include<conio.h>
int main(){

    char name[20];
    int l;
    printf("Enter the string");
    scanf("%s",name);
    l = printf(name);
    printf(" and its length id %d",l);

    getch();
}
