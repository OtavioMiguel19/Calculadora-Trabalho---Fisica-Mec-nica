/**========================================**/
/**    PROGRAMA DE CALCULO DE INTEGRAIS    **/
/**                  C++                   **/
/**========================================**/
/**       FEITO PARA APS DE FÍSICA I       **/
/**         PROFESSOR MARCOS BROWN         **/
/**========================================**/
/**                 ALUNOS                 **/
/**           JOSE OTAVIO MIGUEL           **/
/**            ERIC MATOS WADA             **/
/**              PEDRO AFONSO              **/
/**========================================**/


#include <iostream>
#include <math.h>
using namespace std;


/**=================================================**/
/** ALTERE A FUNÇÃO f(x)**/
/* LEMBRE-SE DE DEIXAR BEM EXPLÍCITA A SUA FUNÇÃO */
#define Y ((X*X))

/** VALOR DE DELTA X **/
#define DX ((b-a)/N)

/** DEFINA O TAMANHO (QUANTIDADE DE DIVISÕES **/
#define N 400

/** NÃO ALTERE. SERVE PARA OBTER O PONTO MEDIO E CALCULAR COM MAIS PRECISÃO **/
#define X (((a+(i*DX))+(a+((i+1)*DX)))/2)

/**=================================================**/

int main()
{
    double soma = 0;
    unsigned long long int i;
    double a, b;

    /** a E b SÃO OS VALORES LIMITE. A FUNÇÃO SERÁ INTEGRADA PARA VALORES DE X ENTRE a E b **/

    cout << "Insira o valor inicial e o valor final para integrar e calcular o trabalho." << endl;
    cout << "Separe com um espaco ou ENTER" << endl;
    cin >> a;
    cin >> b;


    /** FAZ A SOMATORIA DAS PARTES **/
    for(i=0; i<N; i++)
    {
        soma+=(Y*DX);
    }
    /**----------------------------**/

    cout << "A integral eh: " << soma << endl;

    return 0;
}
