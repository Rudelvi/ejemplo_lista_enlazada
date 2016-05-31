/*
 * Lista.h
 *
 *  Created on: May 30, 2016
 *      Author: Raydelto
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Elemento.h"

namespace ITLA
{

class Lista
{
	private:
		ITLA::Elemento* _primer;
		ITLA::Elemento* _ultimo;
	public:
		Lista();
		void agregar(Elemento* elemento);
		virtual ~Lista();

		ITLA::Elemento* getPrimer()  {
		return _primer;
	}
};

} /* namespace ITLA */

#endif /* LISTA_H_ */
