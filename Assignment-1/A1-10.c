#include<stdio.h>
#include<conio.h>
int main(){
    int day, month, year;

    printf("Enter the date in this format DD/MM/YY\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("\nDay-%d, Month-%d, Year-%d",day,month,year);

    getch();
    return 0;
}
