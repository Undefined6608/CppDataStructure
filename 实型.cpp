#include <iostream>

using namespace std;

int main() {
	//实型
	// 1、float
	float f1 = 3.14f;
	//2、double
	double d1 = 3.14;

	cout << "float类型：" << f1 << endl;
	cout << "double类型：" << d1 << endl;

	// 科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2
	cout << "f2= " << f2 << endl;

	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f3= " << f3 << endl;

	system("pause");
	return 0;
}