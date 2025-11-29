@class NSObject;
@protocol OS_dispatch_queue;

@interface TXCDispatchQueue : NSObject {
    void *_queueKey;
}

@property (class, readonly, nonatomic) TXCDispatchQueue *pipelineQueue;
@property (class, readonly, nonatomic) TXCDispatchQueue *producerQueue;
@property (class, readonly, nonatomic) TXCDispatchQueue *consumerQueue;
@property (class, readonly, nonatomic) TXCDispatchQueue *captureQueue;
@property (class, readonly, nonatomic) TXCDispatchQueue *mainQueue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)createEncodeQueue;
+ (id)createDecodeQueue;

- (id)initWithName:(const char *)a0;
- (id)init;
- (void)runOnQueueOrAsync:(id /* block */)a0;
- (void)runSync:(id /* block */)a0;
- (BOOL)runSync:(id /* block */)a0 timeout:(long long)a1;
- (void)forceAsync:(id /* block */)a0;
- (void)runAsync:(id /* block */)a0 after:(long long)a1;
- (BOOL)isInQueue;
- (void)assertInQueue;
- (void).cxx_destruct;

@end
