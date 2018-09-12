#include "Data.h"

	Data::Data()
    {
	x = 0 ;
	y = 0 ;
    }

	Data::Data(int a , float b)
    {
	x = a;
	y = b;
    }

	int Data::getx()
    {
	return x;
    }

	float Data::gety()
    {
	return y;
    }

	void Data::setx(int a)
    {
	x = a;
    }


	void Data::sety(float a)
    {

	y = a;
    }







