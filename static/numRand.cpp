#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    // 这是c++的随机数生成学习 包括输出，输入库，时间库，以及数学计算库
    int i, j;

    // 设置种子

    s rand( (unsinged)time(null) );

    // 生成十个随机数
    for( int i = 0; i < 10; i++)
    {
        // 生成实际的随机数
        j = rand();
        cout << "随机数：" << j <<endl;
    }
    return 0;
}