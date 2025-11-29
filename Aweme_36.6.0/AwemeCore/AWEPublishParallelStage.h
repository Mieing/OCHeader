@class NSHashTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishParallelStage : AWEPublishContainerStage

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain, nonatomic) NSHashTable *finishedStageTable;
@property (retain, nonatomic) NSMutableArray *executeStageArray;
@property (nonatomic) long long maxConcurrentCount;

- (id)stageType;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)runStagesIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
