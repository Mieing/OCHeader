@class NSDictionary, NSArray, HMDCustomEventFrequencyDetectSetting;

@interface HMDCustomEventSetting : HMDBaseConfig

@property (retain) NSDictionary *allowedLogTypes;
@property (retain) NSDictionary *allowedServiceTypes;
@property (retain) NSDictionary *allowedMetricTypes;
@property (nonatomic) BOOL needHookTTMonitor;
@property (nonatomic) BOOL enableEventTrace;
@property (copy, nonatomic) NSArray *serviceTypeBlacklist;
@property (copy, nonatomic) NSArray *logTypeBlacklist;
@property (retain, nonatomic) NSArray *serviceHighPriorityList;
@property (retain, nonatomic) NSArray *logTypeHighPriorityList;
@property (retain, nonatomic) NSDictionary *customAllowLogType;
@property (retain, nonatomic) HMDCustomEventFrequencyDetectSetting *frequencyDetectSetting;
@property (nonatomic) BOOL enableEventCounter;

+ (id)hmd_attributeMapDictionary;

- (void)hmd_setAttributes:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
