@interface HMDCustomEventFrequencyDetectSetting : HMDBaseConfig

@property (nonatomic) BOOL enableOpen;
@property (nonatomic) BOOL enableBacktrace;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long reportInterval;

+ (id)hmd_attributeMapDictionary;
+ (BOOL)shouldLocalStoreConfigData;

@end
