#include <iostream>
#include <string>

#include <iomanip>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	string OutFiles = "D:\\���\\������� �������� ���\\���������������\\All homework\\TextTranslyt\\�����.txt";
	string InFiles = "D:\\���\\������� �������� ���\\���������������\\All homework\\TextTranslyt\\�����1.txt";
	ofstream fileIn;
	ifstream fileOut;
	fileOut.open(OutFiles);
	fileIn.open(InFiles);

	string str;
	string badSlovo;
	while (!fileOut.eof())
	{
		getline(fileOut, str);
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '.' || str[i] == ',' || str[i] == ':' || str[i] == ';')
			{
				str.erase(i);
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'i';
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'g';
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'p';
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'v';
			}
			else if (str[i] == '�')
			{
				str[i] = 't';
			}
			else if (str[i] == '�')
			{
				str[i] = 'k';
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'd';
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'l';
			}
			else if (str[i] == '�' || str[i] == '�')
			{
				str[i] = 'r';
			}
			else if (str[i] == 'I' || str[i] == 'i')
			{
				str[i] = '�';
			}
			else if (str[i] == 'G' || str[i] == 'g')
			{
				str[i] = '�';
			}
			else if (str[i] == 'P' || str[i] == 'P')
			{
				str[i] = '�';
			}
			else if (str[i] == 'V' || str[i] == 'v')
			{
				str[i] = '�';
			}
			else if (str[i] == 't')
			{
				str[i] = '�';
			}
			else if (str[i] == 'k')
			{
				str[i] = '�';
			}
			else if (str[i] == 'D' || str[i] == 'd')
			{
				str[i] = '�';
			}
			else if (str[i] == 'r' || str[i] == 'R')
			{
				str[i] = '�';
			}
			else if (str[i] == 'L' || str[i] == 'l')
			{
				str[i] = '�';
			}
		}

		if (str != badSlovo)
		{
			fileIn << str << endl;
		}
	}


	system("pause");
	return 0;
}