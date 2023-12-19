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

  
