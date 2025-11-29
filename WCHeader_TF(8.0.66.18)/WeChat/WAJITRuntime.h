@class MMTimer, WAJITBindingEnv;

@interface WAJITRuntime : JITRuntime

@property (retain, nonatomic) MMTimer *perfTimer;
@property (nonatomic) struct { long long fps; long long fpsEx; long long time; long long drawcall; long long vertex; long long triangle; long long jank; long long bigJank; long long stutter; long long jankPerSecond; long long bigJankPerSecond; long long stutterPerSecond; } performance;
@property (nonatomic) long long jankTime;
@property (nonatomic) long long renderTime;
@property (retain, nonatomic) WAJITBindingEnv *bindingEnv;

- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; })getPerformance;
- (void)onTimer;
- (void)startPerformanceLogic;
- (void)stopPerformanceLogic;
- (void)resetJankInfo;
- (id)init;
- (id)initWithBaseUrl:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
