@class NSDictionary, NSArray, NSString;

@interface IESGCPPerformanceOptimizationComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGPerformanceOptimizationRouter>

@property (copy, nonatomic) NSDictionary *optimizationConfig;
@property (copy, nonatomic) NSArray *strategys;
@property (nonatomic) double executeStrategyTime;
@property (nonatomic) BOOL needSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)componentDidAttached;
- (BOOL)isRunningNormally;
- (void)reportStrategyRunningResultWithStep:(id)a0 isRealHit:(BOOL)a1 msg:(id)a2;
- (void)parseStrategy;
- (BOOL)shouldRunning;
- (void)runningStrategy:(id)a0;
- (id)createStrategy:(id)a0;
- (BOOL)_smartSwitch;
- (BOOL)_isHitCore;
- (BOOL)isColdTime;
- (void)executeStrategy:(id)a0;
- (long long)calculatePeakTimeParam:(long long)a0 actionModel:(id)a1;
- (long long)calculateParam:(long long)a0 actionModel:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEnabled;

@end
