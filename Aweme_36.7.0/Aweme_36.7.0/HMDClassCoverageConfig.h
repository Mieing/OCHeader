@interface HMDClassCoverageConfig : HMDModuleConfig

@property (nonatomic) double checkInterval;
@property (nonatomic) BOOL wifiOnly;
@property (nonatomic) unsigned long long devicePerformanceLevelThreshold;
@property (nonatomic) BOOL uploadDataByStartTask;
@property (nonatomic) BOOL swiftCheckDisable;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
