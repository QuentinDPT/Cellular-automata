#include "World.hpp"

World::World()
{
    //ctor
}

World::World(unsigned int length, unsigned int width) :
    m_length(length), m_width(width), m_terrain(std::vector<bool>(length*width))
{

}

World::~World()
{
    //dtor
}


void World::evolve(unsigned int generation){
    if(generation = 0)
        return ;

    for(unsigned int i = 0 ; i<m_width ; i++ )
    for(unsigned int j = 0 ; j<m_length ; j++ ){
        // Application of the rule

        //this(i,j) ;
    }

    evolve(generation-1) ;
}


