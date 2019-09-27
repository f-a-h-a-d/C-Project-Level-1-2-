#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define L 100000000

char s_time[30];
char current_time[30];


void Loading(void)
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
   printf(" Implemented by Fahad, HSTU CSE(18)\n");

   static int E=0;
    double r=1.0,j=0;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t----------------------------------------------------------------------\n");
    printf("\t\t\t\t\tLODAING  ");

            for(j=1;j<=L;j+=1)
            {
                if(j==r){

                    printf("[#]");

                r=r+5090000.0;

                }
            }

    system("cls");
    E++;
    if(E!=10)
    Loading();

}
