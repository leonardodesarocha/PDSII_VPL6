// TODO implemente essa classe de acordo com o hpp correspondente

#include <string>
#include <vector>
#include "acai.hpp"

Acai::Acai(int tamanho, std::vector<std::string>& complementos, int qtd) {
    _tamanho = tamanho;
    _complementos = complementos;
    _quantidade = qtd;
}

float Acai::calcPreco() {
    return ( (_tamanho * 0.02) + (_complementos.size() * 2) ) * _quantidade;
}

std::string Acai::descricao() const {
    int i = _complementos.size();
    std::string str = std::to_string(_quantidade) + ("X açai ") + std::to_string(_tamanho) + ("mL com ");
    for(std::vector<std::string>::const_iterator it = _complementos.begin(); it != _complementos.end(); ++it){
        str += *it;
        if(i != 0)
            str += (", ");
        else
            str += (".");
    }
    return str;       
}
