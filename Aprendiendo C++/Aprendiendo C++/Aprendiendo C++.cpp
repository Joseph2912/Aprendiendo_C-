
#include <iostream>
#include <string>


// Creando una funcion para sumar ---------------------------------

void Operaciones( int num1 , int num2) {

    int resultado = num1 + num2;
    
    std::cout << "Esta es mi primera funcion en C++ " + std::to_string(resultado) + "\n";
}

// En este caso lo que estoy haciendo es crear una funcion que me debe retornar un numero entero el cual voy a asignar a una
// variableSumar para poder usar su resultado. 

int Sumar( int numero1 , int numero2) {
        
    return numero1 + numero2;

}

int main()
{
        
    int num = 2;
    float real = 2.3;
    double real2 = 5.4;
    std::string cadena = "Hola mundo!";
    bool booleano = true;

    std::cout << "Este es mi primer intento \n";
    std::cout << "Este es mi segundo intento " + std::to_string(num) + "\n";
    Operaciones( 4 , 5);

    int variableSumar = Sumar(6 , 9);
    std::cout << "Esta es mi funcion que suma y me retorna un entero " + std::to_string(variableSumar) + "\n";

}

