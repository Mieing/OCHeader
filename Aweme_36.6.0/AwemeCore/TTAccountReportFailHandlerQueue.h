@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTAccountReportFailHandlerQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

+ (id)sharedReporter;

- (void)performConcurrentRetriesForTask:(id)a0;
- (void)enqueueTaskForRetry:(id)a0;
- (id)performNetworkRequest:(id)a0 completion:(id /* block */)a1;
- (void)scheduleNextRetry;
- (void)sendNetworkRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
