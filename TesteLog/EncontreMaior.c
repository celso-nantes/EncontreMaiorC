#include <stdio.h>

int maior(int lista[], int tamanho) {
  int maior = lista[0]; // Supomos que o primeiro número seja o maior

  // Percorre a lista e compara cada número com o maior atual
  for (int i = 1; i < tamanho; i++) {
    if (lista[i] > maior) {
      maior = lista[i]; // Atualiza o maior número
    }
  }

  return maior; // Retorna o maior número encontrado
}

int main() {
  int tamanho;
  printf("Digite o tamanho da lista de números: ");
  scanf("%d", &tamanho); // Lê o tamanho da lista do usuário

  int lista[tamanho];

  printf("Digite os números:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &lista[i]); // Lê cada número da lista do usuário
  }

  int maior =
      maior(lista, tamanho); // Chama a função para encontrar o maior número
  printf("O maior número é: %d\n", maior); // Imprime o maior número encontrado

  return 0;
}
