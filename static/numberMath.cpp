#include <iostream> //调用输入输出库
#include <cmath> //调用数学计算库

using namespace std;

int main()
{
    //声明并实例化
    int i = -1222;
    short s = 10;
    long l = 40000;
    float f = 329.89;
    double d = 800.78;

    // cmath 库提供了常用的数学计算函数 sin, cos,tan,log, pow,sqrt等

    // 数学计算并输出

    cout << "i :" << sin(f) << endl;
    cout << "s :" << sin(i) << endl;
    cout << "l :" << sqrt(l) << endl;
    cout << "f :" << log(f) << endl;
    cout << "d :" << fabs(d) << endl;
    return 0;
}