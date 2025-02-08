#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size : ";
    cin >> n;

    int Mat[n][n];
    int Up = 0, Down = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) {
            Mat[Up][i] = num++;
        }
        Up++;

        for (int i = Up; i <= Down; i++) {
            Mat[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            Mat[Down][i] = num++;
        }
        Down--;

        for (int i = Down; i >= Up; i--) {
            Mat[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
