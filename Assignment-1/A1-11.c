#include<stdio.h>
#include<conio.h>
int main(){
    int hour, minutes;
    printf("Enter the time in format HH:MM ");
    scanf("%d:%d",&hour,&minutes);
    printf("%d hour and %d minutes",hour,minutes);
    getch();
}
