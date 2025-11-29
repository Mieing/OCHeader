@class NSObject;
@protocol OS_dispatch_queue;

@interface BDFileProcessQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)init;
- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;

@end
