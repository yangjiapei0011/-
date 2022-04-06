#include <iostream>
#include <Windows.h>

using namespace std;

int main(void){
	int x;
	cout << "请输入一个整数: " << endl;
	cin >> x;
	//把x的最低4位清0         方法2：低4位全为1
	//x =  x & (~15);      
	x=x|15;
	//把x的最低4位设置为0110        每一位和1位与结果是本身
	//x = x | 6;
	x=x & (~9);
	cout << "x=" << x << endl;
	system("pause");
	return 0;
}