@class NSLock, NSMutableArray;

@interface QBBeaconNetRequestQueue : NSObject {
    NSLock *_queueLock;
    NSMutableArray *_runningQueue;
    NSMutableArray *_waitingQueue;
    long long _maxConcurrentRequest;
}

- (id)init;
- (void)dealloc;
- (void)addOneRequest:(id)a0;
- (void)requestFinish:(id)a0;
- (void).cxx_destruct;

@end
