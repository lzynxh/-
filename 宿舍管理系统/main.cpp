#define _CRT_NO_SECURE_WARNINGS
#include <iostream>
using namespace std;
void func1();
void func2();
void func3();
void func4();
void func5();
int main(void)
{
	int n;
	cout << "\t\t\t\t\t*****��ӭʹ���������ϵͳ*****" << endl;
	cout << endl;
	cout << "1������ѧ��" << endl;
	cout << "2����ʾȫ��" << endl;
	cout << "3������ѧ��" << endl;
	cout << "4��ɾ��ѧ��" << endl;
	cout << "5���޸���Ϣ" << endl;
	cout << "��������Ҫִ�еĲ���:";
	cin >> n;
	switch (n)
	{
	case 1:func1();
		break;
	case 2:func2();
		break;
	case 3:func3();
		break;
	case 4:func4();
		break;
	case 5:func5();
		break;
	default:
		break;
	}
	return 0;
}