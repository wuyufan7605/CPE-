#include <iostream>
using namespace std;

string week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int month[13]={-1,3,28,7,4,9,6,11,8,5,10,7,12};

int main(){
    int T,m,d;
    cin>>T;
    while(T--){
        cin>>m>>d;
        int index=(d-month[m])%7;
        index=index%7<0 ? index+7 : index;
        cout<<week[index]<< "\n";
    }
    return 0;
}