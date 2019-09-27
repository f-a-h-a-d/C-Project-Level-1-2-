#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int check =0;

void Add_contact(void)
{
     system("cls");
          time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");

    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
    printf("** Add Contact **  ");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("View Contact");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("\n");
   // printf("Delete Contact\n\n");



    printf("Press W to move ( UP )\n");
    printf("Press S to move ( DOWN )\n");
    printf("Press E to ( ENTER )\n");
    printf("Press B to return BACK\n");

    char a;
    a = getche();

   if(a=='W' || a=='w')
    {
        Add_contact();
    }
    else if(a=='S' || a=='s')
    {
        View_contact();

    }
    else if(a=='B' || a=='b')
    {
        Login_menu();
    }
    else if(a=='E' || a=='e')
    {
        Add_user_contact();
        Add_contact();
    }
}

void View_contact()
{
    system("cls");
        time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
    printf("Add Contact");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("** View Contact **");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("\n");


    printf("Press W to move ( UP )\n");
    printf("Press S to move ( DOWN )\n");
    printf("Press E to ( ENTER )\n");
    printf("Press B to return BACK\n");

    char a;
    a = getche();

    if(a=='W' || a=='w')
    {
        Add_contact();
    }
    else if(a=='S' || a=='s')
    {
        Add_contact();
    }
    else if(a=='B' || a=='b')
    {
        Login_menu();
    }
    else if(a=='E' || a=='e')
    {
        view_user_contact();
        Add_contact();
    }
}

void Delete_contact()
{
    system("cls");
         time_function();
    printf(" Implemented by Fahad, HSTU CSE(18)\n");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
    printf("Add Contact");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("View Contact");
    printf("\n\n");
    printf("\t\t\t\t\t");
    printf("** Delete Contact **\n\n");


    printf("Press W to move ( UP )\n");
    printf("Press S to move ( DOWN )\n");
    printf("Press E to ( ENTER )\n");
    printf("Press B to return BACK\n");

    char a;
    a = getche();

    if(a=='W' || a=='w')
    {
        View_contact();
    }
    else if(a=='S' || a=='s')
    {
        Delete_contact();
    }
    else if(a=='B' || a=='b')
    {
        Login_menu();
    }
    else
    {
        Add_contact();
    }
}
