#include <iostream>
using namespace std;
#define MX 105
int a[MX][MX], d[MX][MX];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    d[1][1] = a[1][1];
    for(int i = 2; i <= n; i++){
        d[i][1] = max(d[i-1][1], a[i][1]);
        d[1][i] = max(d[1][i-1], a[1][i]);
    }

    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= n; j++){
            d[i][j] = max(min(d[i-1][j], d[i][j-1]), a[i][j]);
        }
    }

    //   for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++) cout << d[i][j] << " ";
    //     cout << "\n";
    // }


    cout << d[n][n];

    return 0;
}