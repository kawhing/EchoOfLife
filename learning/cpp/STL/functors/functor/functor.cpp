#include <iostream>
#include <functional>
using namespace std;
//内建函数对象 算数仿函数
//negate 一元仿函数 取反仿函数
void test01(){
    negate<int> n;
    cout << n(50) << endl;
}
//plus 二元仿函数 加法
void test02(){
    plus<int> p;
    cout << p(10, 20) << endl;
}
int main(){
    test02();
    return 0;
}