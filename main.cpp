# include <iostream>
using namespace std;

int** getMas(int** Mas, int n, int m) {
    int** newMas = new int *[n / 2];

    for (int i = 0; i < n / 2; ++i) {
        newMas[i] = new int [m];
    }

    int temp = 0;
    for (int i = 1; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
            newMas[temp][j] = Mas[i][j];
        }
        temp++;
    }

    return newMas;
}

int main() {
    int n,m;
    cin >> n >> m;

    int** Mas = new int *[n];
    for (int i = 0; i < n; ++i)
        Mas[i] = new int [m];

    cout<<"Enter\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> Mas[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<Mas[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    int** newMas = getMas(Mas, n , m);

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < m; j++) {
            cout<<newMas[i][j]<<" ";
        }
        cout<<"\n";
    }

    for (int i = 0; i < n; i++)
        delete[] Mas[i];
    delete [] Mas;

    for (int i = 0; i < n / 2; i++)
        delete[] newMas[i];
    delete [] newMas;
    return 0;
}