@class PuzzleHybridPrefSampleCpuInfo, PuzzleHybridPrefSampleMemoryInfo, PuzzleHybridAPMConfig, NSNumber;

@interface PuzzleHybridPrefSampler : NSObject

@property (retain, nonatomic) PuzzleHybridAPMConfig *config;
@property (retain, nonatomic) PuzzleHybridPrefSampleCpuInfo *lastCPUInfo;
@property (retain, nonatomic) PuzzleHybridPrefSampleMemoryInfo *lastMomeoryInfo;
@property (retain, nonatomic) NSNumber *lastCppObjectCollectTime;
@property (retain, nonatomic) NSNumber *lastOcObjectCollectTime;
@property (retain, nonatomic) NSNumber *lastRefreshTime;
@property (retain, nonatomic) NSNumber *lastThreadTime;

- (id)refreshAllSampleInfo;
- (id)refreshMemoryInfo;
- (void)refreshAllInstanceInfoCompletion:(id /* block */)a0;
- (void)refreshLynxThreadInfoCompletion:(id /* block */)a0;
- (id)refreshFPS:(double)a0;
- (void)immediatelyRefreshInstanceInfoCompletion:(id /* block */)a0;
- (void)setupSampler;
- (id)refreshCPUInfo;
- (double)refreshTemperature;
- (id)refreshJSCObjectCountInfo;
- (id)refreshCppObjectCountInfo;
- (id)refreshOcObjectCountInfo;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;

@end
