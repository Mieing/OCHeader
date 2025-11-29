@class PuzzleHybridPrefSampleMemoryInfo, PuzzleHybridPrefSampleCpuInfo;

@interface PuzzleHybridPrefSampleInfo : NSObject

@property (retain, nonatomic) PuzzleHybridPrefSampleCpuInfo *cpu;
@property (retain, nonatomic) PuzzleHybridPrefSampleMemoryInfo *pss;
@property (nonatomic) double temperature;

- (id)toDictinary;
- (void).cxx_destruct;

@end
