#include "Cell1D.hpp"
#include <iostream>

Cell1D::Cell1D()
{
    //ctor
}

Cell1D::Cell1D(unsigned int sequence_size, uint8_t rule) :
    m_rule(rule), m_sequence(std::vector<bool>(sequence_size)), m_generation(0)
{
    m_sequence[sequence_size/2] = true ;

}


Cell1D::Cell1D(unsigned int sequence_size, uint8_t rule, bool* sequence) :
    m_sequence(std::vector<bool>(sequence,sequence+sequence_size)), m_rule(rule), m_generation(0)
{

}


Cell1D::~Cell1D()
{
    //dtor
}

void Cell1D::evolve(unsigned int nb_evolution){
    bool prev = m_sequence[0] ;
    m_generation++ ;
    for(unsigned int i = 1 ; i<m_sequence.size()-1 ; i++){
        uint8_t prev_sequence = 0 ;
        if(prev == true)
            prev_sequence = 1 ;
        prev_sequence = prev_sequence<<1 ;
        if(m_sequence[i] == true)
            prev_sequence += 1 ;
        prev_sequence = prev_sequence<<1 ;
        if(m_sequence[i+1] == true)
            prev_sequence += 1 ;

        //std::cout << "prev code : " << std::oct << (int)prev_sequence << std::dec << "(" << (int)prev_sequence << ")" << std::endl ;

        prev = m_sequence[i] ;

        if(1<<prev_sequence & m_rule){
            m_sequence[i] = true ;
        }else{
            m_sequence[i] = false ;
        }
    }
    if(nb_evolution > 1)
        evolve(nb_evolution -1) ;
}

void Cell1D::evolve(unsigned int nb_evolution, uint8_t rule){
    m_rule = rule ;
    evolve(nb_evolution) ;
}

void Cell1D::display(){
    for(int i = 0 ; i<m_sequence.size() ; i++){
        if(m_sequence[i] == true)
            std::cout << char(219) ;
        else
            std::cout << " " ;
    }
    std::cout << std::endl ;
}
