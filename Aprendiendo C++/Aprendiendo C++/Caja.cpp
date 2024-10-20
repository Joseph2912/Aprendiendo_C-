#include "Caja.h"
#include "iostream"
Caja::Caja(int nuevoLargo, int nuevoAncho, int nuevoAlto) {

	largo = nuevoLargo;
	ancho = nuevoAncho;
	alto = nuevoAlto;
}
void Caja::verMedidas() {
	std::cout << "Largo: " << largo << ", Alto: " << alto << ", Ancho: " << ancho;
}