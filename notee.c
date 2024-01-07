準備來做筆記
標頭檔有點像是function但更精確的說是macro，是一些在編譯preprocess階段就在處理的東西
1. assert.h
假設
int main(){
  printf("line 1\n");
  assert(2==2);
  printf("line 3\n");

  return 0;
}

output會是

line 1
line 3
program ended with exit code: 0

但如果改成assert(2==3)就會是false然後assert就會fail，這樣程式就會終止。

int main(){
  printf("line 1\n");
  assert(2==3);
  printf("line 3\n");

  return 0;
}
這個樣子的話就會跑出assertion failed:(2==3)還有line 23

這就是assert會做的事，他告訴我們什麼東西出錯了，還有哪裡出錯了。放assert來檢查的話就可以更容易的debug。
2.string.h 
重要功能
strlen() 計算字串長度
可以返回指定的字串長度，但是不包括末尾的空字符 \0
size_t strlen(const char *str)
strcpy() 複製字符串
把一個字串符複製到另一個中
char *strcpy(char *dest, const char *src);
strcat() - 連結字符串
將一個字符串連結到另一個字符串的末尾
char *strcat(char *dest, const char *src);
strcmp() - 比較字符串
比較兩個字符串
int strcmp(const char *str1, const char *str2);
3.math.h
  round
  math.h 的函數 round() 回傳參數的最接近 double 型態的整數值，同時會自動四捨五入，預設回傳值及參數的資料型態為 double ，另有 float 型態的 roundf() ， long double 型態的 roundl() 。
  sqrt
  可以計算函數的平方根植
還有很多跟數學圖形以及三角函數相關的函式可以使用。
4.ctype.h
ctype頭檔是C語言標準函數庫中的標頭檔，這裡定義了一批C語言字元分類函數（C character classification functions），用於測試字元是否屬於特定的字元類別，如字母字元、控製字元等等 。 既支援單字節字符，也支援寬字符。
 isascii()
判斷字元是否為ASCII碼
#include<ctype.h>
#include<stdio.h>
int main()
{
   char ch;
   printf("input a character:");
   ch=getchar();
   if(isascii(ch))
   {
      printf("%c is ascii.",ch);
   }
   else
   {
      printf("%c is not ascii.",ch);
   }
   putchar('\n');
   return 0;
}
運行結果:
input a character:f
f is ascii.
isalnum()
  功能:判斷是否為字母或數字
  #include<ctype.h>
#include<stdio.h>
int main(){
   char ch;
   printf("input a character:");
   scanf("%c",&ch);
   if(isalnum(ch))
   {
      printf("%c is alnum.",ch);
   }
   else
   {
      printf("%c is not alnum.",ch);
   } 
   putchar('\n');
   return 0;  
}
運行結果:
input a character:f
f is alnum.
5.stdlib.h
  atoi()
可以處理字符串轉換整數。
#include<stdio.h>
 
#include<stdlib.h>
 
int main(void){
 
   int r;
 
   char *s="5257";
 
   r=atoi(s);
 
   printf("string = %s\nint= %d\n",s,r); 
 
   return 0;
 
}
運行結果:
string = 5257
int= 525
abort()
可以寫一個終止信息到stderr然後終止異常程序
#include<stdio.h>
 
#include<stdlib.h>
 
int main(void) {
 
   printf("Calling abort()\n");
 
   abort();
 
   printf("It is noneffective\n");
 
   return 0;
 
}
運行結果:
Calling abort()
  
malloc()
可以分配指定大小堆內存
#include<stdio.h>
 
#include<stdlib.h>
 
#include<string.h>
 
int main(void){
 
   char *p=(char*)malloc(20);
 
   strcpy(p,"www.dotcpp.com");
 
   printf("String is %s\n",p);
 
   free(p);
 
   return 0;
 
}
運行結果
String is www.dotcpp.com
swab()
從源和目標

