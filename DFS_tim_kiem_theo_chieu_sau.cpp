#include <iostream>
#include <stack>

using namespace std;
const int MAX_N = 100;

bool visited[MAX_N];
int adj[MAX_N][MAX_N]; //Ma tran ke

void DFS(int s, int n) {
	if (visited[s]) return;
	visited[s] = true;

	cout << "Dang xu ly dinh: " << s << endl;

	for (int u = 0; u < n; ++u) {
		if (adj[s][u])
			DFS(u, n);
	}
}

int main() {
	int n, m;
	cout << "Nhap so dinh va so canh: ";
	cin >> n >> m;

	int i, j;
	cout << "Nhap cac canh: " << endl;
	for (int count = 1; count <= m; count++) {
		cin >> i >> j;
		adj[i][j] = true;
	}
	
	int start_node;
	cout << "Nhap dinh bat dau: ";
	cin >> start_node;

	for (int i = 0; i < n; i++) {
		visited[i] = i;
		visited[i] = false;
	}

	DFS(start_node, n);

}