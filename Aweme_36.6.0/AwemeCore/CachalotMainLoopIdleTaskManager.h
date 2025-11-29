@class NSString, CachalotRunloopIdleObserver, CachalotLinkedTaskScheduler;
@protocol CachalotMainLoopIdleTaskManagerDelegate;

@interface CachalotMainLoopIdleTaskManager : NSObject <CachalotRunloopIdleHandler>

@property (retain, nonatomic) CachalotRunloopIdleObserver *rlObserver;
@property (retain, nonatomic) CachalotLinkedTaskScheduler *taskScheduler;
@property (weak, nonatomic) id<CachalotMainLoopIdleTaskManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)taskExistsWithIdentifier:(id)a0;
- (BOOL)addTask:(id /* block */)a0 withIdentifier:(id)a1;
- (BOOL)addTask:(id /* block */)a0 withIdentifier:(id)a1 priority:(long long)a2;
- (void)addIdleTasksObserver;
- (void)removeIdleTaskObserver;
- (void)idlePeriodBegin;
- (void)idlePeriodEnd;
- (void).cxx_destruct;
- (id)init;
- (BOOL)cancelTaskWithIdentifier:(id)a0;
- (void)cancelAllTasks;

@end
