@interface FinderClientPerformance : WXPBGeneratedMessage

@property (nonatomic) unsigned int gpuScore;
@property (nonatomic) unsigned int lowPowerMode;
@property (nonatomic) unsigned int thermalState;
@property (nonatomic) unsigned int batteryInfo;
@property (nonatomic) unsigned int batteryChargeInfo;
@property (nonatomic) unsigned int cpuUsage;
@property (nonatomic) unsigned int deviceCpuUsage;

+ (void)initialize;

- (void)setDeviceCpuUsage:(unsigned int)a0;
- (unsigned int)deviceCpuUsage;
- (void)setCpuUsage:(unsigned int)a0;
- (unsigned int)cpuUsage;
- (void)setBatteryChargeInfo:(unsigned int)a0;
- (unsigned int)batteryChargeInfo;
- (void)setBatteryInfo:(unsigned int)a0;
- (unsigned int)batteryInfo;
- (void)setThermalState:(unsigned int)a0;
- (unsigned int)thermalState;
- (void)setLowPowerMode:(unsigned int)a0;
- (unsigned int)lowPowerMode;
- (void)setGpuScore:(unsigned int)a0;
- (unsigned int)gpuScore;

@end
