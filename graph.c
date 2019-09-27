#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int GRAPH(char take_town[],char global_string[])
{
    int Place[8][8]={  {0,238,168,336,363,491,467,145},
                { 241,0,258,358,491,546,380,386},
                { 168,249,0,112,245,301,236,246},
                {316,358,112,0,232,288,185,369},
                {363,491,245,232,0,219,457,268},
                {491,546,301,288,219,0,512,392},
                {467,380,236,185,457,512,0,498},
                {145,386,249,369,268,392,498,0}

            };


            int ta;
            int g;

            if(strcmpi(take_town,"Barisal")==0)
                ta=0;

            if(strcmpi(take_town,"Chittagong")==0)
                ta=1;

                if(strcmpi(take_town,"Dhaka")==0)
                ta=2;

                if(strcmpi(take_town,"Mymensingh")==0)
                ta=3;

                if(strcmpi(take_town,"Rajshahi")==0)
                ta=4;

                if(strcmpi(take_town,"Rangpur")==0)
                ta=5;

                if(strcmpi(take_town,"Sylhet")==0)
                ta=6;

                if(strcmpi(take_town,"Khulna")==0)
                ta=7;


                if(strcmpi(global_string,"Barisal")==0)
                g=0;

                if(strcmpi(global_string,"Chittagong")==0)
                g=1;

                if(strcmpi(global_string,"Dhaka")==0)
                g=2;

                if(strcmpi(global_string,"Mymensingh")==0)
                g=3;

                if(strcmpi(global_string,"Rajshahi")==0)
                g=4;

                if(strcmpi(global_string,"Rangpur")==0)
                g=5;

                if(strcmpi(global_string,"Sylhet")==0)
                g=6;

                if(strcmpi(global_string,"Khulna")==0)
                g=7;

                return Place[g][ta];

}
