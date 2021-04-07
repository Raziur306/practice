#include<bits/stdc++.h>
using namespace std;
//infix to postfix implemented by Ronju
int weight(char c)
{
	switch (c)
	{
	case '-':
	case '+':
		return 1;
	case '/':
	case '*':
		return 2;
	case '^':
		return 3;
	}
	return -1;
}
void infixPostFix(string exp)
{
	string postfix;
	stack<char> st;
	st.push('N');
	for (int i = 0; i < exp.size(); i++)
	{
		if (exp[i] == ' ')continue;

		if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
		{
			postfix.push_back(exp[i]);
		}
		else if (exp[i] == '(')
		{
			st.push(exp[i]);
		}
		else if (exp[i] == ')')
		{
			while (st.top() != 'N' && st.top() != '(')
			{
				postfix.push_back(st.top());
				st.pop();
			}
			st.pop();
		}
		else
		{
			while (st.top() != 'N' && weight(st.top()) >= weight(exp[i]))
			{
				postfix.push_back(st.top());
				st.pop();
			}
			st.push(exp[i]);
		}
	}
	while (st.top() != 'N')
	{
		postfix.push_back(st.top());
		st.pop();
	}
	cout << "\nPostfix experssion: " << postfix << endl;

}
int main()
{
	string exp;
	cout << "Enter Infix expression: ";
	getline(cin, exp);
	infixPostFix(exp);

	return 0;
}
