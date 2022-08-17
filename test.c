
//写代码
//1.写出主函数(main函数)
//100-500 代码
//如何执行呢？ -C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口

//写个代码，在屏幕上打印：比特
//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用，也得打招呼(引用头文件stdio.h)
#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     //字符类型
//     char ch = 'a';
//     //整型
//     int age = 20;
//     //短整型
//     short num = 10;
//     //long
//     //long long

//     //单精度浮点型
//     float weigth = 55.5;
//     //双精度浮点型
//     double d = 0.0;
//     system("pause");
//     return 0;
// }

// int main()
// {
//     // printf("比特\n");
//     // printf("%d",100);//打印一个整数 - %d
//     // sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
    
//     printf("%d\n",sizeof(char));
//     printf("%d\n",sizeof(short));
//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof(long));
//     printf("%d\n",sizeof(long long));
//     printf("%d\n",sizeof(float));
//     printf("%d\n",sizeof(double));
//     system("pause");
//     return 0;
// }


//写一个代码求两个整数的和
//scanf 函数是输入函数
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("sum =%d\n ", sum);
    system("pause");

    return 0;
}