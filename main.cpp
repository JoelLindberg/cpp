#include <iostream>
#include <array>


// finite state machine
// https://www.aleksandrhovhannisyan.com/blog/implementing-a-finite-state-machine-in-cpp/
// https://en.cppreference.com/w/cpp/language/switch


enum LightState {
        Off = 0,
        Low = 1,
        Medium = 2,
        High = 3,
};

std::array<LightState, 4> states {
    LightState::Off,
    LightState::Low,
    LightState::Medium,
    LightState::High,
};

LightState state = states[0];

void toggle() {
    state = states[(state + 1) % states.size()];
}


int main() {

    std::cout << state << "\n";
    toggle();
    std::cout << state << "\n";
    toggle();
    std::cout << state << "\n";

    switch (state) {
        case 0:
            std::cout << "Off\n";
            break;
        case 1:
            std::cout << "Low\n";
            break;
        case 2:
            std::cout << "Medium\n";
            break;
        case 3:
            std::cout << "High\n";
            break;
        default:
            std::cout << "None";
    }

    return 0;
}


