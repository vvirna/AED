#include<cassert>
#include<string>
using namespace std::literals; //permite usar el sufijo 's'

int main()
{
	/*
	prueba de tipo de dato bool
	*/

	assert(true);
	assert(false == false);
	assert(true != false);
	assert(not false);
	assert(false or true and false == false);
	assert((false or true) and false == false);
	assert(true or true and false); //demostramos que c++ le da prioridad a la operación 'and' sobre 'or'

	/*
	prueba tipo de dato char
	*/

	assert(255 == 255);
	assert('A' != 'a');
	assert('A' == 65);
	assert('A' + 2 == 67);
	assert('D' > 'A');
	assert('A' + 2 == 'C');

	/*
	prueba tipo de dato unsigned
	*/

	assert(2u == 1u + 1u);
	assert(3u != 459u);
	assert(4u*2u < 9u);

	/*
	prueba tipo de dato int
	*/

	assert(-4 == -2 - 2);
	assert(-9 == -15 + 6);
	assert(5000 / 10 == 500);
	assert(45 % 2 == 1);

	/*
	prueba de tipo de dato double
	*/

	assert(2.0 == 1.0 + 1.0);
	assert(0.1 == 1.0 / 10.0);
	assert(1. == 1.0);
	assert(2.0 == 1.0 * 2);
	assert(2.0 < 1.0 * 3);
	assert(2. < 1.0 + 0.5);
	assert(2 == 1 + 1.0);

	/*
	prueba de tipo de dato string
	*/

	assert("Perez Calo"s == "Perez "s + "Calo"s);
	assert("virna"s.length() == 5);
	assert("Perez"s.length() > "Calo"s.length());
	assert("virna"s != "carlos"s);
}
