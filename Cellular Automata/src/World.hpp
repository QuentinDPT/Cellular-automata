#ifndef WORLD_HPP
#define WORLD_HPP

#include <vector>

class World
{
    public:
        World();
        World(unsigned int length, unsigned int width);
        virtual ~World();

        const bool& operator()(unsigned int i, unsigned int j){
            return (m_terrain[j*m_width+i]) ;
        }

        void evolve(unsigned int generation = 1) ;

    protected:

    private:
        unsigned int m_length ;
        unsigned int m_width ;

        std::vector<bool>  m_terrain ;

        // RULES
};

#endif // WORLD_HPPw
