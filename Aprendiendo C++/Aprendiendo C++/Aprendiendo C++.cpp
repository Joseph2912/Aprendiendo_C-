
#include <iostream>
#include <string>
#include "Caja.h"


// Creando una funcion para sumar ---------------------------------

void Operaciones( int num1 , int num2) {

    int resultado = num1 + num2;
    
    //std::cout << "Esta es mi primera funcion en C++ " + std::to_string(resultado) + "\n";
}

// En este caso lo que estoy haciendo es crear una funcion que me debe retornar un numero entero el cual voy a asignar a una
// variableSumar para poder usar su resultado. 

int Sumar( int numero1 , int numero2) {
        
    return numero1 + numero2;

}

int SumarPuntero(int *prueba) {
    *prueba = *prueba + 1;
    std::cout << "Esto es en la funcion SumarPrueba: " << *prueba << "\n";
    return *prueba;
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

    std::string ArregloNombres[] = { "Pepe", "Eduardo", "Maria", "Juan", "Joseph", "Abuela", "Pedro" };
    //std::cout << ArregloNombres[2];  // Esto imprimir� "Maria"

    // Como recorrer Arreglos en C++ -----------------------------

    int longitudArray = sizeof(ArregloNombres) / sizeof(ArregloNombres[0]);

    for (int i = 0; i < longitudArray; i++) {
        /*  std::cout << ArregloNombres[i] << "\n";*/
    }
    // Otra forma de recorrer arreglos  -----------------------------

    for (std::string variable : ArregloNombres) {
        //std::cout << variable << "\n";
    }

    // Aprendiendo punteros  -----------------------------

    int variable = 4;
    int* punteroVariable = &variable;

    /*  std::cout << "El valor de variable es: " << + variable << "\n";
      std::cout << "La direccion de punteroVariable es: " <<  punteroVariable << "\n";
      std::cout << "El valor de punteroVariable es: " <<  *punteroVariable << "\n";*/

      // Funcion con puntero  -----------------------------

    int prueba = 6;

    //std::cout << "El valor de prueba es : " << prueba << "\n";
    //SumarPuntero(&prueba);
    //std::cout << "Esto es despues de la funcion SumarPrueba: " << prueba << "\n";

    // Llamando a la clase caja  -----------------------------
    //Esta parte es para ver las variables de una clase cuando son publicas

 /*   Caja unaCaja;
    unaCaja.alto = 4;
    unaCaja.ancho = 78;
    unaCaja.largo = 6;

    std::cout << "Largo: " << unaCaja.largo << ", Alto: " << unaCaja.alto << ", Ancho: " << unaCaja.ancho;*/

    Caja unaCaja(5, 9, 78);

    unaCaja.verMedidas();

    Caja* pCaja = &unaCaja;
    pCaja->verMedidas();


//Actor: Es como una cosa o un objeto en el juego, pero no tiene vida propia. Imag�nate una piedra o un �rbol. No puede moverse solo, pero puedes decirle d�nde colocarlo o qu� hacer, como cambiar de color o girar. Los "Actors" son b�sicos, como bloques que puedes usar para construir el mundo.
//
//Pawn: Este es un juguete que ya puede moverse si alguien lo controla, como un coche a control remoto. Pero por s� solo no hace nada, necesita que alguien lo controle. Puede ser un jugador o una inteligencia artificial quien lo maneje. Los "Pawns" son los personajes o veh�culos que puedes controlar.
//
//Character: Este es como un mu�eco con superpoderes. No solo se puede mover si lo controlas, sino que adem�s sabe c�mo caminar, correr y saltar. �Es un "Pawn" con habilidades especiales! Es ideal para hacer personajes del juego que se comporten como humanos o animales, que necesitan moverse y hacer acciones complejas.
//
//PlayerController : Imagina que es el control de un videojuego, como un mando de consola.No es un personaje, pero es lo que te conecta a un personaje o a lo que controlas en el juego.El PlayerController es lo que recibe las �rdenes cuando presionas botones, mueves el joystick, o haces clic, y luego le dice al Pawn o al Character qu� hacer.
//
//GameMode : Este es como el maestro del juego.Decide las reglas.Piensa en un juego de mesa donde alguien explica c�mo jugar, qu� se puede y qu� no se puede hacer.El GameMode define qui�n gana, qu� personajes puedes usar, y c�mo empieza o termina la partida.Es el encargado de que el juego funcione como debe ser.
//
//GameState : Es como un cuaderno donde se escribe lo que est� pasando en el juego en todo momento.Si alguien necesita saber cu�ntos puntos tiene cada jugador o qui�n est� ganando, el GameState tiene esa informaci�n guardada.�Es el libro de r�cords del juego!
//
//HUD : Es lo que ves en la pantalla que te da informaci�n, como las vidas que te quedan o la puntuaci�n.Imagina que est�s jugando y tienes una peque�a pantalla donde te dicen cu�nta energ�a te queda.Eso es el HUD(Heads - Up Display).No afecta el juego directamente, pero te dice cosas importantes mientras juegas.
//
//Camera : Esta es la clase que controla desde d�nde ves el juego.Es como los ojos del jugador.Puedes hacer que la c�mara vea desde arriba, desde los ojos del personaje o desde cualquier �ngulo.Sin la Camera, no sabr�as qu� est� pasando en el mundo del juego.
//
//AIController : Recuerda que te dije que los Pawns necesitan que alguien los controle, �verdad ? Bueno, si no es un jugador, puede ser la computadora quien lo haga.El AIController es como un cerebro para los personajes que no son jugadores.Controla a los enemigos, animales o cualquier cosa que se mueva por s� misma en el juego.
//
//SceneComponent : Este es como una pieza que puedes a�adir a otros objetos para darle m�s caracter�sticas.Imagina que tienes un mu�eco y le a�ades una linterna o una c�mara en la cabeza.El SceneComponent es como una parte extra que le puedes poner a tus objetos, y puede ser usada para cosas como luces, sonidos o movimiento.
//
//StaticMesh : Piensa en esto como un bloque de construcci�n o una pieza de LEGO, pero que no se mueve por s� sola.Un StaticMesh es cualquier objeto visible en el juego que tiene una forma definida, como una pared, una silla o una roca.No se mueve ni cambia, solo est� ah� para formar el mundo.
//
//SkeletalMesh : Esto es como un mu�eco que tiene un esqueleto dentro.�Sabes los juguetes que tienen partes que se mueven, como brazos o piernas ? Un SkeletalMesh tiene huesos que puedes animar para que haga movimientos complejos, como caminar, bailar o levantar objetos.Es perfecto para personajes o criaturas.
//
//SpringArm : Imagina que es un brazo invisible que sostiene la c�mara o algo que quieres que siga al personaje, como un dron.El SpringArm ayuda a la c�mara o a otros objetos a mantenerse a cierta distancia del personaje, movi�ndose suavemente si el personaje se desplaza r�pido o gira.
//
//ActorComponent : Es como un peque�o motor que puedes colocar en otros objetos para darles funciones adicionales.Por s� solo, no se ve ni hace nada, pero si lo a�ades a un Actor, le da habilidades, como ser destruido, moverse, o tener vida.Piensa en esto como un "superpoder" que puedes darle a los objetos.
//
//Volume : Imagina que es una caja invisible en el mundo del juego, y cuando algo entra en esa caja, ocurre algo especial.Por ejemplo, puedes crear un Volume para que sea una zona donde el personaje pierde energ�a, como si entrara en un pantano, o donde cambia de nivel.Se usa para delimitar �reas especiales.
//
//Widget : Este es como una ventana o panel que aparece en la pantalla para interactuar con el jugador, como un men� o un bot�n para empezar el juego.Si alguna vez ves una pantalla donde puedes seleccionar opciones, eso es un Widget.Es lo que permite que los jugadores toquen botones o vean men�s en el juego.
}

