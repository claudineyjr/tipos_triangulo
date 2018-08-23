#include <iostream>
#include <math.h>
using namespace std;
 
int main(int argc, char** argv) {
        //Declaração de Variáveis
        float a, b, c;
        a=b=c=0;
        //Início
        cout << "Verificar tipo de triangulo\n";
        cout << "Digite o valor do lado X :";
        cin >> a;
        cout << "Digite o valor do lado Y :";
        cin >> b;
        cout << "Digite o valor do lado Z :";
        cin >> c;
       
        //Consistir se os valores são positivos
        while((a<=0) || (b<=0) || (c<=0))
        {
                cout << "Todos os valores precisam ser positivos.\n";
                cout << "Digite o valor do lado X :";
                cin >> a;
                cout << "Digite o valor do lado Y :";
                cin >> b;
                cout << "Digite o valor do lado Z :";
                cin >> c;
        }
       
        //Verificação se é triângulo
        if((c<(a+b)) && (a<(b+c)) && (b<(a+c)))
        {
                //Verifica se o valor absoluto de 2 lados é menor do que o valor do outro
                if(((fabs(b-c))<a) && ((fabs(a-c))<b) && ((fabs(a-b))<c))
                {
                        //Verifica o tipo de triângulo
                        if((a==b) && (b==c))
                        {
                                cout << "Este eh um triangulo equilatero";
                        }
                        else if((a==b) || (a==c) || (b==c))
                        {
                                cout <<"Este eh um triangulo isoceles";
                        }
                        else if ((a!=b) && (a!=c) && (b!=c))
                        {
                                cout <<"Este eh um triangulo escaleno";
                        }
                }
                else
                {                                
                        cout << "Nao eh triangulo!\n";
                }
        }
        else
        {
                cout << "Nao eh triangulo!\n";
        }
       
        return 0;
}