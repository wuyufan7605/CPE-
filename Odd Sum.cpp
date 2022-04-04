#include <iostream>
using namespace std;

int main(void){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        if(a%2==0) a++;
        if(b%2==0) b--;
        cout<<"Case " <<i<<": "<<((a+b)*(b-a+2))/4<< endl;
    }
}