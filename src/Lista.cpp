/*
 * Lista.cpp
 *
 *  Created on: May 30, 2016
 *      Author: Raydelto
 */

#include "Lista.h"

namespace ITLA {

Lista::Lista()  : _primer(NULL) , _ultimo(NULL)
{


}

void Lista::agregar(Elemento* elemento)
{
	if(_primer == NULL) //verificando si la lista est� vac�a
	{
		_primer = elemento;
		_ultimo = elemento;
	}else{ //Si la lista no est� vac�a
		_ultimo -> _siguiente = elemento;
		_ultimo = elemento;
	}
}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
}

} /* namespace ITLA */
