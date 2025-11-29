@class NSArray, NSString;

@interface HMDMatrixConfig : HMDModuleConfig

@property (nonatomic) BOOL isVCLevelEnabled;
@property (nonatomic) BOOL isEventTimeEnabled;
@property (nonatomic) BOOL isCrashUploadEnabled;
@property (nonatomic) BOOL isMemoryPressureUploadEnabled;
@property (nonatomic) BOOL isWatchDogUploadEnabled;
@property (nonatomic) BOOL isEnforceUploadEnabled;
@property (nonatomic) BOOL isAsyncStackEnabled;
@property (nonatomic) BOOL isOOMSubtypeUploadEnabled;
@property (nonatomic) unsigned long long minGenerateMinuteInterval;
@property (nonatomic) unsigned long long maxTimesPerDay;
@property (nonatomic) unsigned long long minRemainingDiskSpaceMB;
@property (nonatomic) BOOL isVCTimestampEnabled;
@property (nonatomic) BOOL enableStartTask;
@property (retain, nonatomic) NSArray *keyClassPrefix;
@property (retain, nonatomic) NSArray *keyClassSuffix;
@property (nonatomic) BOOL isMemoryGraphUploadNow;
@property (nonatomic) unsigned long long maxFileSizeMB;
@property (nonatomic) BOOL isStrategyOptEnable;
@property (nonatomic) BOOL isDelayStartEnabled;
@property (nonatomic) BOOL isThreadNameEnabled;
@property (nonatomic) BOOL isCustomDumpUploadNow;
@property (nonatomic) BOOL isCustomDumpUploadMemoryTrend;
@property (nonatomic) BOOL isSkipSharedMemory;
@property (nonatomic) BOOL isSamplingEnable;
@property (nonatomic) unsigned int samplingStrategy;
@property (nonatomic) unsigned int samplingMemorySize;
@property (nonatomic) unsigned int samplingRate;
@property (nonatomic) int maxBufferCount;
@property (nonatomic) int bufferSize;
@property (nonatomic) BOOL isOOMStartEnabled;
@property (nonatomic) BOOL isAppOOMStartEnabled;
@property (nonatomic) int startInterval;
@property (nonatomic) int refineDumpInterval;
@property (nonatomic) BOOL refineDumpEnable;
@property (nonatomic) int refineDumpType;
@property (nonatomic) int splayThreshold;
@property (nonatomic) BOOL isUpdateDirtySize;
@property (copy, nonatomic) NSString *customUploadChannel;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)canStartTaskIndependentOfStart;
- (void).cxx_destruct;

@end
