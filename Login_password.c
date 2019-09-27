#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

char global_string[20];


struct detail{

    char name[20];
    char password[20];
    char Hometown[20];


}user,user1;

void Login_pass2(void)
{

    system("cls");
         time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("\n\n\t\t\t\t\t--- LOGIN ---\a");

    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");

    printf("Enter ID : ( Atmost 15 characters )\n\n");
    printf("\t\t\t\t\t--> ");

    gets(user.name);

    printf("\n\n");
    printf("\t\t\t\t\tEnter Password : ( Atmost 15 characters )\n\n");
    printf("\t\t\t\t\t--> ");

    gets(user.password);

    int k =check_user();

    if(k==1){
        Add_contact();

    }
        else
        {
            printf("\n\n  Name and Password don't match or blank\n");
            printf("  Please Register or Try again !\n\n\n");
            system("pause");
        }

}

int check_user(void)
{
    FILE *check_u;

    check_u = fopen("check.txt","r");

    int bol=0;

    if(check_u!=NULL)
    {
        while(fscanf(check_u,"%s %s %s\n",&user1.name,&user1.password,&user1.Hometown)!=EOF)
        {

            if(strcmp(user1.name,user.name)==0 && strcmp(user1.password,user.password)==0)
                {
                    strcpy(global_string,user1.Hometown);

                    bol=1;
                    break;
                }
        }
    }

    fclose(check_u);

    if(bol==1){
        strcat(user.name,".txt");
        return 1;
    }
    else
        return 0;
}

void Reg(void)
{
    system("cls");
        time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");
    printf("\n\n\n\t\t\t\t\t--- REGISTER ---\a");

    printf("\n\n\n\n\n\n\n\t\t\t\t\t");

    printf("Enter ID : ( Atmost 15 characters )\n\n");
    printf("\t\t\t\t\t--> ");

    gets(user.name);

    printf("\n\n");
    printf("\t\t\t\t\tEnter Password : ( Atmost 15 characters 'Numbers Only')\n\n");
    printf("\t\t\t\t\t--> ");

    gets(user.password);

    printf("\n\n");
    printf("\t\t\t\t\tEnter Hometown : ( Atmost 15 characters )\n\n");
    printf("\t\t\t\t\t--> ");

    gets(user.Hometown);

    if(strcmp(user.name,"")==0 || strcmp(user.password,"")==0 || strcmp(user.Hometown,"")==0)
    {
        printf("\n\n   Information not stored !\n");
        printf("   Fill in blank space !\n\n\n");
        system("pause");
        return;
    }


      FILE *check_u;

    check_u = fopen("check.txt","a++");


        fprintf(check_u,"%s %s %s\n",user.name,user.password,user.Hometown);

    fclose(check_u);
}

struct us{

    char Name[20];
    char mobile_number[20];
    char phone_number[20];
    char email[20];
    char home_town[20];
    char time_taken[30];

} users;

void Add_user_contact(void){

    system("cls");
         time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("\t\n\n\n");

    printf("\t\t\t   --- Enter name ---\n\n");
    printf("\t\t\t  -> ");

    gets(users.Name);
    printf("\n");
    printf("\t\t\t    --- Enter mobile ---\n\n");
     printf("\t\t\t  -> ");

    gets(users.mobile_number);
    printf("\n");
    printf("\t\t\t    --- Enter phone ---\n\n");
     printf("\t\t\t  -> ");

    gets(users.phone_number);
    printf("\n");
    printf("\t\t\t    --- Enter email ---\n\n");
     printf("\t\t\t  -> ");

    gets(users.email);
    printf("\n");
    printf("\t\t\t    --- Enter home ---\n\n");
     printf("\t\t\t  -> ");

    gets(users.home_town);
    printf("\n");

    if(strcmp(users.Name,"")!=0)
    {

    if(strcmp(users.mobile_number,"")==0)
        strcpy(users.mobile_number,"NULL");

    if(strcmp(users.phone_number,"")==0)
        strcpy(users.phone_number,"NULL");

    if(strcmp(users.email,"")==0)
        strcpy(users.email,"NULL");

    if(strcmp(users.home_town,"")==0)
        strcpy(users.home_town,"NULL");



    }

    FILE *add;

    add = fopen(user.name,"a++");


        fprintf(add,"%s %s %s %s %s\n",users.Name,users.mobile_number,users.phone_number,users.email,users.home_town);

    fclose(add);


}

void view_user_contact(void){

    system("cls");
        time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

     FILE *show;

     printf("   \n\n\t\t\tUser Reference-->\t");
     printf("%s",user.name);
     printf("\n\n");

    show = fopen(user.name,"r");

    int cnt=1;

    if(show!=NULL)
    {
        while(fscanf(show,"%s %s %s %s %s\n",&users.Name,&users.mobile_number,&users.phone_number,&users.email,&users.home_town)!=EOF)
        {
            printf("\n\n");

            printf(" %d--",cnt);
            printf("\tName -> %s\n",users.Name);
            printf("\tMobile -> %s\n",users.mobile_number);
            printf("\tPhone -> %s\n",users.phone_number);
            printf("\tEmail -> %s\n",users.email);
            printf("\tHomeTown -> %s\t\t",users.home_town);

            if(strcmp(users.home_town,"NULL")!=0){
            int gr = GRAPH(users.home_town,global_string);

            if(gr!=0)
            printf("Approximate distance from you and %s -> %d km.\n",users.Name,gr);
            else
                printf("You and %s live in the same Division.\n",users.Name);


            }
            else
            printf("Approximate distance from you and %s is (UNKNOWN).\n",users.Name);

            cnt++;
            //printf("Name -> %s\n Mobile Number%s %s %s %s",users.Name,users.mobile_number,users.phone_number,users.email,users.home_town);
        }
    }
    fclose(show);


    printf("\n");
    system("pause");
}


