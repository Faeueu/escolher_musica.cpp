#include <iostream>
#include <string>
using namespace std;

string tocarMusica(int soma) {
    switch (soma) {
        case 0:
            return "MEIO DIA";
        case 1:
            return "ROCK NO SERTAO";
        case 2:
            return "SAGA DE UM VAQUEIRO";
        case 3:
            return "BOTA PEGADO PAREA";
        case 4:
            return "PONTO FINAL";
        case 5:
            return "LUZ CAMERA ACAO";
        case 6:
            return "TOMA CONTA DE MIM";
        case 7:
            return "OLHA PRO CEU";
        case 8:
            return "OLHINHOS DE FOGUEIRA";
        case 9:
            return "RANCHEIRA";
        case 10:
            return "AVOANTE";
        default:
            return "Musica não encontrada";
    }
}

int main() {
    int botao1, botao2;

    cout << "Digite um numero para o botao1 (numeros de 0 a 5): ";
    cin >> botao1;

    cout << "Digite um numero para o botao2 (numeros de 0 a 5): ";
    cin >> botao2;

    if (botao1 < 0 || botao1 > 5 || botao2 < 0 || botao2 > 5) {
        cout << "Numeros de botao invalidos. Use numeros de 0 a 5." << "\n";
    } else {
        int soma = botao1 + botao2;
        string musica = tocarMusica(soma);
        cout << "Tocando a musica: " << musica << "\n";
    }

    return 0;
}
