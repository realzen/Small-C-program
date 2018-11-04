#include<stdio.h>
#include<stdlib.h>
#include"05_addRecords.c"
void deleteRecords()
{
    FILE * file1;
    FILE * file2;
    char  c;
    int counter=1;
    int number;
    char * name1="flatfile.txt";
    char * name2="temp.txt";
    viewRecords();
    printf("Enter the line of the Record to delete\n");
    scanf("%d",&number);
    file1=fopen(name1,"r");
    file2=fopen(name2,"w");
    while((c=fgetc(file1))!=EOF)
    {
        if(c=='\n')
        {
            counter=counter+1;
        }
        if(number==counter)
        {
        
        }
        else
            putc(c,file2);
    }
    fclose(file1);
    fclose(file2);
    remove(name1);
    rename(name2,name1);
    

}
