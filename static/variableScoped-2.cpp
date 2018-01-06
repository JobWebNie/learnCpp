#include <iostream>

using namespace std;

// 声明全局变量

int a = 20;

int main()
{
// 时机初始化变量a
cout << "a的局部" << a << endl;
a = 10;
cout << "a的局部变量值" << a << endl;
// 局部变量会覆盖全局变量

int a = 20;

cout << "a的局部变量值" << a << endl;

return 0;
}
