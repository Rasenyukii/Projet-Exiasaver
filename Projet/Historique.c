#include <stdio.h>
#include <stdlib.h>

int main ()
{

    FILE *image3;
    int c;
    image3=fopen ("/home/rasenyuki/Projet/Historique.txt","r");
    
    while (1)
    {
    c = fgetc(image3);
    if(feof(image3))
    {break;}
    printf("%c",c);
    }
    fclose(image3);

    return 0;
}
