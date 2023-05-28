#include <iostream> // cabecalho do cout e cin

using namespace std;// poupa tempo de escrever o std::

int main()
{
	int i, j, n;
	cout << "Diga quantas linhas voce quer na sua piramide de estrelas:\n";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (n * 2);j++)
		{
			if (j >= n - (i - 1) && j <= n + (i - 1))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}