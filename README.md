# Simulador de Estacionamento (Tema 8) — Programação Estruturada em C

Projeto desenvolvido para a disciplina de **Programação Estruturada (Linguagem C)**, implementando um simulador de estacionamento em modo texto com controle de vagas, cobrança por tempo de permanência, histórico de movimentações e persistência em arquivo.

## Estrutura do Repositório

* `include/`: cabeçalhos (`.h`) com tipos, constantes, regras de negócio, persistência e interface em terminal.
* `src/`: arquivos-fonte (`.c`) modulares (`main.c`, `operacoes.c`, `persistencia.c`, `terminal.c`).
* `data/`: arquivo de exemplo com dados simulados (sem dados pessoais reais).
* `docs/`: documentação técnica, diagrama de módulos e plano de testes.

## Como Compilar

Usando `gcc` no padrão C11 com avisos estritos:

```bash
gcc -std=c11 -Wall -Wextra -pedantic -Iinclude src/main.c src/operacoes.c src/persistencia.c src/terminal.c -o simulador_estacionamento -lm