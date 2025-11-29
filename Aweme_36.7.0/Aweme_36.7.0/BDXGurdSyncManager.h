@class NSMutableArray;

@interface BDXGurdSyncManager : NSObject

@property (retain, nonatomic) NSMutableArray *waitingTasksQueue;

+ (void)syncResourcesIfNeeded;
+ (void)enqueueSyncResourcesTask:(id)a0;
+ (void)enableGurd;
+ (void)enableHighPrioritySync;
+ (void)disableGurd;
+ (void)cancelSyncResourceTask:(id)a0;
+ (id)sharedManager;

- (id)_waitingTaskForTask:(id)a0;
- (void)_cancelWaitingTask:(id)a0;
- (BOOL)_enqueueSyncResourcesTask:(id)a0;
- (void)_syncResourcesWithTask:(id)a0;
- (void)_syncResources;
- (void).cxx_destruct;

@end
