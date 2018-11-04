#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"03_menuChoice.c"
void pressToContinue()
{
    char cont;
    printf("...press enter to continue\n");
    getchar();
    getchar();
    system("clear");
}
int main(void)
{
    system("clear");
    char userOption=' ';
    menuOption();
    printf("===========Enter Your Choice:>_");
    scanf(" %c",&userOption);
    menuChoice(userOption);
    pressToContinue();
    while(userOption!='Q')
    {
        menuOption();
        printf("===========Enter Your Choice:>_");
        scanf(" %c",&userOption);
        menuChoice(userOption);
        pressToContinue();
    }
    return 0;
}
