#include <iostream>
using namespace std;

int main() {
   int n=0, x1=0, x2=1, xf=x1+x2;
    cin >> n;
    cout << x2 << endl;

    for(int i=2; i<(n+1);i++){
       if (c<=n){
            cout << xf << endl;
            x1=x2;
            x2=xf;
            xf=x1+x2;
       }
    }
   return 0;
}
