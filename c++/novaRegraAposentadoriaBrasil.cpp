#include <iostream>
using namespace std;
string verificarNaoAptidaoAposentadoria(int idadePrevidencia, int idade, int tempoContribuicao){
    
    if(tempoContribuicao < 25 && idade <= idadePrevidencia){
        return "O contrinuinte nao possui idade e tempo de contribuicao necessario para aposentar";
    }else if(tempoContribuicao < 25){
        return "Tempo de contribuicao nao suficiente";
    }

    return "Contribuinte nao possui a idade necessaria para aposentar";
}

int main()
{
    int genero, idade, tempoContribuicao;
        
    cout << "Informe o genero 0 para Masculino ou 1 para Feminino? " << endl;
    cin >> genero;
    
    cout << "Qual a idade? " << endl;
    cin >> idade;
    
    cout << "Quanto tempo de contribuicao? " << endl;
    cin >> tempoContribuicao;
    
    if(genero == 0){
        if(idade > 65 && tempoContribuicao >= 25){
            cout << "Apto a aposentadoria!\n";    
        }else{
            cout << verificarNaoAptidaoAposentadoria(65, idade, tempoContribuicao);    
        }    
    }else{
        if(idade > 62 && tempoContribuicao >= 25){
            cout << "Apto a aposentadoria!\n";    
        }else{
            cout << verificarNaoAptidaoAposentadoria(62, idade, tempoContribuicao);    
        }        
    }    
}

