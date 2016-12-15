#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{
srand (time(NULL));
int a = 0;
const int MAX = 2;
const int MIN = 1;
a = rand() % (MAX-MIN+1)+MIN;
printf ("%d", a);
int stati=0;
int dynam=0;

if (a==1)
{
system ("./Statik");
    FILE *statiq;
    statiq=fopen ("/home/rasenyuki/Projet/statik.txt","r");
    fscanf (statiq, "%d", &stati);
    stati ++;
    fclose (statiq);
    statiq=fopen ("/home/rasenyuki/Projet/statik.txt","w");
    fprintf (statiq, "%d ", stati);
    fclose (statiq);
}

else if (a==2)
{
system ("./Dynamique");
    FILE *dyna;
    dyna=fopen ("/home/rasenyuki/Projet/Dynami.txt","r");
    fscanf (dyna, "%d", &dynam);
    dynam ++;
    fclose (dyna);
    dyna=fopen ("/home/rasenyuki/Projet/Dynami.txt","w");
    fprintf (dyna, "%d ", dynam);
    fclose (dyna);
}

return 0;
}
