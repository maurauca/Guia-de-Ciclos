/*“El náufrago satisfecho” ofrece hamburguesas sencillas (S), dobles (D) y
triples (T), las cuales tienen un costo de $20, $25 y $28 respectivamente. La empresa
acepta tarjetas de crédito con un cargo de 5 % sobre la compra. Suponiendo que los
clientes adquieren N hamburguesas, las cuales pueden ser de diferente tipo, realice un
algoritmo para determinar cuánto deben pagar. Utilice el ciclo apropiado. Considere la
opción salir, la cual retorna al menú principal.*/


#include <iostream>
using namespace std;

int main() {
    int op, num;
    float costo, total, totalConCargo, cargo;
    char formaDePago;
    
    do {
        cout << "==============MENU DE RESTAURANTE EL NAUFRAGO SATISFECHO================" << endl;
        cout << "1. Hamburguesa sencilla (S) - $20" << endl;
        cout << "2. Hamburguesa doble (D) - $25" << endl;
        cout << "3. Hamburguesa triple (T) - $28" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion: " << endl;
        cin >> op;
        
        switch (op) {
            case 1:
                costo = 20;
                break;
            case 2:
                costo = 25;
                break;
            case 3:
                costo = 28;
                break;
            case 4:
                cout << "Gracias por su visita" << endl;
                return 0;
            default:
                cout << "Opcion invalida" << endl;
                continue;
        }
        
        cout << "Ingrese la cantidad de hamburguesas a comprar: ";
        cin >> num;
        
        total = num * costo;
        
        cout << "Seleccione forma de pago (E = Efectivo, T = Tarjeta, por favor, cuide sus mayusculas): ";
        cin >> formaDePago;
        
        if (formaDePago == 'T') {
            cargo = total * 0.05;
            totalConCargo = total + cargo;
            cout << "El total a pagar con tarjeta es: $" << totalConCargo << endl;
        }
        else if (formaDePago == 'E') {
            cout << "El total a pagar es: $" << total << endl;
        }
        else {
            cout << "Forma de pago invalida" << endl;
        }
        
    } while (op != 4);
    
    return 0;
}
