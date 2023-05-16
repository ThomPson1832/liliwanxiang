#include <stdlib.h>

#include <stdio.h>

int main()

{

    printf("正在关机...\n");

    system("shutdown /s /t 0");  // 执行关机操作

    return 0;

}
