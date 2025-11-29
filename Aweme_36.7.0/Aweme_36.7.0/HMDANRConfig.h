@class NSString, NSDictionary;

@interface HMDANRConfig : HMDTrackerConfig

@property (nonatomic) long long maxUploadCount;
@property (nonatomic) BOOL enableSample;
@property (nonatomic) double sampleTimeoutInterval;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL ignoreBacktrace;
@property (nonatomic) BOOL suspend;
@property (nonatomic) int maxContinuousReportTimes;
@property (nonatomic) double startSampleInterval;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (nonatomic) BOOL ignoreBackground;
@property (retain, nonatomic) NSString *smartConfig;
@property (retain, nonatomic) NSDictionary *smartDict;
@property (nonatomic) BOOL enableANRMonitorV2;
@property (nonatomic) BOOL enableRunloopMonitorV2;
@property (nonatomic) unsigned long long runloopMonitorThreadSleepInterval;
@property (nonatomic) unsigned long long maxBacktraceThreadCount;

+ (id)hmd_attributeMapDictionary;
+ (void)awe_energy_optimize_hook;
+ (id)configKey;

- (id)getModule;
- (long long)startWeight;
- (BOOL)awe_energy_optimize_enableRunloopMonitorV2;
- (unsigned long long)awe_energy_optimize_runloopMonitorThreadSleepInterval;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)canStart;

@end
