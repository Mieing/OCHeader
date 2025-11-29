@class NSDictionary, NSString;

@interface AWEEnergyLeakTimerOptimizer : NSObject <AWECPULevelObserverProtocol>

@property (nonatomic) BOOL enable;
@property (nonatomic) double staticTolerance;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) double dynamicTolerance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (BOOL)enableTolerance;
- (double)getTolerance:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
