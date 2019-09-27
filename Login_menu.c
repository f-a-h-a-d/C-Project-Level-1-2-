#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

char s_time[30];
char current_time[30];

void Login_menu(void)
{
    system("cls");

       time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("\n\n\n\n\t\t\t\t\t--- Welcome to Contact Pro 2.1.4 ---\a");

    printf("\n\n\n\n\n\n\n\t\t\t\t\t");
    printf("** Login **");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("Register\n\n");
    printf("\t\t\t\t\t");
    printf("About\n\n");

    printf("Press W to move ( UP )\n");
    printf("Press S to move ( DOWN )\n");
    printf("Press E to ( Enter )\n");

    char a;

    a = getche();

    if(a=='E' || a=='e')
        Login_pass2();

    if(a=='W' || a=='w')
        Login_menu();
        else if(a=='S' || a=='s')
        Login_menu2();
        else
            Login_menu();


}

void Login_menu2(void)
{
    system("cls");

       time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("\n\n\n\n\t\t\t\t\t--- Welcome to Contact Pro 2.1.4 ---\a");

    printf("\n\n\n\n\n\n\n\t\t\t\t\t");
    printf("Login");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("** Register **\n\n");
    printf("\t\t\t\t\t");
    printf("About\n\n");

    printf("Press W to move ( UP )\n");
    printf("Press S to move ( DOWN )\n");
    printf("Press E to ( Enter )\n");

    char a;

    a = getche();

    if(a=='E' || a=='e')
        Reg();

   if(a=='W' || a=='w')
        Login_menu();
        else if(a=='S' || a=='s')
        Login_menu3();
        else
            Login_menu2();

}

void Login_menu3(void)
{
    system("cls");

    time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("\n\n\n\n\t\t\t\t\t--- Welcome to Contact Pro 2.1.4 ---\a");

    printf("\n\n\n\n\n\n\n\t\t\t\t\t");
    printf("Login");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("Register\n\n");
    printf("\t\t\t\t\t");
    printf("** About **\n\n");

    printf("Press W to move ( UP )\n");
    printf("Press S to move ( DOWN )\n");
    printf("Press E to ( Enter )\n");

    char a;

    a = getche();

    if(a=='E' || a=='e')
        About_me();

   if(a=='W' || a=='w')
        Login_menu2();
        else if(a=='S' || a=='s')
        Login_menu3();
        else
            Login_menu3();

}

void About_me(){

    system("cls");
        time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("My name is fahad\n\n");

    system("pause");

}


void time_function(void)
{
    time_t now;
   time(&now);


   strcpy(s_time,ctime(&now));

    int j_time=0;

   for(int i=0;i<strlen(s_time);i++)
   {
       if(i>=11 && i<=19)
        continue;
       else{

        current_time[j_time]=s_time[i];
       j_time++;
       }
   }

   current_time[j_time]='\0';

   printf("\n Current Date :->");

   printf(" %s\n",current_time);
}
