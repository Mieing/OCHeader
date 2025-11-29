@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface EcTaskExecute : NSObject

@property (nonatomic) long long concurrentTask;
@property (retain, nonatomic) NSMutableDictionary *runngingTask;
@property (retain, nonatomic) NSMutableArray *heightLevelTask;
@property (retain, nonatomic) NSMutableArray *defaultLevelTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

+ (void)postTask:(id)a0 level:(long long)a1;

- (void)handleAddTask:(id)a0;
- (void)weakUp;
- (void)clearTaskKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
