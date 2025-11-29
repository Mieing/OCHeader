@interface HMDControllerTimingConfig : HMDModuleConfig

@property (nonatomic) float flushInterval;
@property (nonatomic) long long flushCount;

+ (id)hmd_attributeMapDictionary;
+ (void)awe_energy_optimize_hook;
+ (id)configKey;

- (BOOL)canStart;
- (id)getModule;
- (BOOL)awe_energy_optimize_canStart;

@end
