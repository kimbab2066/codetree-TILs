#include <iostream>
using namespace std;
#define MX 105
int a[MX][MX], d[MX][MX];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)cin >> a[i][j];
    }
    d[1][1] = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            d[i][j] = max(d[i-1][j] + a[i][j], d[i][j-1] + a[i][j]);
        }
    }
    cout << d[n][n];

    return 0;
}