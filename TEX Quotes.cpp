#include <iostream>
using namespace std;  
int main(){
    char c;
    int k=0;
    while(cin.get(c)){ //可以讀整行.遇到enter也繼續
        if(c!='"'){  //c不是(")就保持原狀
            cout<<c;
        }else if(++k %2){ //如果是第一個(")
            cout<<"``";
        }else{            //如果是第二個(")
            cout<<"''";    //輸出('')
        }
    }
    return 0;
}