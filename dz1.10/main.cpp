#include "provader.h"


int main() {
    ReservoirProvider provider;

    provider.AddReservoir(Reservoir("Ozero ", "Ozero", 30, 5, 70));
    provider.AddReservoir(Reservoir("Sea", "Sea", 50, 30, 20));

    provider.PrintReservoirs();
    cout << endl;

    return 0;
}