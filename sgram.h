#ifndef SGRAM_H
#define SGRAM_H

#include "minion.h"
#include "battle.h"

class Sgram : public Minion
{
public:
    Sgram(int group, Battle *battle, QObject *parent);
};

#endif // SGRAM_H
