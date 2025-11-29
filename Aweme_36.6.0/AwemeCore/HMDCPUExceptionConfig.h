@interface HMDCPUExceptionConfig : HMDModuleConfig

@property (nonatomic) float cpuThreshold;
@property (nonatomic) float threadUsageThreshold;
@property (nonatomic) long long sampleInterval;
@property (nonatomic) float powerConsumptionThreshold;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL threadSuspend;
@property (nonatomic) long long maxTreeDepth;
@property (nonatomic) BOOL enableEventCollect;
@property (nonatomic) BOOL enableThermalMonitor;
@property (nonatomic) float characterScale;
@property (nonatomic) BOOL enableCustomData;
@property (nonatomic) BOOL enableCustomFilters;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (long long)startWeight;
- (BOOL)canStart;

@end
