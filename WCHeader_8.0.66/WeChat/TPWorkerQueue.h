@class NSObject;
@protocol OS_dispatch_queue;

@interface TPWorkerQueue : NSObject {
    void *_workingQueueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (nonatomic) unsigned long long queueType;

+ (id)workerQueueWithQueueType:(unsigned long long)a0 queueName:(id)a1;

- (void)scheduleTaskAsync:(id /* block */)a0;
- (void)scheduleTaskSync:(id /* block */)a0;
- (void)destoryQueue;
- (void).cxx_destruct;

@end
