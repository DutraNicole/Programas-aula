#include <iostream> 
#include <iomanip>

using namespace std;

int main (){
    float x;
    int i;
    int NP = 0;
    float media;
    float soma = 0;
    for (i = 0; i < 6; i++){
        cin >> x;
        if (x > 0){
            NP++;
            soma = x + soma ;
        }
    }
    cout << fixed << setprecision(1);
    media =(float) soma / NP;
    cout << NP << " valores positivos" << endl;
    cout << media << endl;
    return 0;
}
