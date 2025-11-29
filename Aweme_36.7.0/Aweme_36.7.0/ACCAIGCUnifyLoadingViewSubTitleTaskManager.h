@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACCAIGCUnifyLoadingViewSubTitleTaskManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;
@property (nonatomic) unsigned long long currentRunningGroup;
@property (nonatomic) BOOL isTaskRunning;

- (void)addTask:(id)a0 toGroup:(unsigned long long)a1;
- (void)tryToExecuteNextTask;
- (void)startNextTaskWithHighestPriority;
- (void)startTaskForQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)taskFinished:(id)a0;

@end
