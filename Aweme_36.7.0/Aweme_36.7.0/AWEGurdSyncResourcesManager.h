@class NSMutableArray;

@interface AWEGurdSyncResourcesManager : NSObject

@property (retain, nonatomic) NSMutableArray *waitingTasksQueue;

+ (void)syncResourcesIfNeeded;
+ (BOOL)enqueueSyncResourcesTask:(id)a0;
+ (void)enableGurd;
+ (id)sharedManager;

- (id)_waitingTaskForTask:(id)a0;
- (void)_cancelWaitingTask:(id)a0;
- (BOOL)_enqueueSyncResourcesTask:(id)a0;
- (void)_syncResourcesWithTask:(id)a0;
- (void)_syncResources;
- (void)_syncResourcesIfNeeded;
- (void)_syncResourcesWithTask:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
