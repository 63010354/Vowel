#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	char word[100];
	char* w;
	scanf_s("%s", word, 99);
	w = word;
	while (*w != '\0')
	{
		if ((*w == 'a') || (*w == 'e') || (*w == 'i') || (*w == 'o') || (*w == 'u'))
		{
			a += 1;
		}
		w += 1;
	}

	if (a > 0)
	{
		cout << "There is vowel";
	}
	else if (a == 0)cout << "There is not vowel";
}

