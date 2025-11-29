@interface HMDTrackerConfig : HMDModuleConfig

@property (nonatomic) float flushInterval;
@property (nonatomic) long long flushCount;

+ (id)hmd_attributeMapDictionary;

@end
