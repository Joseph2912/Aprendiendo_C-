
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
        
    //int num = 2;
    //float real = 2.3;
    //double real2 = 5.4;
    //std::string cadena = "Hola mundo!";
    //bool booleano = true;

    //std::cout << "Este es mi primer intento \n";
    //std::cout << "Este es mi segundo intento " + std::to_string(num) + "\n";
    //Operaciones( 4 , 5);

    //int variableSumar = Sumar(6 , 9);
    //std::cout << "Esta es mi funcion que suma y me retorna un entero " + std::to_string(variableSumar) + "\n";


    // Aprendiendo condicionales en C++ -----------------------------

    int edad = 18;

    if (edad >= 18) {
        //std::cout << "Eres mayor de edad \n";
    }
    else
    {
        //std::cout << "Eres menor de edad \n";
    }

    // Aprendiendo condicionales y Operadores logicos en C++ -----------------------------

    int estatura = 18;
    bool feliz = false;

    if (estatura >= 18 && feliz == true) {
        //std::cout << "Es feliz \n";
    }
    else
    {
        //std::cout << "No es feliz \n";
    }

    // Ciclos while, for y Do while en C++ -----------------------------

    int i = 0;

    while (i <= 200) {
            
        //std::cout << i << "\n";
        i++;

    }

    // Ciclos while, for y Do while en C++ -----------------------------

    do {
        //std::cout << i << "\n";
        i++;
    } while (i <= 200);
        
    // Ciclos while, for y Do while en C++ -----------------------------

    for (int i = 0; i <= 200; i++)
    {
        //std::cout << i << "\n";
    }

    // Arreglos en C++ -----------------------------

    int Arreglo1[5] = { 1, 2, 3, 4, 5 };
    int Arreglo2[] = { 1, 2, 3, 4, 5, 6, 7 };

    std::string ArregloNombres[] = { "Pepe", "Eduardo", "Maria", "Juan", "Joseph", "Abuela", "Pedro"};
    //std::cout << ArregloNombres[2];  // Esto imprimirá "Maria"

    // Como recorrer Arreglos en C++ -----------------------------

    int longitudArray = sizeof(ArregloNombres) / sizeof(ArregloNombres[0]);
    
    for (int i = 0; i < longitudArray; i++) {
      /*  std::cout << ArregloNombres[i] << "\n";*/
    }
    // Otra forma de recorrer arreglos  -----------------------------
    
    for (std::string variable : ArregloNombres) {
        std::cout << variable << "\n";
    }
   
}

