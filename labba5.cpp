// Завдання 2.6 Знайти найменший за модулем елемент двовимірного масиву.

#include <iostream>
#include <vector>
#include <windows.h>


using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int rows = 3;
    int cols = 4;
    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 21-10;
        }
    }

    cout << "Матриця: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int minElement = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (abs(matrix[i][j]) < abs(minElement)) {
                minElement = matrix[i][j];
            }
        }
    }

    cout << "Найменший за модулем елемент: " << minElement << endl;

    return 0;
}