#include <iostream>
using namespace std;

int realizarSomaValoresPrimeiraLetra(string nomeMae, string nomePai, string nomeCliente){
    return (nomeMae[0]+nomePai[0]+nomeCliente[0])/10;
}

int main() {
	string nomeCliente, nomePai, nomeMae;
	char genero;
	int anoNascimento, cpf, limiteBancario, somaValoresPrimeiraLetra;
	bool isInadimplente;
    
    cout << "Informe o seu nome? " << endl;
    cin >> nomeCliente;
    
    cout << "Informe o nome do seu pai? " << endl;
    cin >> nomePai;
    
    cout << "Informe o nome da sua mae? " << endl;
    cin >> nomeMae;

    cout << "Informe o genero M para Masculino ou F para Feminino? " << endl;
    cin >> genero;
    
    cout << "Informe o seu ano de nascimento? " << endl;
    cin >> anoNascimento;
    
    cout << "Informe os 3 ultimos digitos do seu cpf? " << endl;
    cin >> cpf;
    
    cout << "Informe o seu limite bancario? " << endl;
    cin >> limiteBancario;
    
    cout << "Informe 0 caso seja inadimplente ou 1 para nao inadimplente " << endl;
    cin >> isInadimplente;
    
    somaValoresPrimeiraLetra = realizarSomaValoresPrimeiraLetra(nomeMae, nomePai, nomeCliente);
	return 0;
}
