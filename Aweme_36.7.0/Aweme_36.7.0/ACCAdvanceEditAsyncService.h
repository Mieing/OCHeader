@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface ACCAdvanceEditAsyncService : NSObject {
    void *operationQueueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gcdQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)runAsyncWait:(id /* block */)a0;
- (void)runAsync:(id /* block */)a0 thenInMain:(id /* block */)a1;
- (void)runInMainAndWait:(id /* block */)a0;
- (void)runInMainAsync:(id /* block */)a0;
- (void)runAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAll;

@end
