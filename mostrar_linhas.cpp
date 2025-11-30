#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matriz[10][10];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
