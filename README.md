# Course code: COMP313

# Name: Meng Veng Taing

# Assignment: Assignment1

# Title: Poor man shooter

# Game Description

This is a simple AI shooter collection game. The game aims to collect at least 6 spheres that randomly spawn in the map while avoid getting hit by the AI. The player can also pick up the bullets around the map to destroy the enemy AI. The player can kill it with 3 shot.

The hardest part to implement for the game is the C++ code. I had created a pickup class
using the C++, however, the unreal engine coding system is a bit tricky as we need to declare
what type of property the class and method are. For this project, I had heavily used the pickup node I made in c++ with other blueprints in the project. There are many things I had to learn to get the c++ working in blueprint such as ensuring the UFunction are declared correct. 
(e.g. BlueprintCallable, BlueprintReadOnly)

The most interesting part of the game is having an enemy AI that can follow the character within their eyes sight. This is a pretty neat feature that UE4 has with its navigation mesh that we can set
for where the AI can follow. Another interesting part of the game is that all of the pickup objects and the AI
are spawning randomly within a volume.
 



## Controls:

Movement: WASD
Pause/Settings: p
Shoot: Left click
Run: Shift


