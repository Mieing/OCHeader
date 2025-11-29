@class NSDictionary, NSMutableArray;

@interface __RTVSubMonitorGPU : __RTVSubMonitorBase

@property (readonly, nonatomic) NSMutableArray *records;
@property (readonly, copy, nonatomic) NSDictionary *gpuSettings;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)fetchCurrentUtilization:(BOOL)a0;
- (void)startSubMonitor;
- (unsigned long long)supportAggReasons;
- (void)__triggerMonitorWithReason:(id)a0;
- (void)__triggerMonitorIfNeeded:(id)a0;
- (double)__gpuThreshold;
- (double)__gpuGrowthRateBaseline;
- (double)__gpuGrowthRateThreshold;
- (BOOL)__keepZero;
- (BOOL)__isRecordValueZero:(id)a0;
- (id)__utilizationDict;
- (id)__filteredRecords;
- (void).cxx_destruct;

@end
