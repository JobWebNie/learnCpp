#include <iostream>

using namespace std;

int main()
{

/* 修饰符包括四种 signed ,unsigned , long , short,修饰符，无修饰符，长，短
* 整数修饰符包括四种 ：signed ,unsigned , long , short
* 字符修饰符包括两种 ： signed , unsigned,两者也可修饰long, short
* c++ 允许在long和short之后省略int声明，会隐示声明为int类型
*/

    short int i; // int可以省略 - 声明有符号短整数
    unsigned long  int j;// 声明无符号长整数 

    j = 500000; //实例化j
    i = j; //实例化i 对比有无符号声明之间的差别
    cout << "i: " << i << "j: " << j;
    return 0;//结束进程，并向进程返回0;
}