@class BDLGurdSyncResourcesTasksQueue;

@interface BDLGurdSyncResourcesManager : NSObject

@property (retain, nonatomic) BDLGurdSyncResourcesTasksQueue *waitingTasksQueue;
@property (retain, nonatomic) BDLGurdSyncResourcesTasksQueue *executedTasksQueue;

+ (void)syncResourcesIfNeeded;
+ (void)enqueueSyncResourcesTask:(id)a0;
+ (void)enableGurd;
+ (id)sharedManager;

- (void)_cancelWaitingTask:(id)a0;
- (BOOL)_enqueueSyncResourcesTask:(id)a0;
- (void)_syncResourcesWithTask:(id)a0;
- (void)_syncResources;
- (void)_syncResourcesIfNeeded;
- (BOOL)_shouldExecuteWithTask:(id)a0;
- (id)_waitingTaskForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
