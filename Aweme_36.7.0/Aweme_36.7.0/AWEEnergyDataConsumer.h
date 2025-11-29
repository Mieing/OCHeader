@class NSDictionary, NSMutableDictionary;

@interface AWEEnergyDataConsumer : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) double launchCPU;
@property (nonatomic) double enterForegroundTime;
@property (nonatomic) double periodCPUSum;
@property (nonatomic) long long periodCPUCount;
@property (nonatomic) double periodGPUSum;
@property (nonatomic) long long periodGPUCount;
@property (nonatomic) BOOL enableAllUserReport;
@property (nonatomic) double lastEnergyConsumeAvgTime;
@property (nonatomic) double energyConsumeSumTime;
@property (nonatomic) double energyConsumeCount;
@property (nonatomic) double minuteUsageSum;
@property (nonatomic) double minuteUsageCount;
@property (retain, nonatomic) NSDictionary *lastGPUDistributionMap;
@property (retain, nonatomic) NSMutableDictionary *CPUDistributionMap;
@property (retain, nonatomic) NSMutableDictionary *GPUDistributionMap;
@property (nonatomic) double CPUCount;
@property (nonatomic) double GPUCount;
@property (retain, nonatomic) NSMutableDictionary *CPUSceneCountMap;
@property (retain, nonatomic) NSMutableDictionary *GPUSceneCountMap;
@property (retain, nonatomic) NSMutableDictionary *reportMap;

+ (id)shared;

- (void)onAppEnterBackground;
- (void)onAppDidActive;
- (void)clearPeriodXPUData;
- (void)receiveNewEnergyConsumeTimeData:(double)a0 levelDiff:(double)a1;
- (double)getPeriodCPUAverageData;
- (double)getPeriodGPUAverageData;
- (void)receiveNewMinuteUsageData:(double)a0;
- (void)reportLastAverageData;
- (void)judgeCPUBackToNormal:(double)a0 processorCount:(unsigned long long)a1;
- (void)recordPeriodAverageData:(double)a0 gpu:(double)a1;
- (void)recordLifeCycleCPUDistribution:(double)a0 scene:(id)a1;
- (void)recordLifeCycleGPUDistribution:(double)a0 scene:(id)a1;
- (void)recordBrightness:(double)a0 volume:(double)a1 batteryState:(long long)a2 thermalState:(long long)a3;
- (void)countIncreaseForKey:(id)a0;
- (void)notifyCPUDidFallback;
- (double)getLastConsumeTimeData;
- (id)getLifeCycleGPUMapData;
- (void)receiveNewCPUData:(double)a0 gpu:(double)a1 processorCount:(unsigned long long)a2 brightness:(double)a3 volume:(double)a4 batteryState:(long long)a5 thermalState:(long long)a6 scene:(id)a7;
- (void).cxx_destruct;
- (id)init;

@end
