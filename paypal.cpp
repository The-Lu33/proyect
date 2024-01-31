#include <cmath>

class CommissionOfPaypal
{
public:
    float Enviar(float porcentajeComision, float comisionFija, float monto)
    {
        float crrValue = monto;
        float paypalCommissionPorcentaje = porcentajeComision / 100;
        float crrCommision = crrValue * paypalCommissionPorcentaje + comisionFija;
        float result = (monto - crrCommision);
        float redondeado = round(result * 100) / 100;
        return redondeado;
    }

    float Recibir(float porcentajeComision, float comisionFija, float monto)
    {
        float crrValue = monto;
        float paypalCommissionPorcentaje = porcentajeComision / 100;
        float crrCommision = (crrValue + comisionFija) / (1 - paypalCommissionPorcentaje);
        float result = (crrCommision);
        float redondeado = round(result * 100) / 100;
        return redondeado;
    }
};