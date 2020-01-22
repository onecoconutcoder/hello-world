#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>
using namespace std;
int main()

{
	cout << "please input data:" << endl;
	deque<int> d;
	istream_iterator<int> it (cin);
	istream_iterator<int> itf;                 //默认输入流迭代器 
	while (it != itf)                          //判断操作是否合法 
	{
		*it;                                   //相当于cin >> 不要好像也没什么问题 
		d.push_back(*it);
		it++; 
	}
	copy(d.begin() , d.end() , ostream_iterator<int>(cout , " "));
	cout << endl;
	return 0;
}
