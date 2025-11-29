@class WCStackTracePool;
@protocol WCPowerConsumeStackCollectorDelegate;

@interface WCPowerConsumeStackCollector : NSObject

@property (retain, nonatomic) WCStackTracePool *stackTracePool;
@property (weak, nonatomic) id<WCPowerConsumeStackCollectorDelegate> delegate;

- (id)initWithCPULimit:(float)a0;
- (void)dealloc;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)makeConclusion;
- (float)getCPUUsageAndPowerConsumeStack;
- (BOOL)isCPUHighBlock;
- (float)getCPUUsageAndCPUBlockStack;
- (int)getCurrentCpuHighStackNumber;
- (struct KSStackCursor **)getCPUStackCursor;
- (float *)getCpuHighThreadValueArray;
- (float)getTotCpuWithCostCpuThreadArray:(id)a0 andThreadCount:(unsigned int *)a1;
- (struct StackInfo { unsigned long long **x0; int *x1; })getStackInfoWithThreadCount:(unsigned int)a0 costCpuThreadList:(unsigned int *)a1 costCpuValueList:(float *)a2;
- (void).cxx_destruct;

@end
