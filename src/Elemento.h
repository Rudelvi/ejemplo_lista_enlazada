/*
 * Elemento.h
 *
 *  Created on: May 30, 2016
 *      Author: Raydelto
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_
#include <string>

namespace ITLA
{

	class Elemento
	{
		private:
			std::string _nombre;
			Elemento* _siguiente;
		public:
			Elemento(std::string nombre);
			virtual ~Elemento();

	const std::string& getNombre() const {
		return _nombre;
	}

	void setNombre(const std::string& nombre) {
		_nombre = nombre;
	}

	Elemento* getSiguiente()  {
		return _siguiente;
	}

		friend class Lista;
	};

}

#endif
