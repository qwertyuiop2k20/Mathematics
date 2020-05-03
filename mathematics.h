#ifndef _MATHEMATICS_H_
#define _MATHEMATICS_H_

#include <iostream>
using namespace std;
#include <math.h>

//константні велечини
#define MATH_Pi 3.1415926535897932385	//число Пі
#define MATH_e 2.71828182846	//число Ейлера

//-------класи-------
class Box	//клас прямокутний паралелепіпед
{
private:
	//властивості
	double width;	//ширина
	double height;	//довжина
	double depth;	//висота
public:
	Box();	//конструктор присвоєння по замовчуванню
	Box(double _w, double _h, double _d);	//конструктор присвоєння з трьома параметрами
	Box(double _len);	//конструктор присвоєння з одним параметром - куб
	Box(const Box& ob);	//конструктор копіювання
	
	//гетери і сетери (для зміни властивостей)
	double  get_width() { return width; }
	void set_width(double _w) { width = _w; }
	double get_height() { return height; }
	void set_height(double _h) { height = _h; }
	double get_depth() { return depth; }
	void set_depth(double _d) { depth = _d; }
	
	//оператори
	
	
	//методи
	double Objem();	//об'єм паралелепіпеда
	double Basis_area();	//площа основи
	double Square_full_area(); //площа повної поверхні паралелепіпеда
	double Square_side_area(); //площа бічної поверхні паралелепіпеда
	double Diagonal();	//довжина просторової діагоналі паралелепіпеда
	~Box();	//деструктор
};

class  Cone //клас Конус
{
private:
	//властивості
	double radius;	//радіус
	double h;	//висота
	double l;	//твірна
public:
	//конструктори
	Cone();
	Cone(double _r, double _h);
	Cone(const Cone& ob);
	
	//гетери і сетери (для зміни властивостей)
        double  get_radius() { return radius; }
        void set_radius(double _r) { radius = _r; l = sqrt(pow(radius, 2) + pow(h, 2)); }
        double get_h() { return h; }
        void set_h(double _h) { h = _h; l = sqrt(pow(radius, 2) + pow(h, 2)); }
        double get_l() { return l; }
        void set_l(double _l) { l = _l; h = sqrt(pow(l, 2) - pow(radius, 2)); }	// i think it's correct.
	
	//методи
	double S_osn();	//площа основи конуса
	double S_bichn();	//полоща бічної поверхні конуса
	double Objem();	//об'єм конуса
	~Cone();
};


/*class cylinder
{

};*/


#endif	//end mathematics.h
