# Pipe

## O que é?
Pipe é utilizado para comunicações entre processos. Neste exercício um processo filho é criado utilizando a função fork e le a mensagem escrita pelo processo pai.
## Pré-Requisitos
* linguagem C
* makefile
* seu editor de código de preferência
* sistema operacional Unix

Para testar na sua maquina rode o código usando o makefile que tem a opção de copilar, executa o código ao mesmo tempo do comando ps -l para obter os estados dos processos, além da opção de deletar o executável. 

```bash

make         " gcc 'NOME DO ARQUIVO'.c -o 'NOME DO EXECUTAVEL'" 

```
Para rodar o executável 
```bash

make run     "./'NOME DO EXECUTAVEL'"

```
Para remover o executável
```bash

make clean   "rm 'NOME DO EXECUTAVEL'"

```
