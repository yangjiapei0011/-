#include <iostream>
#include <Windows.h>

using namespace std;

int main(void){
	int x;
	cout << "������һ������: " << endl;
	cin >> x;
	//��x�����4λ��0         ����2����4λȫΪ1
	//x =  x & (~15);      
	x=x|15;
	//��x�����4λ����Ϊ0110        ÿһλ��1λ�����Ǳ���
	//x = x | 6;
	x=x & (~9);
	cout << "x=" << x << endl;
	system("pause");
	return 0;
}