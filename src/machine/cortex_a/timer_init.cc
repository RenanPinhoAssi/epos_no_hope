// EPOS Cortex-A Timer Mediator Initialization

#include <machine/timer.h>
#include <machine/ic.h>

__BEGIN_SYS


void Timer::init()
{
    // ... PRECISA FAZER O INIT do ENGINE do Timer
    IC::int_vector(IC::INT_TIMER, int_handler);
    IC::enable(IC::INT_TIMER);
    // ... Engine::enable(); no cortex_m
}

__END_SYS
