#include <iostream>

using namespace std;

int main() {
	cout << "short类型所占用的内存空间为：" << sizeof(short) <<endl;

	cout << "int类型所占用的内存空间为：" << sizeof(int) <<endl;

	cout << "long类型所占用的内存空间为：" << sizeof(long) <<endl;

	cout << "long long类型所占用的内存空间为：" << sizeof(long long) <<endl;

	//整型大小比较
	// short < int <= long < long long

    system("pause");

	return 0;
}