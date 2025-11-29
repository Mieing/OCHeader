@class NSArray, NSString;

@interface MMMemoryStatConfig : NSObject

@property (nonatomic) int skipMinMallocSize;
@property (nonatomic) int skipMaxStackDepth;
@property (nonatomic) int dumpCallStacks;
@property (nonatomic) BOOL isUserPathEnabled;
@property (nonatomic) unsigned long long maxFileSizeMB;
@property (nonatomic) BOOL isThreadNameEnabled;
@property (nonatomic) BOOL isCustomDumpUploadNow;
@property (nonatomic) BOOL isCustomDumpUploadMemoryTrend;
@property (retain, nonatomic) NSArray *keyClassPrefix;
@property (retain, nonatomic) NSArray *keyClassSuffix;
@property (nonatomic) BOOL isCPUInfoUploadEnable;
@property (nonatomic) int cpuInfoInterval;
@property (nonatomic) BOOL isSkipSharedMemory;
@property (nonatomic) BOOL samplingEnable;
@property (nonatomic) unsigned int samplingStrategy;
@property (nonatomic) unsigned int samplingMemorySize;
@property (nonatomic) unsigned int samplingRate;
@property (nonatomic) int maxBufferCount;
@property (nonatomic) int bufferSize;
@property (nonatomic) BOOL isStrategyOptEnable;
@property (nonatomic) BOOL isEventTimeEnables;
@property (nonatomic) unsigned long long minGenerateMinuteInterval;
@property (nonatomic) unsigned long long maxTimesPerDay;
@property (nonatomic) int refineDumpInterval;
@property (nonatomic) BOOL refineDumpEnable;
@property (nonatomic) int refineDumpType;
@property (nonatomic) int splayThreshold;
@property (nonatomic) BOOL isUpdateDirtySize;
@property (copy, nonatomic) NSString *customUploadChannel;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
