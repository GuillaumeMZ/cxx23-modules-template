export module mod;

import std;

export auto say_hello() noexcept -> void {
    std::println("Hello, world!");
}