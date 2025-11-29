@interface VQMProfileInfoMatrix : WXPBGeneratedMessage

@property (nonatomic) unsigned long long deviceCpuAverage;
@property (nonatomic) unsigned long long deviceCpuFinal;
@property (nonatomic) unsigned long long appCpuAverage;
@property (nonatomic) unsigned long long appCpuFinal;
@property (nonatomic) unsigned long long appMemoryAverage;
@property (nonatomic) unsigned long long appMemoryFinal;
@property (nonatomic) unsigned long long betteryBegin;
@property (nonatomic) unsigned long long betteryFinal;
@property (nonatomic) unsigned long long gpuDeviceUtilizationAverage;
@property (nonatomic) unsigned long long gpuDeviceUtilizationFinal;
@property (nonatomic) unsigned long long gpuRendererUtilizationAverage;
@property (nonatomic) unsigned long long gpuRendererUtilizationFinal;
@property (nonatomic) unsigned long long gpuTilerUtilizationAverage;
@property (nonatomic) unsigned long long gpuTilerUtilizationFinal;
@property (nonatomic) int thermalStateBegin;
@property (nonatomic) int thermalStateFinal;
@property (nonatomic) unsigned long long timestampThermalStateChangeToFairAtFirst;
@property (nonatomic) unsigned long long timestampThermalStateChangeToSeriousAtFirst;
@property (nonatomic) unsigned long long timestampThermalStateChangeToCriticalAtFirst;
@property (nonatomic) unsigned long long temperatureBegin;
@property (nonatomic) unsigned long long temperatureFinal;
@property (nonatomic) unsigned long long timestampTemperatureTooHighAtFirst;
@property (nonatomic) int reboot;
@property (nonatomic) unsigned long long countMainThreadLagged;
@property (nonatomic) int isMaybeSuspend;
@property (nonatomic) int batteryStateFinal;
@property (nonatomic) int batteryStateBegin;
@property (nonatomic) int isLowPowerModeEnableFinal;
@property (nonatomic) int isLowPowerModeEnableBegin;

+ (id)instanceFromMetricsInfo:(id)a0;
+ (id)instanceFromMetricsInfoInTheBeginning;
+ (id)instanceFromMetricsInfoInTheCurrent;
+ (id)instanceAfterCaculatingHardwareAverageWithProfileInfoCommon:(id)a0;
+ (void)initialize;

@end
