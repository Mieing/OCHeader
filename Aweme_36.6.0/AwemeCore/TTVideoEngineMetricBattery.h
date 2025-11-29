@interface TTVideoEngineMetricBattery : TTVideoEngineMetricInfoBase

@property (nonatomic) float batteryUsage;
@property (nonatomic) long long lastThermalState;
@property (nonatomic) float lastBatteryLevel;
@property (nonatomic) BOOL lowPowerMode;
@property (nonatomic) long long batteryState;
@property (nonatomic) double startTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double startCriticalTime;
@property (nonatomic) double totalCriticalTime;
@property (nonatomic) double startSeriousTime;
@property (nonatomic) double totalSeriousTime;

@end
