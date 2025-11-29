@class RACSubject, IESLivePerfLevelJudger;

@interface IESLivePerfMonitor : NSObject

@property (retain, nonatomic) IESLivePerfLevelJudger *seriousLevel;
@property (retain, nonatomic) IESLivePerfLevelJudger *criticalLevel;
@property (retain, nonatomic) RACSubject *perfWarningSubject;
@property (nonatomic) long long cpuFreqSampleInterval;
@property (nonatomic) long long cpuFreqSampleMinInterval;
@property (nonatomic) double cpuFreqNextSampleTime;
@property (nonatomic) BOOL enableCpuFreqInLowPowerMode;

- (id)perfWarningSignal;
- (void)notifyIfNeed;
- (void)updateCpuFreq:(double)a0;
- (void)updateThermalState:(long long)a0;
- (void)updateFps:(long long)a0;
- (void)updateCpuUsage:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)setup;

@end
