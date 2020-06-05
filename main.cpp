#include<iostream>
#include"modules/hello.h"

using namespace std;

int main()
{
    cout << "请输入功能序号:" << endl;
    int num;
retry:
    cin >> num;

    switch (num)
    {
    case 0:
        HelloWorld();
        break;
    default:
        cout << "没有该功能号，请重新输入:" << endl;
        goto retry;
        break;
    }
}