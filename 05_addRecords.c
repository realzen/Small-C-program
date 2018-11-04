#include<stdlib.h>
#include<stdio.h>
#include"04_viewRecords.c"
// THIS FUNCTION WILL ADD A RECORD TO THE TABLE AND SAVE IT
// BUT BEFORE ADDING IT CHECKS IF THE FILE EXISTS AND IF NOT
// CREATES IT JUST LIKE IN THE VIEWRECORDS FUNCTION
// WHICH IS HOW WE WILL DO ALL THAT, THERE IS NO NEED TO REWRITE 
// CODE SO WE WILL JUST USE THE SAME CODE FROM THE OTHER 
// FUNCTION TO CHECK FOR THE FILE EXISTANCE AND CREATING THE 
// DUMMY DATABASE FILE
void addRecords()
{

    FILE *file;
    char * name="flatfile.txt";
    char  make[10];
    char  model[10];
    char  year[10];
    viewRecords();

    file=fopen(name,"a");
    printf("NOW ENTERTING TO THE DATABASE FILE\n");
    printf("Enter the MAKE of the vehicle:");
    scanf("%s",make);
    fprintf(file,"%s",make);
    printf("Enter the MODEL of the vehicle:");
    scanf("%s",model);
    fprintf(file," %s",model);
    printf("Enter the YEAR of the vehicle:");
    scanf("%s",year);
    fprintf(file," %s",year);
    fprintf(file,"\n");
    fclose(file);
    


}
