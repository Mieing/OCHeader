@class NSObject;
@protocol OS_dispatch_queue;

@interface IESQueue : NSObject {
    void *_queueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedQueue;

- (id)initWithQueue:(id)a0 queueKey:(void *)a1;
- (void *)queueKey;
- (id)initWithName:(id)a0 attr:(id)a1;
- (void)updateQueuePriority:(long long)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
