@class NSObject, WCGPUCounterSamplingConfig, WCGPUCounterSamplingTask, MMStackReportConnection, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WCGPUCounterSamplingReporter : NSObject <MMStackReportConnectionDelegate>

@property (retain, nonatomic) NSMutableArray *samplingTaskList;
@property (retain, nonatomic) WCGPUCounterSamplingTask *uploadingTask;
@property (retain, nonatomic) MMStackReportConnection *reportConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveGPUSamplingDumpToLibraryQueue;
@property (retain, nonatomic) WCGPUCounterSamplingConfig *samplingConfig;

- (id)init;
- (void)addReport:(unsigned long long)a0 reportData:(id)a1;
- (BOOL)reportDirectlyWithreportID:(unsigned long long)a0 reportData:(id)a1;
- (void)reportAll;
- (unsigned int)lastReportTime;
- (unsigned int)reportCount;
- (BOOL)canReport:(id)a0;
- (void)saveTasksToLibrary;
- (void)saveConfigToLibrary;
- (void)loadTasksFromLibrary;
- (id)nextTask;
- (BOOL)hasNextTask;
- (void)doReport;
- (void)onStackReportCompleted:(BOOL)a0;
- (void)onReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
