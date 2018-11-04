#include<stdlib.h>
#include<stdio.h>

void displayFile(char * name)
{

    printf("MAKE MODEL YEAR\n");
    FILE *file;
    file= fopen(name, "r");
    int c;
    int i=1;
        while ((c = fgetc(file)) != EOF)  
        {   
            if(c=='\n')
            {
                    printf(" |");
                    printf("%d|",i);
                    i=i+1;
            }
            

            putchar(c);
        }
    fclose(file);

}
//FUNCTION TO CHECK IF THE FILE EXITS RETURNS int a
//IF IT EXISTS , 0 IF IT DOES NOT EXIST
int checkFile(char * name)
{
    FILE * File;
    File=fopen(name,"r");
    if (File)
    {
        fclose(File);
        return 1;
    }
    else
        return 0;
    fclose(File);
}
// THIS WILL CALL THE CHECK FILE FUNCTION ABOVE AND 
// THEN CHECK THE RETURN VALUE AND WILL OUTPUT IF THE FILE
// EXISTS OR NOT THEN CREATE A DUMMY DATABASE IF IT DOESNT OR 
// JUST LOAD THE EXISTING FILE
void viewRecords()
{
    FILE * file;
    char * name="flatfile.txt";
    if(checkFile(name)==0)
    {
        printf("%s ",name);
        printf("WAS NOT FOUND!!!!\n");
        printf("***BUILDING DATABASE FILE***\n\n");
        file=fopen(name,"w");
        //printf(file,"MAKE MODEL YEAR\n");
        fprintf(file,"Ford Mustang 2011\n");
        fprintf(file,"Jeep Sahara 2008\n");
        fprintf(file,"Chevy Malibu 2001\n");
        printf("\n");
        fclose(file);
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        displayFile(name);
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
            
    }
    else
    {
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        displayFile(name);
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    }


}
