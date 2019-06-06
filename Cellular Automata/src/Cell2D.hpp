#ifndef CELL2D_HPP
#define CELL2D_HPP

#include <vector>

class Cell2D
{
    public:
        Cell2D();
        Cell2D(unsigned int sequence_length, unsigned int sequence_width, uint8_t rule);
        Cell2D(unsigned int sequence_length, unsigned int sequence_width, uint8_t rule, bool* sequence);
        virtual ~Cell2D();

        void evolve(unsigned int nb_evolution = 1) ;
        void evolve(unsigned int nb_evolution, ? rule) ;

        void display() ;

    protected:

    private:
        ? RULE ;

        unsigned int m_generation ;

        unsigned int m_sequence_length ;
        unsigned int m_sequence_width ;

        std::vector<bool> m_sequence ;
};

#endif // CELL2D_HPP
