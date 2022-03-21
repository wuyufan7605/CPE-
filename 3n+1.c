#include <stdio.h>
int main(){
    int smaller,bigger,n,k,num1,num2;
    //有讀到兩個資料,就繼續找最大的cycle-length
    while(scanf("%d%d",&num1,&num2)==2){
        //每組資料開始,將最大的cycle-length清除為0
        int max=0,c;
        //將較小的資料記為smaller;較大的記為bigger
        if(num1>num2){
            bigger=num1;
            smaller=num2;
        }else{
            bigger=num2;
            smaller=num1;
        }
        //由num1~num2的每一個,逐一計算cycle-length
        for(k=smaller;k<=bigger;k++){
            //n取k,次數從0起算
            n=k;c=0;
            while(n!=1){
                //只要n不等於1,就把c加一
                c++;
                //繼續算下一個n值
                //如果n為奇數
                if(n%2==1){
                    n=3*n+1;
                }else{ //如果n為偶數
                    n/=2;
                }
            }
            c++;
            //如果這一個數字的c>max,就記錄到max
            if(c>max) max=c;
        }
        //全部測試過後,印出最初的兩個數字,及最大的次數
        printf("%d %d %d\n",num1,num2,max);
    } 
    return 0;   
}