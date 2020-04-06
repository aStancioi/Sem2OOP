#include<iostream>
#include<cstring>
#include<string>
using namespace std;

//ub1
const char*  strfind(const char*  s, const char* f)
{
	int len = strlen(s), a, i, j;
	const char* p = s;
	for (i = 0; i < strlen(f); i++)
	{
		j = 0;
		a = 0;
		while (f[i] == s[j])
		{
			a++;
			i++;
			j++;
			if (a = strlen(s))
			{
				p = s;
				return p;
			}
		}
	}
	if (p == s)
		return nullptr;
	else
		return p;
}

struct ub2
{
	bool* b;
	double* dd;
	char* c;
	int* d;
	long* l;
	long double* ld;
}*p;

int stringlen(string s)
{
	int i = 0,len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return len;
}

void stringcpy(string &s1, string s2)
{
	s1 = s1 + s2;
}


int main()
{

	cout<<sizeof(++p->d)<<endl;
	cout<<sizeof(p++->d)<<endl;
	cout<<sizeof(*p->d)<<endl;
	cout<<sizeof(*p->d++)<<endl;
	cout<<sizeof((*p->d)++)<<endl;
	cout<<sizeof(*p++->d)<<endl;
	string s1 = "merg";
	stringcpy(s1," wow");
	cout << s1;
	return 0;
}