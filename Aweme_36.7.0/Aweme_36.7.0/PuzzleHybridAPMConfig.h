@class PuzzleHybridMemoryConfig, PuzzleHybridCppObjectConfig, PuzzleHybridFPSConfig, PuzzleHybridOcObjectConfig, PuzzleHybridMemWarningConfig, PuzzleHybridTemperatureConfig, PuzzleHybridCPUConfig, PuzzleHybridJSThreadConfig, PuzzleHybridLynxFPSConfig, PuzzleHybridJSCObjectConfig;

@interface PuzzleHybridAPMConfig : NSObject

@property (nonatomic) unsigned long long sampleLevel;
@property (retain, nonatomic) PuzzleHybridMemoryConfig *memoryConfig;
@property (retain, nonatomic) PuzzleHybridCPUConfig *cpuConfig;
@property (retain, nonatomic) PuzzleHybridJSCObjectConfig *jscObjectConfig;
@property (retain, nonatomic) PuzzleHybridCppObjectConfig *cppObjectConfig;
@property (retain, nonatomic) PuzzleHybridOcObjectConfig *ocObjectConfig;
@property (retain, nonatomic) PuzzleHybridMemWarningConfig *warningConfig;
@property (retain, nonatomic) PuzzleHybridJSThreadConfig *lynxThreadConfig;
@property (retain, nonatomic) PuzzleHybridLynxFPSConfig *lynxFPSConfig;
@property (retain, nonatomic) PuzzleHybridTemperatureConfig *temperatureConfig;
@property (retain, nonatomic) PuzzleHybridFPSConfig *fpsConfig;

- (void).cxx_destruct;

@end
