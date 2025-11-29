@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDLGurdSyncResourcesTasksQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *tasksDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

- (BOOL)containsTask:(id)a0;
- (id)taskForIdentifier:(id)a0;
- (BOOL)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)allTasks;

@end
