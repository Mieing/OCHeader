@class NSDictionary, HMDCPUMonitor, NSMutableArray, NSNumber;
@protocol RxInjector;

@interface __RTVSubMonitorCPU : __RTVSubMonitorBase

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) HMDCPUMonitor *cpuMonitor;
@property (readonly, nonatomic) NSMutableArray *records;
@property (readonly, copy, nonatomic) NSDictionary *cpuSettings;
@property (retain, nonatomic) NSNumber *startTiming;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)fetchCurrentUtilization:(BOOL)a0;
- (void)startSubMonitor;
- (unsigned long long)supportAggReasons;
- (double)__cpuThreshold;
- (void)__triggerMonitorWithReason:(id)a0;
- (double)__cpuGrowthRateBaseline;
- (double)__cpuGrowthRateThreshold;
- (id)__fetchRecord;
- (void)__triggerMonitorIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
