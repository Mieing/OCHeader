@class NSDictionary;

@interface WCMemoryStatConfig : MatrixPluginConfig

@property (nonatomic) BOOL loggerZoneEnable;
@property (nonatomic) BOOL allocationsMemgraphEnable;
@property (nonatomic) int leaksSampleFactor;
@property (nonatomic) int vmRegionsDumpInterval;
@property (nonatomic) unsigned int webkitVMTag;
@property (nonatomic) BOOL webkitDumpStack;
@property (nonatomic) BOOL objectTraceEnable;
@property (nonatomic) unsigned long long reportStrategy;
@property (retain, nonatomic) NSDictionary *observedCategories;
@property (retain, nonatomic) NSDictionary *memgraphCategories;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
