
# Super Trunfo em C

Projeto em linguagem C que simula o jogo Super Trunfo com cartas de países, desenvolvido em três níveis de complexidade. O foco é o uso de estruturas de decisão (`if`, `else`, `switch`, operador ternário`) e menus interativos no terminal.

## 🔹 Níveis do Projeto

- **Nível Novato**  
  Comparação de duas cartas usando apenas um atributo fixo com `if`/`else`.

- **Nível Aventureiro**  
  Menu interativo permite ao jogador escolher o atributo de comparação. Uso de `switch` e estruturas aninhadas.

- **Nível Mestre**  
  Comparação de dois atributos escolhidos via menus dinâmicos. Uso do operador ternário e soma de atributos para definir o vencedor.

---

## 📌 Atributos das Cartas

- Estado  
- Nome da cidade  
- População (`int`)  
- Área (`float`)  
- PIB (`float`)  
- Número de pontos turísticos (`int`)  
- Densidade populacional (calculada)  
- PIB per capita (calculado)

---

## 🚀 Como Compilar

Use um compilador como `gcc`:

```bash
gcc -o super_trunfo super_trunfo.c
````

---

## ▶️ Como Executar

Após a compilação, execute o programa com:

```bash
./super_trunfo
```

---

## 💡 Exemplo de Uso (Nível Aventureiro)

```text
=== MENU SUPER TRUNFO ===
1. Comparar População
2. Comparar Área
3. Comparar PIB
4. Comparar Densidade Populacional
5. Comparar PIB per capita

Escolha uma opção: 1

Comparando cartas (População):
Carta 1 - São Paulo: 12.300.000
Carta 2 - Rio de Janeiro: 6.000.000
Resultado: Carta 1 venceu!
```

---

## 🧾 Observações

* Os dados das cartas são pré-definidos no código.
* A entrada do usuário (nos níveis mais avançados) é feita por menu no terminal.
* Empates são tratados e informados ao jogador.
* O código está comentado e organizado para facilitar a leitura e manutenção.

---
