#include<stdio.h>
#include<stdlib.h>

int sommeTab(int tab[], int tailleTab);
double moyenneTab(int tab[], int tailleTab);

int main(int argc, char* argv[])
{
	int tab[4] = {23, 34, 58, 23};
	int resultatSomme = sommeTab(tab, 4);
	double resultatMoyenne = moyenneTab(tab, 4);
	printf("la somme des valeurs du tableau tab est %d\n", resultatSomme);
	printf("la moyenne des valeurs du tableau est %f\n", resultatMoyenne);
	return 0;
}

int sommeTab(int tab[], int tailleTab)
{
	int somme = 0, i = 0;
	for(i = 0; i < tailleTab; i++)
	{
		somme += tab[i];
	}
	return somme;
}

double moyenneTab(int tab[], int tailleTab)
{
	int somme = 0, i = 0, moyenne = 0;
	for(i = 0; i < tailleTab; i++)
	{
		somme += tab[i];
	}
	return (double)somme/(double)tailleTab;
}
