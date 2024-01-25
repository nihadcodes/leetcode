#include<bits/stdc++.h>
using namespace std;
int main () {






int n; cin>>n;
    int sure=0;
    int n1,n2,n3;


    for(int i=0; i<n; i++) {
        cin>>n1>>n2>>n3;

int sum= n1+n2+n3;
if (sum>=2) {
sure++;



}

}

    cout<<sure<<endl;

return 0;

}


/*#include <bits/stdc++.h>

using namespace std;

int main() {

   int t;
cin>>t;
while(t--) {

   int n;
   cin >> n;

   int problemsToImplement = 0;
   for (int i = 0; i < n; i++) {
       int petya, vasya, tonya;
       cin >> petya >> vasya >> tonya;

       // Count problems where at least two friends are sure
       if (petya + vasya + tonya >= 2) {
           problemsToImplement++;
       }
   }

   cout << problemsToImplement << endl;
}

   return 0;
}
*/
