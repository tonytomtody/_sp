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
