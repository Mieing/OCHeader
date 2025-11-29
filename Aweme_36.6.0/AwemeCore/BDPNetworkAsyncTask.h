@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPNetworkAsyncTask : BDPNetworkTask

@property (retain) NSObject<OS_dispatch_queue> *handleQueue;

- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)cancel;

@end
