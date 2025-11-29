@interface HMDUITrackerConfig : HMDModuleConfig

@property (nonatomic) BOOL enableUIActionLog;
@property (nonatomic) BOOL enableMultiScenes;
@property (nonatomic) long long flushCount;
@property (nonatomic) double flushInterval;
@property (nonatomic) long long maxUploadCount;
@property (nonatomic) unsigned long long recentAccessScenesLimit;
@property (nonatomic) BOOL ISASwizzleOptimization;
@property (nonatomic) double vhFileCleaningCycle;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)isPreferredIfDebug;

@end
