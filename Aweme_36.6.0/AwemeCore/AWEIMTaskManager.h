@class RxReadWriteLock, NSMutableDictionary, NSString, NSMutableArray;

@interface AWEIMTaskManager : NSObject <AWEIMTaskDelegateProtocol>

@property (nonatomic) long long maxConcurrentCount;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMutableDictionary *tasksMap;
@property (retain, nonatomic) NSMutableDictionary *taskStashPool;
@property (retain, nonatomic) RxReadWriteLock *readWriteLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskWithTaskID:(id)a0;
- (void)runTasks;
- (void)removeAllTasks;
- (void)removeTaskByTaskID:(id)a0;
- (void)taskStateDidChange:(id)a0;
- (void)__runTasksImmediately:(BOOL)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllTasks;
- (id)initWithMaxConcurrentCount:(long long)a0;

@end
