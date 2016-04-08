/*
Apellido y Nombre: Marin Facundo
Curso: K1051
Legajo: 158.829-1
Fecha: 8/04/2016
*/
#include<iostream>

int main() {
	int a,b;
	std::cout << "Ingrese el valor de A: ";
	std::cin >> a;
	std::cout << "Ingrese el valor de B: ";
	std::cin >> b;
	if (a==b) {
		std::cout << "A y B Son Iguales";
	} else {
		if (a>b) {
			std::cout << "el mayor es A: "; 
			std::cout <<a;
		} else {
			std::cout << "el mayor es B: "; 
			std::cout << b;
		}
	}
}


