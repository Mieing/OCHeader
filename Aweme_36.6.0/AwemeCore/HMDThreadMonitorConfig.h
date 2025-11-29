@class NSArray, NSDictionary;

@interface HMDThreadMonitorConfig : HMDModuleConfig

@property (nonatomic) BOOL enableThreadCount;
@property (nonatomic) long long threadCountThreshold;
@property (nonatomic) BOOL enableSpecialThreadCount;
@property (nonatomic) long long specialThreadThreshold;
@property (nonatomic) BOOL enableThreadSample;
@property (nonatomic) long long threadSampleInterval;
@property (copy, nonatomic) NSArray *businessList;
@property (copy, nonatomic) NSDictionary *specialThreadWhiteList;
@property (nonatomic) BOOL enableBacktrace;
@property (nonatomic) long long countAnalysisInterval;
@property (nonatomic) BOOL enableThreadInversionCheck;
@property (nonatomic) BOOL enableObserverSubThreadRunloop;
@property (copy) NSArray *subThreadRunloopNameList;
@property (nonatomic) long long subThreadRunloopTimeoutDuration;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
