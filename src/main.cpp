//============================================================================
// Name        : Lista.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Lista.h"
using namespace ITLA;
int main()
{
	Elemento* cancion1 = new Elemento("La Shanty");
	Elemento* cancion2 = new Elemento("Penelope");
	Elemento* cancion3 = new Elemento("Dos mas dos");
	Elemento* cancion4 = new Elemento("Me fui en segueta");
	Lista* lista = new Lista();
	lista -> agregar(cancion1);
	lista -> agregar(cancion2);
	lista -> agregar(cancion3);
	lista -> agregar(cancion4);

	Elemento* i = lista -> getPrimer();
	while(i != NULL){
		cout<< i -> getNombre() << endl;
		i = i -> getSiguiente();
	}





	return 0;
}
