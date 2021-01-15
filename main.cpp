#include <"memory.h">
Memory memory;

//Reading shit:
int hue = memory.read<int>(0x1337, 1); 
//Where "0x1337" is the address and "1" is the default value.

//Writing shit:
memory.write<float>(0x1337, 0.1f);
memory.add<int>(0x1337, 2);
//etc etc, and you can also do:
if(memory.divide<float>(Player.m_health, 5)//Pretty stupid lol, but just as example
{
//successfull
}
else
{
//didn't work ;/
}
