// TODO implemente essa classe de acordo com o hpp correspondente

#include <string>
#include <vector>
#include "cachorro_quente.hpp"

CachorroQuente::CachorroQuente(int num_salsichas, std::vector<std::string>& complementos, bool prensado, int qtd) {
    _num_salsichas = num_salsichas;
    _complementos = complementos;
    _prensado = prensado;
    _quantidade = qtd;
}

float CachorroQuente::calcPreco() {
    return ( 5 + (_num_salsichas * 1.5) + (_complementos.size() * 1) + (_prensado * 0.5 ) ) * _quantidade;
}

std::string CachorroQuente::descricao() const {
    std::string str = std::to_string(_quantidade);
    
    if(_prensado)
        str += ("X cachorro-quente prensado com ");
    else
        str += ("X cachorro-quente com ");
        
    str += (std::to_string(_num_salsichas)) + (" salsicha(s)");

    for(std::vector<std::string>::const_iterator it = _complementos.begin(); it != _complementos.end(); ++it)
        str += (", ") + (*it);
    str += (".");
    
    return str;       
}
