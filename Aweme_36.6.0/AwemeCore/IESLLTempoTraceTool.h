@class NSMutableArray, NSMutableDictionary;

@interface IESLLTempoTraceTool : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *callStack;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } timebase;
@property (retain, nonatomic) NSMutableDictionary *threadNames;

+ (id)sharedTool;

- (void)enterMethod:(id)a0;
- (void)enterMethod:(id)a0 threadName:(id)a1;
- (id)generateChromeTraceFormat;
- (void)exitMethod:(id)a0;
- (void)stopTraceAndGenerateReport;
- (void).cxx_destruct;
- (id)init;
- (void)startTrace;

@end
