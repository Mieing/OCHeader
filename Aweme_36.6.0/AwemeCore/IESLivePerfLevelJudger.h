@interface IESLivePerfLevelJudger : NSObject

@property (readonly, nonatomic) unsigned long long operator;
@property (readonly, nonatomic) long long fps;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double cpuFreqScale;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long fpsJudgeState;
@property (nonatomic) double fpsPendingTime;
@property (nonatomic) long long totalPendingFps;
@property (nonatomic) long long totalPendingFpsCount;
@property (nonatomic) unsigned long long thermalJudgeState;
@property (nonatomic) double thermalPendingTime;
@property (nonatomic) long long totalThermalCount;
@property (nonatomic) long long totalThermalHitCount;
@property (nonatomic) unsigned long long cpuFreqJudgeState;
@property (nonatomic) double cpuFreqPendingTime;
@property (nonatomic) long long totalPendingCpuFreq;
@property (nonatomic) long long totalPendingCpuFreqCount;

- (id)initWithInfo:(id)a0 level:(unsigned long long)a1 lint:(BOOL)a2;
- (void)judgeFps:(long long)a0;
- (void)judgeThermalState:(long long)a0;
- (void)judgeCpuFreqScale:(double)a0;
- (unsigned long long)currentJudgeState;
- (BOOL)validate;
- (void)reset;

@end
