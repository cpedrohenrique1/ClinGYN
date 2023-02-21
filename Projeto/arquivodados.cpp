#include "arquivodados.h"

ArquivoDados::ArquivoDados()
{
    arquivo.open("dados.txt", std::ios::in | std::ios::out | std::ios::app);
    arquivo.close();
}

void ArquivoDados::ArquivoCriar(QString varEntrada){
    arquivo.open("dados.txt", std::ios::in | std::ios::out | std::ios::app);
    if (arquivo.is_open()){
        arquivo << varEntrada.toStdString() << '\n';
        arquivo.close();
    }else{
        throw QString("Arquivo nao foi gerado");
    }
}
