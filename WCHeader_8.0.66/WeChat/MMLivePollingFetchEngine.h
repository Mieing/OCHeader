@class NSMutableDictionary, MMPollingFetchQueue, NSData, NSTimer, MMLiveTaskId;

@interface MMLivePollingFetchEngine : NSObject

@property (nonatomic) long long minPollingInterval;
@property (retain, nonatomic) NSData *lastBuffer;
@property (readonly, nonatomic) MMPollingFetchQueue *queue;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSMutableDictionary *executeTaskMap;
@property (readonly, nonatomic) NSMutableDictionary *taskIntervalCache;
@property (nonatomic) BOOL hasStoped;
@property (readonly, nonatomic) MMLiveTaskId *taskId;
@property (copy, nonatomic) id /* block */ requestModelMaker;

- (id)initWithTaskId:(id)a0 requestParamsMaker:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void)addTasksIfNotExistsWithCmdIdList:(id)a0;
- (void)addTasksIfNotExistsWithCmdIdList:(id)a0 waitingInfo:(id)a1;
- (void)mainThread_addTasksIfNotExistsWithCmdIdList:(id)a0 waitingInfo:(id)a1;
- (void)registerCmdIdsNeedWaiting:(id)a0 withWaitingInfo:(id)a1;
- (BOOL)adjustTaskInterval:(unsigned long long)a0 forCmdId:(id)a1;
- (void)executeTasksByCmdIdList:(id)a0;
- (void)executeTasksByExecuteModels:(id)a0;
- (void)mainThread_executeTasksByExecuteModels:(id)a0;
- (void)removeTasksByCmdIdList:(id)a0;
- (void)mainThread_removeTasksByCmdIdList:(id)a0;
- (void)removeAllTasks;
- (void)mainThread_removeAllTasks;
- (void)addOrReplaceItems:(id)a0;
- (void)executeTasks:(id)a0 withModels:(id)a1;
- (void)_executeTasks:(id)a0 withModels:(id)a1;
- (void)startIfNeed;
- (void)_start;
- (void)timerEvent;
- (void)stopTimerIfNeed;
- (void)_stopTimer;
- (void)stop;
- (long long)syncExtraInfoMergeInterval;
- (long long)syncExtraInfoMinSleepInterval;
- (void).cxx_destruct;

@end
