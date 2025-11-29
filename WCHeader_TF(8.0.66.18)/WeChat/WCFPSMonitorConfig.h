@interface WCFPSMonitorConfig : MatrixPluginConfig

@property (nonatomic) unsigned long long trackingType;
@property (nonatomic) BOOL dumpStacks;
@property (nonatomic) BOOL autoUpload;
@property (nonatomic) int dumpInterval;
@property (nonatomic) int dumpMaxCount;
@property (nonatomic) double maxFrameInterval;
@property (nonatomic) double maxDumpTimestamp;
@property (nonatomic) double powFactor;

+ (id)defaultConfigurationForScroll;
+ (id)defaultConfigurationForPreScroll;
+ (id)defaultConfigurationForTransition;

@end
