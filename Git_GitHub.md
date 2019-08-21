# Git

O Git é um Sistema de Versionamento de Arquivos, ou seja, é um sistema que gerencia o estado e as mudanças que ocorrem em qualquer tipo de arquivo.

## Começando com o Git
* [Git init](#Git-init)
* [Git status](#Git-Status)
* [Git add](#Git-add)
* [Git commit](#Git-commit)


### Git init 

Para que um repositório(Pasta) seja gerenciado pelo Git é necessário que iniciemos um "respositório Git", então para iniciarmos o Git, devemos abrir nosso terminal e usar o comando:
```console
    user@user-pc:~/Documents/Folder$ git init 
```
### Git Status
Após iniciarmos um repositório git, todos os arquivos naquela pasta começam a ser monitorados pelo git. 
Para vermos o estado de determinados arquivo usamos: 

```console
    user@user-pc:~/Documents/Folder$ git status 
```
Com a checagem de estado, temos a seguinte resposta: 

```console
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)

	text.txt

nothing added to commit but untracked files present (use "git add" to track)
```

Com a resposta podemos notar 3 coisas:

1. Estamos no "branch" principal (master).
1. Há um arquivo modificado ou recém adicionado chamado `Text.txt`.
1. Alguns comandos para podermos atualizarmos o repositório.

### Git add

Quando temos um *Untracked File* significa que este arquivo não está sendo gerenciado pelo Git, e para adicionarmos ele dentro do nosso repositório Git devemos fazer o uso de um dos seguintes comandos:

```console
    user@user-pc:~/Documents/Folder$ git add Text.txt 
    user@user-pc:~/Documents/Folder$ git add .
    user@user-pc:~/Documents/Folder$ git add -A
```
1. `git add 'file_name.format'` - Adiciona apenas o arquivo digitado
2. `git add . ` - Adiciona todos os arquivos e novas alterações
3. `git add -A` - Adiciona todas as mudanças feitas (seja modificações, alterações e até remoções e arquivos)

### Git commit

Após adicionarmos os nossos arquivos e/ou nossas mudanças realizadas nos arquivos, devemos `commitar` para então criarmos uma 'versão' da nossa pasta, ou seja, nesse `commit` teremos tais arquivos de tais formas. Além disso sempre devemos descrever o que foi feito ou o que foi adicionado nesse `commit`, e para `commitarmos` algo, usamos o seguinte comando:

```console
    user@user-pc:~/Documents/Folder$ git commit -m "alguma descrição aqui" 
```
__aviso__ : Caso você não coloque o '`-m`' o git irá abrir o seu editor de texto padrão, ou o vim/nano no seu terminal para poder então receber uma mensagem descrevendo tal `commit`.

Após o `commit` toda alteração nos arquivos será comparada com a ultima versão do arquivo que foi `commitada`. Alguns editores de código como o _Visual Studio Code_ mostra onde está sendo feito adições ou remoções no arquivo do `commit` anterior

# GitHub

O GitHub é uma plataforma de hospedagem de código fonte com controle de versionamento Git. Tecnicamente é uma versão remota do Git, ou seja, você tem o seu repositório local Git e pode enviar seus arquivos para um repositório remoto GitHub, armazenando suas versões na nuvem.

### Git remote 

O `remote` do git, se refece aos repositórios remotos ligados ao seu repositório local.

Para adicionar um novo repositório remoto execute o seguinte comando no seu repositório:

```console
git remote add apelido_rep https://github.com/usuario/exemplo.git
```

> O apelido do repositório normalmente é dado como _Origin_ caso seja o repositório remoto principal.

###  Git push

O comando `push` é usado para "empurrar" os arquivos que estão no repositório local para o repositório remoto

```console
git push origin master
```

Nesse exemplo nós damos um `push` para que os arquivos que estão no master ( git local ) sejam enviados para o origin ( git remoto ).

### Git pull 

O comando `pull` é usado para "puxar" os arquivos que estão no repositório remoto para o repositório local, ou seja, caso você tenha feito a alteração a partir de outro maneira, e necessita das modificações no seu repositório local, faça:

```console
git pull 
```

### Git clone

Caso seja necessário fazer uma cópia de um repositório remoto, use o `git clone` + o link do repositório remoto + .git, então:
 
```console
git clone https://github.com/usuario/exemplo.git
```

Com isso o seu computdor irá gerar uma nova pasta com todos os arquivos do repositório que você clonou.