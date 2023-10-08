#include <iostream>

using namespace std;

int main() {
	//字符型
	// 创建
	char ch = 126;

	// 输出
	cout << ch << endl;

	// 查看占用内存空间大小
	cout << "char字符型变量所占的内存空间：" << sizeof(char) << endl;

	// 字符变量常见错误
	// 在显示字符型变量时，用单引号将字符括起来，不要用双引号
	// char ch1 = "a";
	// 单引号内只能有一个字符，不可以是字符串
	// char ch2 = 'abc';

	// 字符型变量对应的ASCII编码
	cout << (int)ch << endl;

	system("pause");
	return 0;
}