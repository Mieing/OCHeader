@class NSNumber, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CachalotAsyncTaskSerialControllerDelegate, OS_dispatch_semaphore;

@interface CachalotAsyncTaskSerialController : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;
@property BOOL isTaskRunning;
@property (retain, nonatomic) NSNumber *maxExpireDuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *runningQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *expireSemaphore;
@property long long queuedCount;
@property (weak, nonatomic) id<CachalotAsyncTaskSerialControllerDelegate> delegate;
@property BOOL allowsImmediateExecutionOnRunningQueue;

- (void)performTask:(id)a0 highestPriority:(BOOL)a1;
- (BOOL)p_isOnRunningQueue;
- (void)p_startTaskImmediately:(id)a0;
- (void)p_performNextTask;
- (id)initWithQueue:(id)a0 maxExpireDuration:(id)a1;
- (void)removeAllRemainingTasks;
- (void)performTask:(id)a0;
- (void).cxx_destruct;

@end
