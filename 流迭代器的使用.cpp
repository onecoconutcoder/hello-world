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
	istream_iterator<int> itf;                 //Ĭ�������������� 
	while (it != itf)                          //�жϲ����Ƿ�Ϸ� 
	{
		*it;                                   //�൱��cin >> ��Ҫ����Ҳûʲô���� 
		d.push_back(*it);
		it++; 
	}
	copy(d.begin() , d.end() , ostream_iterator<int>(cout , " "));
	cout << endl;
	return 0;
}
