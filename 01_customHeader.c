#include<stdio.h>
/* CUSTOM HEADE FILE TO PRINT THE HEADER THAT WE WANT 
 * TO SEE ON THE TOP OF THE SCREEN
 */
void customHeader()
{
    //THESE ARE CHAR ARRAYS TO SPELL NAME
    //SINCE SOME LETTERS ARE THE SAME WE 
    //WILL REUSE THE SAME CHAR ARR 
    char * E[4];
    char * D[4];
    char * B[4];

    E[0]="____";
    E[1]="|   ";
    E[2]="|---";
    E[3]="|___";
    D[0]=" -_ ";
    D[1]="|  |";
    D[2]="|  |";
    D[3]="|_/ ";
    B[0]=" _-_";
    B[1]="| _-";
    B[2]="| -_";
    B[3]="| _-";
    
    
    
    
    
    printf("////////////////////////////////////////////////////\n");

    //LOOPS TO PRINT THE CHAR ARRAYS
    for(int i=0; i<4;i++)
    {
        printf("//   ");
        printf("            ");
        printf("%s",E[i]);
        printf(" ");
        printf(" ");
        printf(" ");
        printf(" ");
        printf(" ");
        printf(" ");
        printf(" ");
        printf("%s",D[i]);
        printf(" ");
        printf("%s",B[i]);
        printf("             ");
        printf("//");
        printf("\n");
    }
    printf("////////////////////////////////////////////////////\n");
    // THIS IS THE NAME ,SEMESTER ,YEAR, PROJECT NAME
    printf("    *********************************************\n");
    printf("    *        Ernesto  Car Sales DB              *\n");
    printf("    *********************************************\n");
    







}
