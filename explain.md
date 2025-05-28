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
```c
// 2: int power2(int n) {
// 3:   if (n==0) {;
  power2 = e;
  *e++ = ENT; *e++ = 0;
  *e++ = LLA; *e++ = 2;
  *e++ = LI;
  *e++ = PSH;
  *e++ = IMM; *e++ = 0;
  *e++ = EQ;
  *e++ = BZ; loc=e; *e++ = 0; 
  *e++ = IMM; *e++ = 1;
  *e++ = LEV;
  *loc = (int)e;
// 7:   return 2*power2(n-1);
  *e++ = IMM; *e++ = 2;
  *e++ = PSH;
  *e++ = LLA; *e++ = 2;
  *e++ = LI;
  *e++ = PSH;
  *e++ = IMM; *e++ = 1;
  *e++ = SUB;
  *e++ = PSH;
  *e++ = JSR; *e++ = (int) power2;
  *e++ = ADJ; *e++ = 1;
  *e++ = MUL;
  *e++ = LEV;
// 9:}
  *e++ = LEV;
// 10:
// 11: int main() {
// 12:   printf("power2(3)=%d\n", power2(3));
  pc = e;
  *e++ = ENT; *e++ = 0;
  *e++ = IMM; *e++ = (int) "power2(3)=%d\n";
  *e++ = PSH;
  *e++ = IMM; *e++ = 3;
  *e++ = PSH;
  *e++ = JSR; *e++ = (int) power2;
  *e++ = ADJ; *e++ = 1;
  *e++ = PSH;
  *e++ = PRTF;
  *e++ = ADJ; *e++ = 2;
// 11: }
  *e++ = LEV;
```
作業要求增加的功能為原創，其餘為老師的原檔

## 習題 3 : 請為 c4 編譯器加上 do while 迴圈
[習題 3](./week4/c4for/c4.c)
作業要求增加的功能為原創，其餘為老師的原檔

## 習題4: 寫一個組合語言程式，可以計算三個數相乘 (記得最後要印出結果）
[習題 4](./week5/)
原創

## 習題5: 寫一個 C 語言的程式，然後用 gcc 與 objdump 做出下列結果
我實作了一個link list的add delete insert功能<br>
[習題 5](./week6//readme.md)
原創
