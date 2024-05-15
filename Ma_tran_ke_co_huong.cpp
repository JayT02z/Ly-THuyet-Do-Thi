#include "iostream"
#include "fstream"

using namespace std;

void doc_file(fstream& f, int& n, int Matrankecohuong[][100])
{
	f.open("C://Users//CDT204//source//Ly-THuyet-Do-Thi//input.txt", ios::in);
	f >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			f >> Matrankecohuong[i][j];
		}
	}
	f.close();
}

int main() {
	fstream f;
	int n, Matrankecohuong[100][100];
	doc_file(f, n, Matrankecohuong);
	
	cout << "Cac dinh cua do thi: ";
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
	} 
	cout << endl;
	
	cout << "Cac canh cua do thi: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (Matrankecohuong[i][j] == 1)
				cout << "(" << i + 1 << " , " << j + 1 << ")" << endl;
		}
	}

	int dem_bac_vao = 0, dem_bac[2][10];
	int dem_bac_ra = 0;
	cout << "Bac vao ra cua cac dinh: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (Matrankecohuong[i][j] == 1)
				dem_bac_ra += 1;
		}
		dem_bac[0][i] = dem_bac_ra;
		dem_bac_ra = 0;
	}

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			if (Matrankecohuong[i][j] == 1)
				dem_bac_vao += 1;
		}
		dem_bac[1][j] = dem_bac_vao;
		dem_bac_vao = 0;
	}

	for (int i = 0; i < n; i++) {
		cout << "Dinh " << i + 1 << ": " << "\t" << "Bac vao = " << dem_bac[1][i] << "\t" << "Bac ra = " << dem_bac[0][i] << endl;
	}
	return 0;
}