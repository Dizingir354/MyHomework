#include <iostream>
#include <string>

#include <iomanip>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	string OutFiles = "D:\\Шаг\\Средняя академия ШАГ\\Програмирование\\All homework\\TextTranslyt\\Текст.txt";
	string InFiles = "D:\\Шаг\\Средняя академия ШАГ\\Програмирование\\All homework\\TextTranslyt\\Текст1.txt";
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
			else if (str[i] == 'и' || str[i] == 'и')
			{
				str[i] = 'i';
			}
			else if (str[i] == 'г' || str[i] == 'Г')
			{
				str[i] = 'g';
			}
			else if (str[i] == 'П' || str[i] == 'п')
			{
				str[i] = 'p';
			}
			else if (str[i] == 'В' || str[i] == 'в')
			{
				str[i] = 'v';
			}
			else if (str[i] == 'т')
			{
				str[i] = 't';
			}
			else if (str[i] == 'к')
			{
				str[i] = 'k';
			}
			else if (str[i] == 'Д' || str[i] == 'д')
			{
				str[i] = 'd';
			}
			else if (str[i] == 'л' || str[i] == 'Л')
			{
				str[i] = 'l';
			}
			else if (str[i] == 'р' || str[i] == 'Р')
			{
				str[i] = 'r';
			}
			else if (str[i] == 'I' || str[i] == 'i')
			{
				str[i] = 'и';
			}
			else if (str[i] == 'G' || str[i] == 'g')
			{
				str[i] = 'г';
			}
			else if (str[i] == 'P' || str[i] == 'P')
			{
				str[i] = 'п';
			}
			else if (str[i] == 'V' || str[i] == 'v')
			{
				str[i] = 'в';
			}
			else if (str[i] == 't')
			{
				str[i] = 'т';
			}
			else if (str[i] == 'k')
			{
				str[i] = 'к';
			}
			else if (str[i] == 'D' || str[i] == 'd')
			{
				str[i] = 'д';
			}
			else if (str[i] == 'r' || str[i] == 'R')
			{
				str[i] = 'р';
			}
			else if (str[i] == 'L' || str[i] == 'l')
			{
				str[i] = 'л';
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