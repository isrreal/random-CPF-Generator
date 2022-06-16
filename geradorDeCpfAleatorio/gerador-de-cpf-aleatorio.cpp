#include <iostream>
void gerar(int** jooj) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++) {
            if(j != 3)
                jooj[i][j] = rand() % 1000;
            else
                jooj[i][j] = rand() % 100;
        }
}

void printar(int** jooj) {
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++ )
            j != 3 ? std::cout << jooj[i][j] << "." : std::cout << jooj[i][j];
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