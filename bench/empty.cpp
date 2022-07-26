#include "benchmark/benchmark.h"
#include "demogobbler.h"

static void null_pointer(benchmark::State& state)
{
    demogobbler_settings settings;
    demogobbler_settings_init(&settings);

    for(auto _ : state)
    {
        demogobbler_parse_file(&settings, NULL);
    }
}

BENCHMARK(null_pointer);