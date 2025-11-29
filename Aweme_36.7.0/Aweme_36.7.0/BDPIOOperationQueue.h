@class BDPQueue, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPIOOperationQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *mutex;
@property (nonatomic) BOOL isExecWriteTask;
@property (nonatomic) unsigned long long executingCount;
@property (retain, nonatomic) BDPQueue *waitingTaskQueue;
@property (nonatomic) unsigned long long maxExecCount;

+ (id)defaultQueue;

- (void)addFileOperationType:(unsigned long long)a0 isSync:(BOOL)a1 blk:(id /* block */)a2;
- (id)initWithQueueName:(id)a0 withMaxExecCount:(unsigned long long)a1;
- (void)tryNextTask;
- (void).cxx_destruct;
- (id)init;

@end
