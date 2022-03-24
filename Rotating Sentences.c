#include <stdio.h>
#include <string.h>

int main(){
    char s[110][110];
    int i=0,j,k;
    int max;
    while(gets(s[i])!=NULL){ //每次讀一列字串,字串不為空
        if(i==0){
            max=strlen(s[i]); //先把最大長度設為第一列字串的長度
        }else if(max<strlen(s[i])){  //比較每行字串的長度
            max=strlen(s[i]);         //找出哪一行長度最大
        }
        i++;
    }
    //反轉字串
    for(j=0;j<max;j++){ //反轉後的的列數
        for(k=i-1;k>=0;k--){ //反轉後的行數
            if(j<strlen(s[k])){
                printf("%c",ch[k][j]);
            }else if(k!=0){ //當這一列沒有到達:最長字串長度時,就補上空白
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}