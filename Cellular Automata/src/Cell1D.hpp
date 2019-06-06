#ifndef CELL1D_Hpp
#define CELL1D_Hpp

#include <vector>
#include <cstdint>

class Cell1D
{
    public:
        Cell1D();
        Cell1D(unsigned int sequence_size, uint8_t rule);
        Cell1D(unsigned int sequence_size, uint8_t rule, bool* sequence);
        virtual ~Cell1D();

        void evolve(unsigned int nb_evolution = 1) ;
        void evolve(unsigned int nb_evolution, uint8_t rule) ;

        void display() ;

    protected:

    private:
        uint8_t m_rule ;
        std::vector<bool> m_sequence ;
        unsigned int m_generation ;
};

#endif // CELL1D_Hpp
