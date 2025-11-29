@class NSString, IESECLiveAbstractQueue, NSMutableArray, NSObject;
@protocol IESECLiveAbstractResource, OS_dispatch_queue;

@interface IESECLiveTaskQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL suspended;
@property (retain, nonatomic) NSString *resourceUUID;
@property (retain, nonatomic) IESECLiveAbstractQueue *queue;
@property (retain, nonatomic) id<IESECLiveAbstractResource> resource;
@property (retain, nonatomic) NSMutableArray *currentConsumers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executingQueue;
@property (nonatomic) BOOL threadSafe;
@property (nonatomic) BOOL needComparePriorityWhenPreemptive;

- (id)executingTasks;
- (id)initWithMaxConcurrent:(unsigned long long)a0;
- (void)suspendWithNeedResignCurrentConsumer:(BOOL)a0;
- (void)grantAccess:(id)a0;
- (id)visitingConsumers;
- (id)initWithMaxConcurrent:(unsigned long long)a0 executingQueue:(id)a1 threadSafe:(BOOL)a2;
- (id)initWithResource:(id)a0 executingQueue:(id)a1 threadSafe:(BOOL)a2;
- (void)addTask:(id)a0 inGroup:(id)a1;
- (void)equeue:(id)a0;
- (BOOL)canSchedule;
- (void)consumerDidQuit:(id)a0;
- (long long)allTaskCount;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (id)loadQueue;
- (id)init;
- (id)allTasks;
- (void)schedule;
- (void)resume;
- (void)dealloc;
- (void)cancelAll;

@end
