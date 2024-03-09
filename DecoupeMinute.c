#include<stdio.h>
#include<stdlib.h>

void decoupeMinute(int *PointeurH, int *PointeurM);

int main(int argc, char *argv[])
{
	int heures = 0, minutes = 0; //Je créer les variable heures et minutes.
	printf("Combien de minutes souhaitez vous découper ?\n"); // J'affiche une question pour guider l'user.
	scanf("%d", &minutes); // Je demande à l'user d'entrer un nombre qui sera stocker dans la variable "minutes" à l'aide de &, scanf retrouve l'adresse et modifi la valeur à l'adresse.

	if (minutes >= 60)
	{	
		printf("ça va ça fait moins d'une heure\n");
	}
	else
	{
		printf("ah ça fait plus d'une heure\n");
	}

	decoupeMinute(&heures, &minutes);
	printf("ça fait %d heures et %d minutes\n", heures, minutes);

	return 0;
}

void decoupeMinute(int *PointeurH, int *Pointeur)
{
	*PointeurH = *PointeurM / 60; // Je divise la valeur contenue dans la variable à l'adresse pointer par pointeurM (c'est à dire minutes) et je range le résultat dans la variable heures
	*PointeurM = *PointeurM % 60; // *avant j'ai diviser minutes par 60, ici je note ce qu'il reste grace à %, et je le stock dans la variable minutes pointer
}
