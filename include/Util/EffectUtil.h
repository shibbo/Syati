#pragma once

#include "kamek.h"

class LiveActor;

namespace MR
{
    void addEffect(LiveActor *, const char *);
    void emitEffect(LiveActor *, const char *);
    void deleteEffect(LiveActor *, const char *);
};