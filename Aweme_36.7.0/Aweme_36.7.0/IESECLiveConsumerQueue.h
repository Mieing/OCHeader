@class NSString, IESECLiveAbstractQueue, NSMutableArray, NSObject;
@protocol IESECLiveAbstractResource, OS_dispatch_queue;

@interface IESECLiveConsumerQueue : NSObject

@property (retain, nonatomic) NSString *resourceUUID;
@property (retain, nonatomic) IESECLiveAbstractQueue *queue;
@property (retain, nonatomic) id<IESECLiveAbstractResource> resource;
@property (retain, nonatomic) NSMutableArray *currentConsumers;
@property (nonatomic) BOOL suspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executingQueue;

- (id)initWithConcurrentCount:(unsigned long long)a0;
- (void)suspendWithNeedResignCurrentConsumer:(BOOL)a0;
- (void)grantAccess:(id)a0;
- (id)visitingConsumers;
- (void)enqueue:(id)a0;
- (id)initWithResource:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (void)suspend;
- (id)loadQueue;
- (id)init;
- (void)schedule;
- (void)removeConsumer:(id)a0;
- (void)resume;
- (void)dealloc;

@end
