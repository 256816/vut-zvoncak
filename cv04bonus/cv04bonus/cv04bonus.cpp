// cv04bonus.cpp : Defines the entry point for the application.
//

#include "cv04bonus.h"

using namespace std;


int fakt(int cislo)
{
	int x = cislo;
	for (int i = cislo - 1; i > 1; i--)
	{
		x *= i;
	}
	return x;
}


int main()
{
	int cislo;
	scanf("%d", &cislo);
	int vysledek = fakt(cislo);
	printf("%d", vysledek);

}


