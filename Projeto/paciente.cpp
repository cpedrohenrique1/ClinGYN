#include "paciente.h"
namespace PC{
    Paciente::Paciente():
        nomeCompleto(""),
        peso(0),
        altura(0),
        sexo("")
    {

    }

    Paciente::Paciente(QString nomeCompleto, int peso, float altura, QString sexo):
        nomeCompleto(""),
        peso(0),
        altura(0),
        sexo("")
    {
        this->nomeCompleto = nomeCompleto;
        if (peso <= 0){
            throw QString("Erro: Peso menor ou igual a 0");
        }
        this->peso = peso;
        if (altura <= 0){
            throw QString("Erro: Altura menor ou igual a 0");
        }
        this->altura = altura;
        this->sexo = sexo;
    }
    float Paciente::calcularIMC()const{
        return (peso/(altura*altura));
    }
    QString Paciente::calcularFaixaRisco()const{
        float imc = calcularIMC();
        if (imc < 20)
            return "abaixo do peso ideal";
        if (imc <= 25)
            return "peso normal";
        if (imc <= 30)
            return "excesso de peso";
        if (imc <= 35)
            return "obesidade";
        return "obesidade morbida";
    }
    float Paciente::calcularPesoIdeal()const{
        return (12.5);
    }
}
