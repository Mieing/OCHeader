@class NSObject;
@protocol OS_dispatch_queue, WCFinderTaskSchedulerStrategyProtocol;

@interface WCFinderTaskScheduler : NSObject {
    id<WCFinderTaskSchedulerStrategyProtocol> _strategy;
    unsigned long long _frequencyCounter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) unsigned long long maxNumberOfTasks;
@property (nonatomic) unsigned long long executeNumber;
@property (nonatomic) unsigned long long executeFrequency;
@property (nonatomic) BOOL ignoreNonEssentialTasks;
@property (nonatomic) BOOL paused;

+ (id)schedulerWithStrategy:(long long)a0;

- (id)initWithStrategyObject:(id)a0;
- (id)initWithStrategy:(long long)a0;
- (void)addTask:(id /* block */)a0;
- (void)addTask:(id /* block */)a0 priority:(long long)a1 asyncEnd:(BOOL)a2;
- (void)start;
- (void)clearTasks;
- (unsigned long long)numberOfTasks;
- (BOOL)empty;
- (void)executeTasks;
- (void).cxx_destruct;

@end
