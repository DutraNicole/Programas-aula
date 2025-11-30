#include <iostream> 
using namespace std;

int main ()
{
int i;
int x;
int NP = 0;
int soma = 0;
for (i = 0 ; i < 6; i++){
   cin >> x; 
   if (x > 0)
   {
       NP++;
   }
}
cout << NP << " valores positivos" << endl;
return 0;    
}
