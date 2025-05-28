## 習題 1: 請為下列編譯器加上 do while 迴圈的處理程式
[習題 1](./week2/)
```c
void DOWHILE() {
  int doBegin = nextLabel();
  int doMiddle = nextLabel();
  int doEnd = nextLabel();
  emit("(L%d)\n", doBegin);
  skip("do");
  STMT();
  emit("goto L%d\n", doMiddle);
  emit("(L%d)\n", doMiddle);
  skip("while");
  skip("(");
  int e = E();
  emit("if T%d goto L%d\n", e, doBegin);
  emit("else goto L%d\n", doEnd);
  skip(")");
  emit("(L%d)\n", doEnd);
}
```
此處主要功能為原創，其餘為老師的原檔

## 習題 2 : c4 組合語言理解與硬塞練習
[習題 2](./week3/01c-asmPower/c4.c)
作業要求增加的功能為原創，其餘為老師的原檔

## 習題 3 : 請為 c4 編譯器加上 do while 迴圈
[習題 3](./week4/c4for/c4.c)
作業要求增加的功能為原創，其餘為老師的原檔

## 習題4: 寫一個組合語言程式，可以計算三個數相乘 (記得最後要印出結果）
[習題 4](./week5/)
作業要求增加的功能為原創，其餘為老師的原檔

## 習題5: 寫一個 C 語言的程式，然後用 gcc 與 objdump 做出下列結果
[習題 5](./week6//readme.md)
作業要求增加的功能為原創，其餘為老師的原檔

