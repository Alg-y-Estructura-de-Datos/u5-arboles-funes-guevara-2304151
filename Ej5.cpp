/*Problema: Trabajas en una empresa de logística y debes gestionar los paquetes que llegan y se entregan a través de un sistema.
 * Cada paquete tiene un número de seguimiento único. Tu sistema debe permitir la entrada de nuevos paquetes,
 * la entrega (eliminación) de paquetes, y la verificación de los que siguen en tránsito.
 * ● Tarea: Inserta los paquetes con los números de seguimiento: 1001, 5002, 3003, 2004, 4500, 7005, 8006.
 * ● Desafío: Los paquetes con los números de seguimiento 2004 y 4500 fueron entregados, así que elimínalos.
 * Luego, un nuevo paquete con el número 3500 llega al sistema.
    Verifica si el paquete con el número 1001 sigue en tránsito e imprime la lista de paquetes restantes.*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

void buscar(ArbolBinario<int> paquetes, int paq);

int main(){
    int op, paq;
    ArbolBinario<int> paquetes;

    do {
        cout << "Ingrese el valor segun lo que desea hacer\n";
        cout << "1 - Ingresar un nuevo paquete\n";
        cout << "2 - Eliminar un paquete\n";
        cout << "3 - Buscar paquete\n";
        cout << "4 - Salir del sistema\n";
        cin >> op;
        switch (op) {
            case 1:
                cout << "ingrese el codigo de producto\n";
                cin >> paq;
                paquetes.put(paq);
                paquetes.print();
                break;
            case 2:
                cout << "ingrese el codigo de producto\n";
                cin >> paq;
                paquetes.remove(paq);
                cout << "lista de paquetes actualizada\n";
                paquetes.print();
                break;
            case 3:
                cout << "ingrese el codigo que desea buscar\n";
                cin >> paq;
                buscar(paquetes, paq);
                paquetes.print();
                break;
            case 4:
                exit(-1);
                break;
            default:
                cout << "ingrese el dato nuevamente\n";
                break;
        }
    } while (op != 4);

    return 0;
}

void buscar(ArbolBinario<int> paquetes, int paq) {
    try {
        int reserva = paquetes.search(paq);
        std::cout << "La mesa" << paq << "esta reservada: " << endl;
    } catch (int e) {
        std::cout << "La mesa" << paq << " no esta reservada:" << endl;
    }
}