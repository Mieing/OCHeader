@class HMDMemoryMonitor;
@protocol RxInjector;

@interface __RTVSubMonitorMem : __RTVSubMonitorBase

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) HMDMemoryMonitor *memMonitor;
@property (readonly, nonatomic) unsigned long long awakeRecord;

- (void)rxAwakeFromPropertyInjection;
- (void)__handleMemoryWarningNotification:(id)a0;
- (id)fetchCurrentUtilization:(BOOL)a0;
- (unsigned long long)supportAggReasons;
- (BOOL)isEvaluationMonitor;
- (void)__observeMemoryWarning;
- (void).cxx_destruct;
- (void)dealloc;

@end
