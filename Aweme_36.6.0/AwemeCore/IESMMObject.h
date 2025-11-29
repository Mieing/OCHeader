@class NSObject;
@protocol OS_dispatch_queue;

@interface IESMMObject : NSObject {
    void *operationQueueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;

- (id)initWithGCDName:(id)a0;
- (void)runAsync:(id /* block */)a0;
- (void)runAsyncAfter:(double)a0 block:(id /* block */)a1;
- (void)runAsyncWhenInDifferentQueue:(id /* block */)a0;
- (void)runSync:(id /* block */)a0;
- (void)updateQueuePriority:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
