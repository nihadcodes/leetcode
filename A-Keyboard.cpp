#include<bits/stdc++.h>
using namespace std;
int main () {

    string value = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char LR;
    cin>>LR;
    string input;
    cin>>input;

    for(int i=0; i<input.size(); i++) {

        int index = value.find(input[i]);
        if(LR=='L') {
            cout<<value[index+1];
        }
        else {
             cout<<value[index-1];
        }
        }
    }


