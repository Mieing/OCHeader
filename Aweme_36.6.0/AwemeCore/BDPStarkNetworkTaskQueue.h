@class NSObject, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface BDPStarkNetworkTaskQueue : NSObject

@property (nonatomic) unsigned long long maxConcurrentTasks;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMutableSet *activeTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;

- (void)tryToStartTasks;
- (void)immediateStartTask:(id)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)taskFinished:(id)a0;

@end
