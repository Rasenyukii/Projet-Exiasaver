#include <stdio.h>
#include <stdlib.h>
#include <pam.h>
#include <string.h>
#include <time.h>

int main()
{
	
	int i = 0;	//initialisation de toute les variables
	int row, col;
	int o;
	int pic;
	int x, y;
	int iC, iL;
	int plop;
	int plup;
	int plototo;
	int dio;
	const int MAX = 5, MIN = 1; // constante pour le random
	srand (time(NULL)); // initialisation a null du random 
	FILE* image = NULL; //initialisation a null de la variable qui va recup les fichiers PBM
	
	pic = (rand() % (MAX - MIN + 1)) + MIN; // Random pour choisir quel image afficher
	printf("%d\n", pic); //Juste du debug
	row = 54;  // largeur de la console 
	col = 204; // longeur de la console 
	
	
	time_t date_heures_actuelles = time (NULL);
	struct  tm *temps_humain = localtime (&date_heures_actuelles);
	int annee, i_mois, jour_mois, i_jour_semaine, heures, minutes, secondes;

	annee = 1900 + temps_humain->tm_year;
	jour_mois = temps_humain->tm_mday;
	i_mois = temps_humain->tm_mon;
	heures = temps_humain->tm_hour;
	minutes = temps_humain->tm_min;
	secondes = temps_humain->tm_sec;

	FILE *image3=NULL;
	image3=fopen ("/home/rasenyuki/Projet/Historique.txt","a");
	    fprintf(image3,"%d/%d/%d ",jour_mois,i_mois,annee);
	    fseek (image3, 0 , SEEK_END);
	    fprintf(image3,"%d:%d:%d ",heures, minutes, secondes);
	    fseek (image3, 0 , SEEK_END);
	    fputs (";1\n ", image3);
	

	


	if (pic == 1)
	{	
		image = fopen("/home/rasenyuki/plop/image.PBM","r"); // recuperation de la premiere image 
		iL = 27; // largeur de l'image 
		iC = 100; // longeur de l'image 
		row = (54 - 27)/2; // calcul pour centrer l'image au lvl de la largeur 
		col = (204 - 100)/2; // calcul pour centrer l'image au lvl de la longueur
	
		for (plop = 0; plop < row; plop++) // boucle pour decaler verticalement 
		{
			printf("\n");
		}
		

		  
   		  fputs ("image.PBM\n", image3);


		
	
		while (i != 4000)
		{
		o = fgetc(image); // o prend la valeur du charactere lit par la fonction fgetc
		i++;

		
		
		if ( o == 10) // quand la valeur de o est egale a 10 retour a la ligne 
			{
			printf("\n");
		for (plototo = 0; plototo < 75; plototo++)
				{
					printf("%c",32);
				}
			}
		
		if (o == 48) // quand la valeur de o est egale a 48 afficher un elements vide  
			{
				printf("%c",255);
				 
			}
		else if ( o == 49)// quand la valeur de o est egale a 49 afficher le character ascii numero 178 
			{
				printf("\033[22;35m%c",178);
				
			}
		
		
		
		}
		for (dio = 0; dio < row; dio++) // permet de centrer
			{
				printf("\n");
			}
	
		
		fclose(image);
	}

	else if (pic == 2)
	{
		image = fopen("/home/rasenyuki/plop/Yoshi.pbm","r"); // recuperation de la deuxieme image 
		row = (54 - 19)/2; // calcul pour centrer l'image au lvl de la largeur
		col = (204 - 36)/2; // calcul pour centrer l'image au lvl de la longueur
	
		for (plop = 0; plop < row; plop++) // boucle pour decaler verticalement
		{
			printf("\n");
		}
		for (plup = 0; plup < 90; plup++) // boucle pour decaler horizontalement 
		{
			printf("%c",32);
		}
		
fputs ("Yoshi.pbm\n", image3);
	
			while (i != 4000)
			{
			o = fgetc(image);
			i++;
			
			if ( o == 10)
			{
				printf("\n");
				for (plototo = 0; plototo < 90; plototo++)
				{
					printf("%c",32);
				}
			}
		
		
			if (o == 48)
				{
					printf("%c",255);
				}
			else if ( o == 49)
				{
					printf("\033[22;32m%c",178);
				}
			}
			for (dio = 0; dio < row; dio++)
				{
					printf("\n");
				}
	
	
			fclose(image);
	}

	else if (pic == 3)// recuperation de la troisieme image 
	{
		image = fopen("/home/rasenyuki/plop/force.pbm","r");
		row = (54 - 37)/2;// calcul pour centrer l'image au lvl de la largeur
		col = (204 - 100)/2;// calcul pour centrer l'image au lvl de la longueur
	
		for (plop = 0; plop < row; plop++) // boucle pour decaler verticalement
		{
			printf("\n");
		}
		for (plup = 0; plup < 75; plup++) // boucle pour decaler horizontalement 
		{
			printf("%c",32);
		}
		
	fputs ("force.pbm\n", image3);
	
		while (i != 4000)
		{
		o = fgetc(image);
		i++;
		
		if ( o == 10)
		{
			printf("\n");
			for (plototo = 0; plototo < 75; plototo++)
				{
				printf("%c",32);
				}
		}
		
		
		if (o == 48)
			{
				printf("%c",255);
			}
		else if ( o == 49)
			{
				printf("\033[01;33m%c",178);
			}
		}
	
		for (dio = 0; dio < row; dio++)
				{
					printf("\n");
				}
		fclose(image);
	}

	else if (pic == 4)  
		{
			image = fopen("/home/rasenyuki/plop/fusee.pbm","r"); // recuperation de la quatrieme image
				row = (54 - 20)/2;// calcul pour centrer l'image au lvl de la largeur
				col = (204 - 30)/2;// calcul pour centrer l'image au lvl de la longueur
	
				for (plop = 0; plop < row; plop++) // boucle pour decaler verticalement
				{
					printf("\n");
				}
				for (plup = 0; plup < 95; plup++)
				{
					printf("%c",32);
				}
			fputs ("fusee.pbm\n", image3);
	
				while (i != 4000)
				{
				o = fgetc(image);
				i++;
			
				if ( o == 10)
				{
					printf("\n");
					for (plototo = 0; plototo < 95; plototo++)
					{
					printf("%c",32);
					}
				}
		
		
				if (o == 48)
					{
						printf("%c",255);
					}
				else if ( o == 49)
					{
						printf("\033[22;31m%c",178);
					}
				}
				for (dio = 0; dio < row; dio++)
					{
				 		printf("\n");
					}
	
				fclose(image);
		}

	else if (pic == 5)
		{
				image = fopen("/home/rasenyuki/plop/clone.pbm","r"); // recuperation de la cinquieme image 
				row = (54 - 35)/2;// calcul pour centrer l'image au lvl de la largeur
				col = (204 - 58)/2;// calcul pour centrer l'image au lvl de la longueur
	
				for (plop = 0; plop < row; plop++) // boucle pour decaler verticalement
				{
					printf("\n");
				}
				for (plup = 0; plup < 90; plup++)
				{
					printf("%c",32);
				}
		fputs ("clone.pbm\n", image3);
	
				while (i != 4000)
				{
				o = fgetc(image);
				i++;
			
				if ( o == 10)
				{
					printf("\n");
					for (plototo = 0; plototo < 90; plototo++)
					{
					printf("%c",32);
					}
				}
		
		
				if (o == 48)
					{
						printf("%c",255);
					}
				else if ( o == 49)
					{
						printf("\033[01;30m%c",178);
					}
				}
				for (dio = 0; dio < row; dio++)
					{
				 		printf("\n");
					}
	
				fclose(image);
		}

	system("stty cbreak -echo");
	getchar();
	system("stty cooked echo");
	system("clear");
	fclose(image3);
	return 0;
	
}
