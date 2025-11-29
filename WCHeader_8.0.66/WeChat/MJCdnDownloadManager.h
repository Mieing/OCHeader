@class OrderedDictionary, NSMutableDictionary, NSString;

@interface MJCdnDownloadManager : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned long long maxRunningConcurrentCount;
@property (retain, nonatomic) OrderedDictionary *pendingTasks;
@property (retain, nonatomic) NSMutableDictionary *runningTasks;
@property (retain, nonatomic) NSMutableDictionary *successTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addTaskWithRequest:(id)a0;
- (void)createPendingTaskWithRequest:(id)a0;
- (void)removeTaskWithTaskKey:(id)a0;
- (void)checkPendingTasks;
- (BOOL)_checkNextPendingTask;
- (void)runningTaskDidComplete:(id)a0;
- (void).cxx_destruct;

@end
