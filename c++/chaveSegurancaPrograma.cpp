#include <iostream>
using namespace std;

int realizarSomaValoresPrimeiraLetra(string nomeMae, string nomePai, string nomeCliente){
    return (nomeMae[0]+nomePai[0]+nomeCliente[0])/10;
}

int calculaRestoProdutoAnoNascimentoCPF(int anoNascimento, int cpf){
    return (anoNascimento * cpf) % 100; 
}

int calculaDigitosLimiteGeneroInadimplencia(char genero, int limite, bool isInadimplente){
    int primeiroDigito, segundoDigito;
    if(!isInadimplente && limite <10000 ){
        primeiroDigito = limite / 1000;
        if(genero == 'M'){ 
            segundoDigito = 0;
        }else{
            segundoDigito = 1;
        }
    }else if(isInadimplente && limite < 10000){
        primeiroDigito = limite % 1000;
        if(genero == 'M'){ 
            segundoDigito = 2;
        }else{
            segundoDigito = 3;
        }
    }else{
        primeiroDigito = 9;
        if(genero == 'M' && !isInadimplente){ 
            segundoDigito = 5;
        }else if(genero == 'F' && !isInadimplente){
            segundoDigito = 6;
        }else if(genero == 'M' && isInadimplente){
            segundoDigito = 7;
        }else{
            segundoDigito = 8;
        }
    }
    return 10 * primeiroDigito + segundoDigito;
}

void criarCodigoSeguranca(int valorPrimeiraFuncao, int valorSegundaFuncao, int valorTerceiraFuncao ){
     cout << "O Código de Segurança gerado foi: " << endl;    
}

int main() {
	string nomeCliente, nomePai, nomeMae;
	char genero;
	int anoNascimento, cpf, limiteBancario, somaValoresPrimeiraLetra, restoAnoNascimentoCPF, digitosLimiteGeneroInadimplencia;
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
    cout << "funcao 1: " << somaValoresPrimeiraLetra;
    restoAnoNascimentoCPF = calculaRestoProdutoAnoNascimentoCPF(anoNascimento, cpf);
    cout << "funcao 2: " << restoAnoNascimentoCPF;
    digitosLimiteGeneroInadimplencia = calculaDigitosLimiteGeneroInadimplencia(genero, limiteBancario, isInadimplente);
    cout << "funcao 3: " << digitosLimiteGeneroInadimplencia;
	return 0;
}
