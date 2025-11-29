@class NSOperationQueue;

@interface MMGlobalQueue : NSObject {
    NSOperationQueue *m_queue;
}

+ (id)sharedInstance;

- (void)addOperationFromGlobalDispatchQueue:(id)a0 block:(id /* block */)a1;
- (void)addCGIOperation:(id /* block */)a0;
- (id)init;
- (void)addDefaultOperation:(id /* block */)a0;
- (void)addUIOperation:(id /* block */)a0;
- (void)addBackgroundOperation:(id /* block */)a0;
- (void)dynamicSetQueueConcurrentOperationCount;

@end
