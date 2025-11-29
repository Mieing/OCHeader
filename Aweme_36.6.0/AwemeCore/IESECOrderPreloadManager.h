@class NSArray, NSMutableArray, NSDictionary;

@interface IESECOrderPreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *immediateTasks;
@property (retain, nonatomic) NSMutableArray *idleTasks;
@property (nonatomic) BOOL isIdleListeningRegistered;
@property (copy, nonatomic) NSArray *currentPriorityArray;
@property (nonatomic) struct __CFRunLoopObserver { } *idleRunLoopObserver;
@property (copy, nonatomic) NSDictionary *trackCommonParams;

+ (id)sharedManager;

- (void)addPreloadTasks:(id)a0 priorityArray:(id)a1;
- (void)cancelAllPendingTasks;
- (void)splitAndSortTasksToQueues:(id)a0;
- (void)executeTasksFromQueue:(id)a0;
- (void)registerIdleListeningIfNeeded;
- (id)sortTasks:(id)a0 byPriorityArray:(id)a1;
- (void)executePreloadTask:(id)a0;
- (unsigned long long)convertToForestRenderTypeWith:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
