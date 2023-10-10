// Cv04.cpp : Defines the entry point for the application.
//

#include "Cv04.h"

using namespace std;

int jePrestupny(int rok) {

	if (rok % 100 != 0 && rok % 4 == 0 || rok % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//1000, 2000, 2002, 2012, 2022 a 2200
int main()
{
	int rok = 0;
	int vysledek = jePrestupny(rok);

	rok = 1000;
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("%d\t%d\n", rok, vysledek);

	rok = 2000;
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("%d\t%d\n", rok, vysledek);

	rok = 2002;
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("%d\t%d\n", rok, vysledek);

	rok = 2012;
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("%d\t%d\n", rok, vysledek);

	rok = 2022;
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("%d\t%d\n", rok, vysledek);

	rok = 2200;
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("%d\t%d\n", rok, vysledek);

	scanf("%d", &rok);
	jePrestupny(rok);
	vysledek = jePrestupny(rok);
	printf("\t%d", vysledek);
	
}


