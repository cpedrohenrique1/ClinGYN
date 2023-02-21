#ifndef ARQUIVODADOS_H
#define ARQUIVODADOS_H
#include <iostream>
#include <fstream>
#include <QString>

class ArquivoDados
{
private:
    std::fstream arquivo;
public:
    ArquivoDados();
    void ArquivoCriar(QString);
};

#endif // ARQUIVODADOS_H
