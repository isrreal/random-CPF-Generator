#include <iostream>
void gerar(int** elementos) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++) {
            if(j != 3)
                elementos[i][j] = rand() % 1000;
            else
                elementos[i][j] = rand() % 100;
        }
}

void printar(int** elementos) {
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++ )
            j != 3 ? std::cout << elementos[i][j] << "." : std::cout << elementos[i][j];
        std::cout << std::endl;
    }    
}

int main() {
    srand(time(0));  
    int** matriz = new int*[5];
    for (int i = 0; i < 5; i++)
        matriz[i] = new int[4];
    gerar(matriz);    
    printar(matriz);    
    delete[] matriz;
}