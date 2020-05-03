#include "mathematics.h"

//реалізація класу Box -- прямокутний паралелепіпед
Box::Box() { width = -1; height = -1; depth = -1; }
Box::Box(double _w, double _h, double _d) { width = _w; height = _h; depth = _d; }
Box::Box(double _len) { width = height = depth = _len; }	//куб
Box::Box(const Box& ob) { width = ob.width; height = ob.height; depth = ob.depth; }

double Box::Objem() { return width * height * depth; }
double Box::Basis_area(){ return width * height; }
double Box::Square_full_area() { return (width*height + height*depth + depth*width) * 2.0; }
double Box::Square_side_area() { return 2.0 * depth * (width + height); }
double Box::Diagonal() { return sqrt((pow(width,2) + pow(height,2) + pow(depth,2))); }

Box::~Box() { }
//-------------------------------------------------
//реалізація класу Cone -- конус ------------------
Cone::Cone() { radius = -1; h = -1; l = -1; }
Cone::Cone(double _r, double _h) {
	radius = _r; h = _h;
	l = sqrt(pow(_r, 2) + pow(_h, 2));
}
Cone::Cone(const Cone& ob) { radius = ob.radius; h = ob.h; l = ob.l; }

double Cone::S_osn() { return MATH_Pi * pow(radius, 2); }		// pi * r^2
double Cone::S_bichn() { return MATH_Pi * radius * l; }			// pi * r * l
double Cone::Objem() { return ((MATH_Pi * pow(radius, 2)) / 3.0) * h; }	// 1/3 * pi * r^2 * h

Cone::~Cone() { }
//-------------------------------------------------
