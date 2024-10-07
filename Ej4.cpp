/*Problema: Un restaurante tiene un sistema de reservas donde cada mesa tiene un número específico.
A medida que los clientes reservan o cancelan mesas, el sistema debe mantenerse actualizado.
 ● Tarea: Agrega las reservas de las siguientes mesas: 15, 10, 20, 5, 12, 18, 25.
 ● Desafío: Dos clientes cancelaron sus reservas en las mesas 10 y 20, así que elimínalas del sistema.
Luego, un nuevo cliente reserva la mesa 13.Verifica si la mesa 12 aún está reservada e imprime la lista actualizada de mesas reservadas.*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

void buscar(ArbolBinario<int> mesas, int mesa);
int main(){

    ArbolBinario<int> mesas;

    mesas.put(15);
    mesas.put(10);
    mesas.put(20);
    mesas.put(5);
    mesas.put(12);
    mesas.put(18);
    mesas.put(25);

    cout << "Las mesas reservadas son:\n";
    mesas.print();

    cout << "Se cancelaron las reservas 10 y 20, las reservadas actuales son:\n";
    mesas.remove(10);
    mesas.remove(20);
    mesas.print();

    cout << "Se reserva una nueva mesa, se busca si una esta reservada\n";
    mesas.put(13);
    buscar(mesas,12);

    cout << "Mesas reservadas actualmente:\n";
    mesas.print();
    return 0;
}

void buscar(ArbolBinario<int> mesas, int mesa) {
    try {
        int reserva = mesas.search(mesa);
        std::cout << "La mesa" << mesa << "esta reservada: " << endl;
    } catch (int e) {
        std::cout << "La mesa" << mesa << " no esta reservada:" << endl;
    }
}