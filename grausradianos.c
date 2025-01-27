#include <stdio.h>
#include <math.h> 

// Função para converter graus em radianos
float areatrapezio(float B, float b, float h) {
    float area;
    area = ((B + b) * h) / 2;
    return area;
}

int main() {
    float B, b, h;
    float resultado; 

    printf("Insira a base maior: ");
    scanf("%f", &B);
    
    printf("Insira a base menor: ");
    scanf("%f", &b);
    
    printf("Insira a altura: ");
    scanf("%f", &h);
    

    resultado = areatrapezio(B, b, h);
    
    // Exibe o resultado
    printf("Area = %f\n", resultado);
    
    return 0;
}
