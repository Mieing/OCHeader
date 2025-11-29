@interface FinderClientPerformance : WXPBGeneratedMessage

@property (nonatomic) unsigned int gpuScore;
@property (nonatomic) unsigned int lowPowerMode;
@property (nonatomic) unsigned int thermalState;
@property (nonatomic) unsigned int batteryInfo;
@property (nonatomic) unsigned int batteryChargeInfo;
@property (nonatomic) unsigned int cpuUsage;
@property (nonatomic) unsigned int deviceCpuUsage;

+ (void)initialize;

@end
