@class NSString;

@interface AWESiriPerformanceMonitor : NSObject <AWECPULevelObserverProtocol>

@property long long cpuLevel;
@property int appMemoryLevel;
@property int systemMemoryLevel;
@property long long thermalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (unsigned long long)currentResourceLevel;
- (void)setupMemoryMonitor;
- (void)setupThermalMonitor;
- (BOOL)isCriticalPressure;
- (BOOL)isHighPressure;
- (void)onThermalStateDidChange;
- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (BOOL)isLowPowerModeEnabled;
- (void)dealloc;
- (void)startMonitor;

@end
