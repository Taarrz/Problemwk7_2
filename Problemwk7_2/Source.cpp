#include<iostream>
#include<algorithm>
using namespace std;
struct MyStruct
{
	char name[100];
	int salary;
};
bool sortStruct(MyStruct x, MyStruct y) {
	return x.salary < y.salary;
}

int main() {
	MyStruct a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].name;
		cin >> a[i].salary;
	}
	sort(a, a + n, sortStruct);
	for (int i = 0; i < n; i++) {
		cout<< a[i].name<<" ";
		cout<<a[i].salary<<endl;
	}
	
}