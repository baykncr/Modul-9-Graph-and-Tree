#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_CITIES = 10; //Maksimal banyak data yang dapat ditampung pada variabel MAX_CITIES untuk struct Graph

struct Graph {
    string cityNames[MAX_CITIES]; // Banyaknya data string yang dapat disimpan dalam string sesuai dengan kapasitas MAX_CITIES
    int adjacencyMatrix[MAX_CITIES][MAX_CITIES]; // Menggunakan array 2 dimensi, dengan ukuran maksimal sesuai MAX_CITIES
    int numCities; // Variabel yang digunakan untuk menyimpan jumlah kota dalam graph
};

void printMatrix(const Graph& graph) {
    cout << setw(10) << " ";
    for (int i = 0; i < graph.numCities; i++) {
        cout << setw(10) << graph.cityNames[i];
    }
    cout << endl;

    for (int i = 0; i < graph.numCities; i++) {
        cout << setw(10) << graph.cityNames[i];
        for (int j = 0; j < graph.numCities; j++) {
            cout << setw(10) << graph.adjacencyMatrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    Graph graph;
    cout << "\n===== Aplikasi Jarak Antar Kota =====" << endl;
    cout << "Silahkan masukan jumlah simpul: ";
    cin >> graph.numCities;
    cin.ignore(); // Mengabaikan karakter newline yang tersisa 2311102031_Bayu Kuncoro Adi

    for (int i = 0; i < graph.numCities; i++) {
        cout << "Simpul " << i + 1 << ": ";
        getline(cin, graph.cityNames[i]);
    }

    cout << "Silahkan masukan bobot antar simpul" << endl;
    for (int i = 0; i < graph.numCities; i++) {
        for (int j = 0; j < graph.numCities; j++) {
            cout << graph.cityNames[i] << " ---> " << graph.cityNames[j] << " = ";
            cin >> graph.adjacencyMatrix[i][j];
        }
    }

    cout << endl;
    printMatrix(graph);

    return 0;
}