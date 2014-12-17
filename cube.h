#ifndef _CUBE_H_
#define _CUBE_H_

#include "Matrix4.h"
#include "Geode.h"
#include "window.h"
#include "Header.h"

class Cube : public Geode
{
	Color color;
	public:
		double sideLen;
		Cube();   // Constructor
		Cube(Color color);
		~Cube(){};
		void Cube::render();
};

#endif

