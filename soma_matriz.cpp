#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int mat1[10][10], mat2[10][10], mat3[10][10];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat1[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> mat2[i][j];
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << mat3[i][j] << " ";
        cout << endl;
    }

    return 0;
}
