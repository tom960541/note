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

  
