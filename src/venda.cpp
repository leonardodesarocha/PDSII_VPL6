// TODO implemente essa classe de acordo com o hpp correspondente

#include <iostream>
#include <list>
#include "venda.hpp"

void Venda::adicionaPedido(Pedido* p) {
    _pedidos.push_back(p);
}

Venda::~Venda() {
    for(auto it = _pedidos.begin(); it != _pedidos.end(); ++it) {
        delete *it;
    }
}

void Venda::imprimeRelatorio() const {
    int i = 1;
    float somaVendas = 0;
    for(auto it = _pedidos.begin(); it != _pedidos.end(); ++it) {
        std::cout<<"Pedido "<<i<<"\n"<<(*it)->resumo()<<"\n";
        i++;
    }
    
    for(auto it = _pedidos.begin(); it != _pedidos.end(); ++it) {
        somaVendas += (*it)->calculaTotal();
    }
    std::cout.precision(2);
    std::cout<<"Relatorio de Vendas\nTotal de vendas: R$";
    std::cout <<std::fixed<<somaVendas;
    std::cout<<"\nTotal de pedidos: "<<i - 1;
}
