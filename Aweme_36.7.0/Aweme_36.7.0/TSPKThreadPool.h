@class NSObject;
@protocol OS_dispatch_queue;

@interface TSPKThreadPool : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)shardPool;

- (void).cxx_destruct;
- (id)workQueue;
- (id)init;
- (id)lowPriorityQueue;

@end
