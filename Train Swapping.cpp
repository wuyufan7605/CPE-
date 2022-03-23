#include <iostream>
using namespace std;

int main(){
    int testCase_num; //表示有幾個火車,即測資個數
    int trainLength;
    int tmpTime;
    int swapTime; //表示交換次數

    cin>> testCase_num; //輸入的第一行為測資個數
    for(int i=0;i<testCase_num;i++){
        swapTime=0;
        tmpTime=-1;

        cin>>trainLength; //輸入火車車廂長度
        int carriage[trainLength]; //代表火車車廂編號的陣列
        for(int j=0;j<trainLength;j++){
            cin>>carriage[j]; //輸入每節火車廂的編號
        }
        //bubble sort
        while (tmpTime!=0)
        {
            tmpTime=0;
            for(int k=1;k<trainLength;k++){
                if(carriage[k-1]>carriage[k]){
                    int tmp=carriage[k-1];
                    carriage[k-1]=carriage[k];
                    carriage[k]=tmp;
                    tmpTime++;
                }
            }
            swapTime+=tmpTime;   
        }
        cout<<"Optimal train swapping takes "<<swapTime<<" swaps."<<endl;
    }
    return 0;
}