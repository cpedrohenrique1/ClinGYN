#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BotaoExecutar_clicked()
{
    try {
        PC::Paciente pessoa;
        pessoa.setNome(ui->nomeCompletoInput->text());
        pessoa.setPeso(ui->pesoInput->text().toInt());
        pessoa.setAltura(ui->alturaInput->text().toFloat());
        pessoa.setSexo(ui->SexoInput->currentText());

        QString saida = "Clinica Sao Jose \n";
        saida += "Dados do paciente \n";
        saida += "Nome: " + pessoa.getNome() + "\n";
        saida += "Peso: " + QString::number(pessoa.getPeso()) + "\n";
        saida += "Altura: " + QString::number(pessoa.getAltura()) + "\n";
        saida += "Sexo: " + pessoa.getSexo() + "\n";
        saida += "IMC: " + QString::number(pessoa.calcularIMC()) + "\n";
        saida += "Faixa de peso: " + pessoa.calcularFaixaRisco() + "\n";
        //saida += "Peso ideal: " + QString::number(pessoa.calcularPesoIdeal() + "\n";
        saida += "O seu peso ideal deve estar entre " + pessoa.calcularPesoIdeal() + "\n";
        ui->SaidaTexto->setText(saida);
        ui->nomeCompletoInput->clear();
        ui->pesoInput->clear();
        ui->alturaInput->clear();
    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO ", erro);
    }
}

