typedef struct UTILIZADOR UTILIZADOR;
struct UTILIZADOR
{
	string nome;
	string password;

}

typedef struct ITEM ITEM;
struct ITEM
{
	string nome;
	int id;
	int valor;
	int valorCompreJa;
	string categoria;

}
typedef struct LEILAO LEILAO;
struct LEILAO
{
	int id_item;
	ITEM *items;//ponteiro para a lista de items
}