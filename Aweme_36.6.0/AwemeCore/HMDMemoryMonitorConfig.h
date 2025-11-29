@interface HMDMemoryMonitorConfig : HMDMonitorConfig

@property (nonatomic) BOOL enableNotify;
@property (nonatomic) unsigned long long notifyMinInterval;
@property (nonatomic) double highWaterPercentage;

+ (id)hmd_attributeMapDictionary;
+ (void)awe_energy_optimize_hook;
+ (id)configKey;

- (BOOL)canStart;
- (id)getModule;
- (BOOL)isPreferredIfDebug;
- (BOOL)awe_energy_optimize_canStart;

@end
