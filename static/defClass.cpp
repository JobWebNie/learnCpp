#include <iostream>

using namespace std;

class Box
{
    // 注意定义的时候不能初始化
    public:
    double length;
    double height;
    double width;

    double getVolume(void){
        return length * height * width;
    }
}; //<-这个结束分号要加上不然报错

int main()
{   
    double volume = 0.0;
    Box box1;
    box1.height = 20.0;
    box1.width = 30.0;
    box1.length = 10.0;
    volume = box1.getVolume();
    cout << "盒子volume 体积等于："<< volume << endl;
}