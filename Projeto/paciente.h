#ifndef PACIENTE_H
#define PACIENTE_H
#include <QString>

namespace PC
{
    class Paciente
    {
    private:
        QString nomeCompleto;
        int peso;
        float altura;
        QString sexo;
    public:
            Paciente();
            Paciente(QString nomeCompleto, int peso, float altura, QString sexo);
            float calcularIMC()const;
            QString calcularFaixaRisco()const;
            float calcularPesoIdeal()const;
    };
}

#endif // PACIENTE_H
