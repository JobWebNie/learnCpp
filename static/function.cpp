#include <iostream>

using namespace std;

int sun(int a, int b = 20)
{
    int result;
    result = a + b;
    return (result);
}
main()
{
    /*每个c++程序里面至少有一个函数main()，
    *c++ 提供了大量的内置函数，strcat()用来连接两个字符串，
    *memcpy()用来复制内存到另一个位置
    *c++不建议使用goto来指向函数
    */

    // 局部变量声明
    int a = 100;
    int b = 200;
    int result;

    // 调用函数来添加值
    result = sum(a, b);
    cout << "total value is :" << result << endl; //再次调用函数
    result = sum(a);
    cout << "total value is: " << result << endl;
    return 0;
    /*
    *Total value is :300
    *Total value is :120
    */
}