. #include <stdlib.h>
2. #include <stdio.h>
3. #include “fibo.h”
4. 
5. Int main (int argc, char * argv [])
6. {
7. Long ret;
8. Int n;
9. If (argc<2){
10. Fprintf (stderr, “missing index.\n”);
11. Return -1;
12. }
13. N=atoi (argv [1]);
14. Ret = fibo (n);
15. Printf (“Fibo (%d) is %ld\n”,n,ret);
16. Return EXIT_SUCCESS;
17. }
计算斐波那契序列子程序 fibo.c
1. long fibo (int n)
2. {
3. if (n<2)
4. return 1L;
5. else
6. return fibo (n-1) + fibo (n-2);
7. }
计算斐波那契序列头文件 fibo.h
1. # ifndef _FIBO_h
2. #define _FIBO_h
3. Long fibo (int n);
4. #endif
然后进行编译和运行：
1. gcc -c main.c
2. gcc -c fibo.c
3. gcc -o fibo main.o fibo.o
4. ./fibo 2
