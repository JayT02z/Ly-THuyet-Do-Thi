#include "iostream"
#include "fstream"

using namespace std;

void doc_file(fstream& f, int& n, int Matranke[][100])
{
	f.open("C://Users//CDT204//source//Ly-THuyet-Do-Thi//input.txt", ios::in);
	f >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			f >> Matranke[i][j];
		}
	}
	f.close();
}

int main() {
	fstream f;
	int n;
	int Matranke[100][100];
	doc_file(f, n, Matranke);
	int count = 0;
	cout << n << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (Matranke[i][j] == 1)
				count += 1;
		}
		cout << count << " ";
		count = 0;
	}
	return 0;
}