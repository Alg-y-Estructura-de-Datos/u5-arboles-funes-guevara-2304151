#include <iostream>
#include "Arbol/ArbolBinario.h"

using namespace std;

void buscar(ArbolBinario<int> gimnasio, int cod);

int main() {
    int op, cod;
    ArbolBinario<int> gimnasio;

    do {
        cout << "Ingrese el valor segun lo que desea hacer\n";
        cout << "1 - Inscribir un nuevo socio\n";
        cout << "2 - Dar de baja un socio\n";
        cout << "3 - Buscar socios activos\n";
        cout << "4 - Salir del sistema\n";
        cin >> op;
        switch (op) {
            case 1:
                cout << "ingrese el codigo de socio\n";
                cin >> cod;
                gimnasio.put(cod);
                gimnasio.print();
                break;
            case 2:
                cout << "ingrese el codigo de socio\n";
                cin >> cod;
                gimnasio.remove(cod);
                cout << "lista de socios actualizada\n";
                gimnasio.print();
                break;
            case 3:
                cout << "ingrese el codigo que desea buscar\n";
                cin >> cod;
                buscar(gimnasio, cod);
                gimnasio.print();
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

void buscar(ArbolBinario<int> gimnasio, int cod) {
    try {
        int codigo = gimnasio.search(cod);
        std::cout << "El socio con codigo" << cod << "está en el listado: " << endl;
    } catch (int e) {
        std::cout << "El socio con codigo" << cod << " no está en el listado:" << endl;
    }
}




