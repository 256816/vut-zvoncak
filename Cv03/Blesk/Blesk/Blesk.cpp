// Blesk.cpp : Defines the entry point for the application.
//

#include "Blesk.h"

using namespace std;
/*
int main()
{
	//vzdálenost = zadaný čas * 340 m/s
	int v = 340;
	int t = 0;
	printf("Za kolik sekund se ozval hrom?\n");
	scanf("%d", &t);
	int l = v * t;
	printf("Blesk uderil %d metru od tebe\n",l);
	return 0;
}
*/

int main()
{
	// (a1b1 − a2b2) + i(a1b2 + a2b1)
	int a1 = 0;
	int a2 = 0;
	int b1 = 0;
	int b2 = 0;
	printf("Zadej realnou cast prvniho komplexniho cisla:\n");
	scanf("%d", &a1);
	printf("Zadej imaginarni cast prvniho komplexniho cisla:\n");
	scanf("%d", &a2);
	printf("Zadej realnou cast druheho komplexniho cisla:\n");
	scanf("%d", &b1);
	printf("Zadej imaginarni cast druheho komplexniho cisla:\n");
	scanf("%d", &b2);
	int r = (a1 * b1 - a2 * b2);
	int i = (a1 * b2 + a2 * b1);
	printf("Soucin komplexnich cisel je: (%d) + i(%d)\n", r,i);
	return 0;
}
