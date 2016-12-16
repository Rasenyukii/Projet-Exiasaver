#include <stdio.h>  /*bibliothéque de base */
#include <stdlib.h> /*bibliothéque de base */
#include <math.h>   /*bibliothéque qui permet de calculer */
#include <time.h>   /*bibliothéque sui permet de connaitre et d'utilisé l'heure*/
#include <sys/ioctl.h>
#include <string.h> /*bibliothéqe qui permet de géré les caractéres */
#include <unistd.h>
 
void gotoxy(int x, int y) /* initialisation du gotoyx dans le void, et des variables x, y qui permette de placer les images.PBM dans la fenetre */
{
    printf("%c[%d;%df", 0x1b, y, x); // initialisation de la fonction gotoxy //
}
 
int main()
{
 while(1) // debut d'une boucle infinie //
    {  
       time_t date_heurs_actuelles = time (NULL); // initialisation de la variable time //
        struct tm *temps_humain = localtime (&date_heurs_actuelles); // création de la structure tm qui correspond a reprendre l'heur du systéme //
     
     int heurs, minutes, secondes; // initialisation des variables heurs, minutes et secondes //
     int kairi; // initialisation de la variable kairi //
     int a = 0; // initialisation des variables et mise a 0 de celle-ci //
     int b = 0;
     int c = 0;
     int d = 0;
     int q = 0;
     int s = 0;
     int f = 0;
     int g = 0;
     int h = 0;
     int j = 0;
     int i = 0;
     
     
   
 
     int uniteH; // initialisation des variables //
     int uniteM;
     int uniteS;
     int dio;    
     int min;    
     int ora;  
     int dora;
     int pika;  
     int gigi;  
     int lulu;  
     
     FILE* sora = NULL; // mise a zéro des varibles qui vont contenir des fichiers //
     FILE* jojo = NULL;
     FILE* toko = NULL;
     FILE* muda = NULL;
     FILE* tic = NULL;
     FILE* pichu = NULL;
     FILE* point = NULL;
     FILE* point2 = NULL;
     FILE* image3 = NULL;
       
       
     
        heurs = temps_humain->tm_hour; // les variables heurs,minutes et secondes prend les valeurs du temps //
        minutes = temps_humain->tm_min;
        secondes = temps_humain->tm_sec;
        uniteH = heurs%10;  // on recupére l'unité de l'heure, des minutes et des secondes//
        uniteM = minutes%10;
       uniteS = secondes%10;
	int annee, i_mois, jour_mois, i_jour_semaine;

	annee = 1900 + temps_humain->tm_year;
	jour_mois = temps_humain->tm_mday;
	i_mois = temps_humain->tm_mon;



    image3 = fopen("/home/rasenyuki/Projet/Historique.txt","a");
    fprintf(image3,"%d/%d/%d ",jour_mois,i_mois,annee);
    fseek (image3, 0 , SEEK_END);
    fprintf(image3,"%d:%d:%d ",heurs, minutes, secondes);
    fseek (image3, 0 , SEEK_END);
    fputs (";2\n ", image3);
     
   
 
       if (heurs < 10)  // condition qui permet d'afficher l'image .PBM zero quand la dizaine des heures est à zéro//
        {
            sora = fopen("/home/rasenyuki/plop/zero.pbm","r"); // on ouvre l'image zero en .PBM //          
        }
       else if (heurs < 20) // condition qui permet d'afficher l'image .PBM un quand la dizaine des heures est à un//
        {
            sora = fopen("/home/rasenyuki/plop/un.pbm","r");// on ouvre l'image un en .PBM //
           
        }
       else if (heurs > 20)// condition qui permet d'afficher l'image .PBM un quand la dizaine des heures est à deux//
        {
            sora = fopen("/home/rasenyuki/plop/deux.pbm","r");// on ouvre l'image deux en .PBM //
           
        }
 
    c = 27; // on initialise la variable c a 10 //
    d = 62;// on initialise la variable d a 1 //
    gotoxy(d, c); // on initialise le placement de l'image //
      while (a != 1000)  // initialisation de la boucle //
        {
        kairi = fgetc(sora); // o prend la valeur du charactere lit par la fonction fgetc //
        a++;
 
 
       
       
        if ( kairi == 10) // quand la valeur de o est egale a 10 retour a la ligne //
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
       
            }
       
        if (kairi == 48) // quand la valeur de o est egale a 48 afficher un elements vide  
            {
                printf("%c",255);
                 
            }
        else if ( kairi == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178
            {
                printf("%c",178);
               
            }
       
           
       
   
        }
       
        fclose(sora); // on ferme l'image //
   
 
   
     if (uniteH == 0) // condition qui permet d'afficher l'image .PBM zero quand l'unité des heures est à zéro//
        {
            jojo = fopen("/home/rasenyuki/plop/zero.pbm","r"); // on ouvre l'image zero en .PBM //
        }
     else if (uniteH == 1)// condition qui permet d'afficher l'image .PBM un quand l'unité des heures est à un//
        {
            jojo = fopen("/home/rasenyuki/plop/un.pbm","r");// on ouvre l'image un en .PBM //
        }
    else if (uniteH == 2)// condition qui permet d'afficher l'image .PBM deux quand l'unité des heures est à deux//
        {
            jojo = fopen("/home/rasenyuki/plop/deux.pbm","r");// on ouvre l'image deux en .PBM //
        }
    else if (uniteH == 3)// condition qui permet d'afficher l'image .PBM trois quand l'unité des heures est à trois//
        {
            jojo = fopen("/home/rasenyuki/plop/trois.pbm","r");// on ouvre l'image trois en .PBM //
        }
     else if (uniteH == 4)// condition qui permet d'afficher l'image .PBM quatre quand l'unité des heures est à quatre//
        {
            jojo = fopen("/home/rasenyuki/plop/quatre.pbm","r");// on ouvre l'image quatre en .PBM //
        }
    else if (uniteH == 5)// condition qui permet d'afficher l'image .PBM cinq quand l'unité des heures est à cinq//
        {
            jojo = fopen("/home/rasenyuki/plop/cinque.pbm","r");// on ouvre l'image cinq en .PBM //
        }
    else  if (uniteH == 6)// condition qui permet d'afficher l'image .PBM six quand l'unité des heures est à six//
        {
            jojo = fopen("/home/rasenyuki/plop/six.pbm","r");// on ouvre l'image six en .PBM //
        }
     else if (uniteH == 7)// condition qui permet d'afficher l'image .PBM sept quand l'unité des heures est à sept//
        {
            jojo = fopen("/home/rasenyuki/plop/sept.pbm","r");// on ouvre l'image sept en .PBM //
        }
    else if (uniteH == 8)// condition qui permet d'afficher l'image .PBM huit quand l'unité des heures est à huit//
        {
            jojo = fopen("/home/rasenyuki/plop/huit.pbm","r");// on ouvre l'image huit en .PBM //
        }
    else if (uniteH == 9)// condition qui permet d'afficher l'image .PBM neuf quand l'unité des heures est à neuf//
        {
            jojo = fopen("/home/rasenyuki/plop/neuf.pbm","r");// on ouvre l'image neuf en .PBM //
        }
 
    c = 27;// on initialise la variable c à 10 et la variable d à 8//
    d = 71;
    gotoxy(d, c);// on initialise le placement de l'image //
    while (b != 1000)
       
        {
         
        dio = fgetc(jojo); // o prend la valeur du charactere lit par la fonction fgetc
        b++;
       
 
       
       
        if ( dio == 10) // quand la valeur de o est egale a 10 retour a la ligne
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (dio == 48) // quand la valeur de o est egale a 48 afficher un elements vide  
            {
                printf("%c",255);
                 
            }
        else if ( dio == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178
            {
                printf("%c",178);
               
            }
       
       
   
        }
    fclose(jojo);// on ferme l'image //
 
 
    point = fopen("/home/rasenyuki/plop/2point.pbm","r"); // on ouvre l'image des deux points qui sépare les heurs des minutes en .PBM//
    c = 27;// on initialise la variable c à 10 et la variable d à 16//
    d = 80;
    gotoxy(d, c);//on initialise le placement de l'image //
    while (h != 1000)
        {
         
        gigi = fgetc(point); // o prend la valeur du charactere lit par la fonction fgetc//
        h++;
       
 
       
       
        if ( gigi == 10) // quand la valeur de o est egale a 10 retour a la ligne//
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (gigi == 48) // quand la valeur de o est egale a 48 afficher un elements vide  //
            {
                printf("%c",255);
                 
            }
        else if ( gigi == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178//
            {
                printf("%c",178);
               
            }
       
       
   
        }
    fclose(point);// on ferme l'image //
 
   
    if (minutes < 10)// condition qui permet d'afficher l'image .PBM zéro quand la dizaine des minutes est à zéro//
        {
            toko = fopen("/home/rasenyuki/plop/zero.pbm","r");//on ouvre l'image zéro //
        }
    else if (minutes < 20)// condition qui permet d'afficher l'image .PBM un quand la dizaine des minutes est à un//
        {
            toko = fopen("/home/rasenyuki/plop/un.pbm","r");//on ouvre l'image un //
        }
    else if (minutes < 30)// condition qui permet d'afficher l'image .PBM deux quand la dizaine des minutes est à deux//
        {
            toko = fopen("/home/rasenyuki/plop/deux.pbm","r");//on ouvre l'image deux //
        }
    else if (minutes < 40)// condition qui permet d'afficher l'image .PBM trois quand la dizaine des minutes est à trois//
        {
            toko = fopen("/home/rasenyuki/plop/trois.pbm","r");//on ouvre l'image trois //
        }
    else if (minutes < 50)// condition qui permet d'afficher l'image .PBM quatre quand la dizaine des minutes est à quatre//
        {
            toko = fopen("/home/rasenyuki/plop/quatre.pbm","r");//on ouvre l'image quatre //
        }
    else if (minutes < 60)// condition qui permet d'afficher l'image .PBM cinq quand la dizaine des minutes est à cinq//
        {
            toko = fopen("/home/rasenyuki/plop/cinque.pbm","r");//on ouvre l'image cinque //
        }
 
    c = 27;// on initialise la variable c à 10 et la variable d à 25//
    d = 84;
    gotoxy(d, c);//on initialise le placement de l'image //
 
    while (q != 1000)
        {
         
        min = fgetc(toko); // o prend la valeur du charactere lit par la fonction fgetc//
        q++;
       
 
       
       
        if ( min == 10) // quand la valeur de o est egale a 10 retour a la ligne//
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (min == 48) // quand la valeur de o est egale a 48 afficher un elements vide  //
            {
                printf("%c",255);
                 
            }
        else if ( min == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178//
            {
                printf("%c",178);
               
            }
       
       
   
        }
    fclose(toko);// on ferme l'image //
 
 if (uniteM == 0)// condition qui permet d'afficher l'image .PBM zero quand l'unité des minutes est à zéro//
        {
            muda = fopen("/home/rasenyuki/plop/zero.pbm","r");//on ouvre l'image zéro //
        }
     else if (uniteM == 1)// condition qui permet d'afficher l'image .PBM un quand l'unité des minutes est à un//
        {
            muda = fopen("/home/rasenyuki/plop/un.pbm","r");//on ouvre l'image un //
        }
    else if (uniteM == 2)// condition qui permet d'afficher l'image .PBM deux quand l'unité des minutes est à deux//
        {
            muda = fopen("/home/rasenyuki/plop/deux.pbm","r");//on ouvre l'image deux //
        }
    else if (uniteM == 3)// condition qui permet d'afficher l'image .PBM trois quand l'unité des minutes est à trois//
        {
            muda = fopen("/home/rasenyuki/plop/trois.pbm","r");//on ouvre l'image trois //
        }
     else if (uniteM == 4)// condition qui permet d'afficher l'image .PBM quatre quand l'unité des minutes est à quatre//
        {
            muda = fopen("/home/rasenyuki/plop/quatre.pbm","r");//on ouvre l'image quatre //
        }
    else if (uniteM == 5)// condition qui permet d'afficher l'image .PBM cinq quand l'unité des minutes est à cinq//
        {
            muda = fopen("/home/rasenyuki/plop/cinque.pbm","r");//on ouvre l'image cinq //
        }
    else  if (uniteM == 6)// condition qui permet d'afficher l'image .PBM six quand l'unité des minutes est à six//
        {
            muda = fopen("/home/rasenyuki/plop/six.pbm","r");//on ouvre l'image six //
        }
     else if (uniteM == 7)// condition qui permet d'afficher l'image .PBM sept quand l'unité des minutes est à sept//
        {
            muda = fopen("/home/rasenyuki/plop/sept.pbm","r");//on ouvre l'image sept //
        }
    else if (uniteM == 8)// condition qui permet d'afficher l'image .PBM huit quand l'unité des minutes est à huit//
        {
            muda = fopen("/home/rasenyuki/plop/huit.pbm","r");//on ouvre l'image huit //
        }
    else if (uniteM == 9)// condition qui permet d'afficher l'image .PBM neuf quand l'unité des minutes est à neuf//
        {
            muda = fopen("/home/rasenyuki/plop/neuf.pbm","r");//on ouvre l'image neuf //
        }
 
    c = 27;// on initialise la variable c à 10 et la variable d à 34//
    d = 93;
    gotoxy(d, c);//on initialise le placement de l'image //
    while (s != 1000)
       
        {
         
        ora = fgetc(muda); // o prend la valeur du charactere lit par la fonction fgetc//
        s++;
       
 
       
       
        if ( ora == 10) // quand la valeur de o est egale a 10 retour a la ligne//
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (ora == 48) // quand la valeur de o est egale a 48 afficher un elements vide  //
            {
                printf("%c",255);
                 
            }
        else if ( ora == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178//
            {
                printf("%c",178);
               
            }
       
       
   
        }
    fclose(muda);// on ferme l'image//
   
    point2 = fopen("/home/rasenyuki/plop/2point.pbm","r");// on ouvre l'image des deux points qui sépare les minutes des secondes en .PBM//
    c = 27;// on initialise la variable c à 10 et la variable d à 43//
    d = 102;
    gotoxy(d, c);//on initialise le placement de l'image //
    while (j != 1000)
        {
            lulu = fgetc(point2); // o prend la valeur du charactere lit par la fonction fgetc//
            j++;
       
 
       
       
        if ( lulu == 10) // quand la valeur de o est egale a 10 retour a la ligne//
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (lulu == 48) // quand la valeur de o est egale a 48 afficher un elements vide  //
            {
                printf("%c",255);
                 
            }
        else if ( lulu == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178//
            {
                printf("%c",178);
               
            }
        }
    fclose(point2);// on ferme l'image //
       
       
 
   
 
 
    if (secondes < 10)// condition qui permet d'afficher l'image .PBM zéro quand la dizaine des secondes est à zéro//
        {
            tic = fopen("/home/rasenyuki/plop/zero.pbm","r");//on ouvre l'image zéro //
        }
    else if (secondes < 20)// condition qui permet d'afficher l'image .PBM un quand la dizaine des secondes est à un//
        {
            tic = fopen("/home/rasenyuki/plop/un.pbm","r");//on ouvre l'image un //
        }
    else if (secondes < 30)// condition qui permet d'afficher l'image .PBM deux quand la dizaine des secondes est à deux//
    {
            tic = fopen("/home/rasenyuki/plop/deux.pbm","r");//on ouvre l'image deux //
        }
    else if (secondes < 40)// condition qui permet d'afficher l'image .PBM trois quand la dizaine des secondes est à trois//
        {
            tic = fopen("/home/rasenyuki/plop/trois.pbm","r");//on ouvre l'image trois //
        }
    else if (secondes < 50)// condition qui permet d'afficher l'image .PBM quatre quand la dizaine des secondes est à quatre//
        {
            tic = fopen("/home/rasenyuki/plop/quatre.pbm","r");//on ouvre l'image quatre //
        }
    else if (secondes < 60)// condition qui permet d'afficher l'image .PBM cinq quand la dizaine des secondes est à cinq//
        {
            tic = fopen("/home/rasenyuki/plop/cinque.pbm","r");//on ouvre l'image cinq //
        }
 
 
    c = 27;// on initialise la variable c à 10 et la variable d à 52//
    d = 111;
    gotoxy(d, c);//on initialise le placement de l'image //
    while (f != 1000)
       
         {
       
        dora = fgetc(tic); // o prend la valeur du charactere lit par la fonction fgetc//
        f++;
       
       
       
        if ( dora == 10) // quand la valeur de o est egale a 10 retour a la ligne//
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (dora == 48) // quand la valeur de o est egale a 48 afficher un elements vide  //
            {
                printf("%c",255);
               
            }
        else if ( dora == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178//
            {
                printf("%c",178);
               
            }
       
       
   
        }
    fclose(tic);// on ferme l'image//
 
   
    if (uniteS == 0)// condition qui permet d'afficher l'image .PBM zero quand l'unité des secondes est à zéro//
        {
            pichu = fopen("/home/rasenyuki/plop/zero.pbm","r");//on ouvre l'image quatre //
        }
     else if (uniteS == 1)// condition qui permet d'afficher l'image .PBM un quand l'unité des secondes est à un//
        {
            pichu = fopen("/home/rasenyuki/plop/un.pbm","r");//on ouvre l'image un //
        }
    else if (uniteS == 2)// condition qui permet d'afficher l'image .PBM deux quand l'unité des secondes est à deux//
        {
            pichu = fopen("/home/rasenyuki/plop/deux.pbm","r");//on ouvre l'image deux //
        }
    else if (uniteS == 3)// condition qui permet d'afficher l'image .PBM trois quand l'unité des secondes est à trois//
        {
            pichu = fopen("/home/rasenyuki/plop/trois.pbm","r");//on ouvre l'image trois //
        }
     else if (uniteS == 4)// condition qui permet d'afficher l'image .PBM quatre quand l'unité des secondes est à quatre//
        {
            pichu = fopen("/home/rasenyuki/plop/quatre.pbm","r");//on ouvre l'image quatre //
        }
    else if (uniteS == 5)// condition qui permet d'afficher l'image .PBM cinq quand l'unité des secondes est à cinq//
        {
            pichu = fopen("/home/rasenyuki/plop/cinque.pbm","r");//on ouvre l'image cinq //
    }
    else  if (uniteS == 6)// condition qui permet d'afficher l'image .PBM six quand l'unité des secondes est à six//
        {
            pichu = fopen("/home/rasenyuki/plop/six.pbm","r");//on ouvre l'image six //
        }
     else if (uniteS == 7)// condition qui permet d'afficher l'image .PBM sept quand l'unité des secondes est à spet//
        {
            pichu = fopen("/home/rasenyuki/plop/sept.pbm","r");//on ouvre l'image sept //
        }
    else if (uniteS == 8)// condition qui permet d'afficher l'image .PBM huit quand l'unité des secondes est à huit//
        {
            pichu = fopen("/home/rasenyuki/plop/huit.pbm","r");//on ouvre l'image huit //
        }
    else if (uniteS == 9)// condition qui permet d'afficher l'image .PBM neuf quand l'unité des secondes est à neuf//
        {
            pichu = fopen("/home/rasenyuki/plop/neuf.pbm","r");//on ouvre l'image neuf //
        }
 
    c = 27;// on initialise la variable c à 10 et la variable d à 61//
    d = 120;
    gotoxy(d, c);//on initialise le placement de l'image //
    while (g != 1000)
       
        {
         
        pika = fgetc(pichu); // o prend la valeur du charactere lit par la fonction fgetc//
        g++;
       
 
       
       
        if ( pika == 10) // quand la valeur de o est egale a 10 retour a la ligne//
            {
            printf("\n");
            c++;
            gotoxy(d, c);
           
           
           
            }
       
        if (pika == 48) // quand la valeur de o est egale a 48 afficher un elements vide  //
            {
                printf("%c",255);
                 
            }
        else if ( pika == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178//
            {
                printf("%c",178);
               
            }
           
        }
        fclose(pichu);// on ferme l'image//
 
 
    printf("\n");// on descend la phrase " Veuillez attendre quelques secondes" //
    printf("\n");
    printf("\n");
    c = 35;
    d = 67;
    gotoxy(d, c);
    printf("Veuillez attendre quelques secondes"); // on affiche la phrase " Veuillez attendre quelques secondes" //
   
    for(i; i<10; i++)  // on initialise les conditions de i pour pouvoir afficher les points au faire et  à mesure
    {      
        sleep(1);
        printf(".");
        fflush(stdout); // on force l'actualisation de la page et on vide le buffer //
    }  
   
    system("clear"); // on efface pour réafficher proprement l'heure //
 
 
   
 
           
   
           
   
           
       
   
    fclose(image3);   
       
       
}
 
return 0;
}
