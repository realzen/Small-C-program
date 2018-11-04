#include<stdio.h>
#include"01_customHeader.c"
#include"02_help.c"

#include"06_deleteRecords.c"
//THIS DISPLAYS THE MENU OF THE CHOICES THE USER WILL SEE 
void menuOption()
{
    customHeader();
    printf("=====================================================\n");
    printf("|==     (H)-Help              (Q)-Quit            ==|\n");
    printf("|==     (V)-View Records      (A)-Adding Records  ==|\n");
    printf("|==     (D)-Delete Records    (E)Edit Records     ==|\n");
    printf("|==     (S)-Searching Records                     ==|\n");
    printf("|==                                               ==|\n");
    printf("=====================================================\n");
    

}
// THIS WILL ACTUALLY TAKE THE ANSWER THAT THE USER WILL INPUT
// GIVEN THE INPUT WE WILL DO SOMETHIG DEPENDING ON WHAT LETTER 
// THAT IS
void menuChoice(char letter)
{
    switch(letter) 
    {
        case 'h' :
             printf("HELP was Pressed...\n\n\n" );
             helpMenu();
             break;
        case 'q' :
             printf("QUIT was Pressed...\n\n\n");
             break;
        case 'v' :
             printf("VIEW was Pressed... \n\n\n" );
             viewRecords();
             break;
        case 'a' :
             printf("ADDING RECORDS was Pressed...\n\n" );
             addRecords();
             system("clear");
             printf("UPDATED DATABASE\n");
             viewRecords();
             
             break;
        case 'd' :
             printf("DELETE RECORDS was Pressed...\n\n\n" );
             deleteRecords();
             system("clear");
             printf("UPDATED DATABSE");
             viewRecords();
             break;
        case 'e':
             printf("EDIT RECORDS was Pressed...\n\n\n");
             break;
        case 's':
             printf("SEARCH RECORDS was Pressed...\n\n\n");
             break;
          default :
             printf("Invalid Option, Please Enter a Valid Option\n" );
   }

}
