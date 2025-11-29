@class HighFreqAllocConfig, CPULevelConfig, CPUUsageConfig, HangConfig, MemorySpikeConfig;

@interface TraceMetaMonitorConfig : TraceMetaPluginConfig {
    CPUUsageConfig *_cpu_usage;
    CPULevelConfig *_cpu_level;
    MemorySpikeConfig *_mem_spike;
    HighFreqAllocConfig *_high_freq_alloc;
    HangConfig *_hang;
}

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
