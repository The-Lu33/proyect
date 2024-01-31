// proyecto Luisangel Tapia
#include <iostream>
#include "paypal.cpp"
#include "conversion.cpp"
using namespace std;
int main()
{
    int op = 0;
    cout << "Bienvenido" << endl;
    cout << "[1] Calcular comisiones de PayPal" << endl;
    cout << "[2] Transformar unidades" << endl;
    cout << "[3] determinar el peso volumétrico de un paquete" << endl;
    cout << "Elija una opción: ";
    cin >> op;
    while (op != 0)
    {
        if (op == 1)
        {
            CommissionOfPaypal calcularComision;
            float porcentajeComision = 5.4f;
            float comisionFija = 0.30f;
            float monto = 0;
            char selectMethod;
            cout << "Bienvenido a su calculadora de PayPal" << endl;
            cout << "Bienvenido" << endl;
            cout << "Porcentaje " << porcentajeComision << "% comision fija " << comisionFija << "$ \n";
            cout << "Por favor seleccionar el metodo de calculo, \n si desea Calacular para Recivir 'r', \n Calcular para Enviar 'e' \n";
            cin >> selectMethod;
            if (selectMethod == 'e')
            {
                cout << "por favor indique el monto a calcular: ";
                cin >> monto;
                float result = calcularComision.Enviar(porcentajeComision, comisionFija, monto);
                cout << "si envía: " << monto << "$"
                     << " recibirá: " << result << "$"
                     << " comision: " << result - monto << "$"
                     << "\n";
            }
            else if (selectMethod == 'r')
            {
                cout << "por favor indique el monto a calcular: ";
                cin >> monto;
                float result = calcularComision.Recibir(porcentajeComision, comisionFija, monto);
                cout << "si desea recibir: " << monto << "$"
                     << " debe enviar: " << result << "$"
                     << " comision: " << monto - result << "$"
                     << "\n";
            }

            char yn;
            cout << "¿Desea hacer un nuevo calculo? \n";
            cout << "Si (s) o No (n): ";
            cin >> yn;
            if (yn == 's')
            {
                op = 1;
            }
            else
            {
                op = 0;
            }
        }
        else if (op == 2)
        {
            Conversion conversion;

            string unidadOrigen;
            string unidadDestino;
            float cantidad;
            cout << "Ingrese la unidad de origen (mm, cm, m, km): ";
            cin >> unidadOrigen;

            //  la unidad de destino.
            cout << "Ingrese la unidad de destino (mm, cm, m, km): ";
            cin >> unidadDestino;

            //  la cantidad a convertir.
            cout << "Ingrese la cantidad a convertir: ";
            cin >> cantidad;
            string result = conversion.convertir(unidadOrigen, unidadDestino, cantidad);
            cout << result;
        }
        else if (op == 3)
        {
            cout << "calcular volumen de un paquete";
        }
    }

    main();
    return 0;
}