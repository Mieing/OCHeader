@class NSMutableArray;

@interface HybridGurdSyncManager : NSObject

@property (retain, nonatomic) NSMutableArray *waitingTasksQueue;

+ (void)syncResourcesIfNeeded;
+ (void)enqueueSyncResourcesTask:(id)a0;
+ (void)enableGurd;
+ (void)enableHighPrioritySync;
+ (void)disableGurd;
+ (id)sharedManager;

- (id)_waitingTaskForTask:(id)a0;
- (void)_cancelWaitingTask:(id)a0;
- (BOOL)_enqueueSyncResourcesTask:(id)a0;
- (void)_syncResourcesWithTask:(id)a0;
- (void)_syncResources;
- (void)_syncResourcesIfNeeded;
- (void).cxx_destruct;

@end
