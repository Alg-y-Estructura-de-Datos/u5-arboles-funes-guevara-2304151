/*Problema: En una tienda de electrónica, cada producto tiene un código único y quieres gestionar el inventario.
 * A medida que entran y salen productos, es necesario mantener el sistema actualizado.
 * ● Tarea: Inserta los productos con los siguientes códigos: 4001, 2002, 6003, 1500, 3500, 5000, 7000.
 * ● Desafío: Un cliente compró los productos con códigos 2002 y 6003, así que elimínalos del sistema.
 * Luego, un nuevo producto con el código 2500 llega al inventario.
 * Imprime el inventario actualizado y verifica si el código 4001 todavía está en el sistema.*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> inventario;

    inventario.put(4001);
    inventario.put(2002);
    inventario.put(6003);
    inventario.put(1500);
    inventario.put(3500);
    inventario.put(5000);
    inventario.put(7000);

    cout << "El inventario antes de las modificaciones:"<<endl;
    inventario.print();

    // Eliminar los codigos (prestado)
    inventario.remove(2002);
    inventario.remove(6003);
    std::cout << "Los productos con codigo 2002 y 6003 han sido eliminado. (vendidos)" << std::endl;

    // Imprimir la estructura del árbol después de la eliminación
    std::cout << "Estructura del inventario después de eliminar los productos 2002 y 6003:" << std::endl;
    inventario.print(); // Imprime el árbol en orden

    //agregar nvo codigo
    inventario.put(2500);
    cout << "inventario actualizado:" <<endl;
    inventario.print();

    // Buscar el producto con codigo 4001
    try {
        int codigo = inventario.search(4001);
        std::cout << "El producto con codigo 4001 está en el inventario: " << endl;
    } catch (int e) {
            std::cout << "El producto con codigo 4001 no está en el inventario:" << endl;
    }

    return 0;
}
