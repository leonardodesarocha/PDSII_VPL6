// TODO implemente essa classe de acordo com o hpp correspondente

#include <list>
#include "pedido.hpp"
    
Pedido::~Pedido() {
    for(auto it = _produtos.begin(); it != _produtos.end(); ++it) {
        delete *it;
    }
}

void Pedido::adicionaProduto(Produto* p) {
    _produtos.push_back(p);
}

float Pedido::calculaTotal() const {
    float soma = 0;
    for(std::list<Produto*>::const_iterator it = _produtos.begin(); it != _produtos.end(); ++it)
        soma += (*it)->calcPreco();
    return soma;
}

std::string Pedido::resumo() const {
    std::string str;
    for(auto it = _produtos.begin(); it != _produtos.end(); ++it)
        str += ((*it)->descricao()) + ("\n");
        
    str.append("Endereço: ");
    str.append(_endereco);
    return str;
}

void Pedido::setEndereco(const std::string& endereco) {
    _endereco = endereco;
}