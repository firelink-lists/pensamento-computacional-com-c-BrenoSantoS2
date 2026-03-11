#include <iostream>

void troca(int v[], int i, int j) {
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) std::cout << v[i] << " ";
    std::cout << std::endl;
}

// ERRO PROPOSITAL: usa j <= n, acessando fora do vetor
void selection_sort_alt4(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j <= n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        troca(v, i, min_idx);
    }
}

int main() {
    int dataset[] = {64, 25, 12, 22, 11};
    int n = 5;

    std::cout << "A4 (erro proposital):" << std::endl;
    selection_sort_alt4(dataset, n);
    imprimir(dataset, n);

    return 0;
}