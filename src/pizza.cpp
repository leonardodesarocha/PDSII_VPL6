// TODO implemente essa classe de acordo com o hpp correspondente

#include <string>
#include "pizza.hpp"

Pizza::Pizza(const std::string& sabor, int pedacos, bool borda_recheada, int qtd) {
    _sabor = sabor;
    _num_pedacos = pedacos;
    _borda_recheada = borda_recheada;
    _quantidade = qtd;
}


float Pizza::calcPreco() {
    bool especial = 0;
    size_t found = _sabor.find("especial");
        if(found != std::string::npos)
            especial = 1;
    return ( (_num_pedacos * 5) + (_borda_recheada * 10) + (especial * 8) ) * _quantidade;
}

std::string Pizza::descricao() const {
    std::string str = std::to_string(_quantidade);
    str.append("X pizza ");
    
    str.append(_sabor);
    str.append(", ");
    
    str.append(std::to_string(_num_pedacos));
    str.append(" pedaços");
    
    if(_borda_recheada)
        str.append(" e borda recheada.");
    else
        str.append(", sem borda recheada.");
    return str;
}