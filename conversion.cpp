#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Conversion
{
public:
    string convertir(string unidadOrigen, string unidadDestino, float cantidad)
    {

        int result;

        // Realizamos la conversión de unidades.
        if (unidadOrigen == "mm" && unidadDestino == "cm")
        {
            result = cantidad / 10;
        }
        else if (unidadOrigen == "cm" && unidadDestino == "mm")
        {
            result = cantidad * 10;
        }
        else if (unidadOrigen == "mm" && unidadDestino == "m")
        {
            result = cantidad / 1000;
        }
        else if (unidadOrigen == "m" && unidadDestino == "mm")
        {
            result = cantidad * 1000;
        }
        else if (unidadOrigen == "cm" && unidadDestino == "m")
        {
            result = cantidad / 100;
        }
        else if (unidadOrigen == "m" && unidadDestino == "cm")
        {
            result = cantidad * 100;
        }
        else if (unidadOrigen == "km" && unidadDestino == "m")
        {
            result = cantidad * 1000;
        }
        else if (unidadOrigen == "m" && unidadDestino == "km")
        {
            result = cantidad / 1000;
        }
        else
        {
            string error = "Las unidades ingresadas no son válidas. \n";
            return error;
        }

        string cantidadString = to_string(cantidad);
        string res = cantidadString + " " + unidadOrigen + " equivalen a " + to_string(round(result * 100) / 100) + " " + unidadDestino + "\n";
        return res;
    }
};
