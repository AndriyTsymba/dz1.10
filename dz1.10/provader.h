
#ifndef PROVADER_H
#define PROVADER_H

#include "reserv.h"

class ReservoirProvider {
private:
    Reservoir* _reservoirs = nullptr;
    int _count;

public:
    ReservoirProvider();
    explicit ReservoirProvider(int count);

    void AddReservoir(const Reservoir& reservoir);

    void PrintReservoirs() const;

    ~ReservoirProvider();
};

#endif 