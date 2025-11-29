@class BDPThreadSafeArray, NSString, NSRunLoop;
@protocol BDPRunningDispatchQueueDelegate, BDPQueueProtocol;

@interface BDPRunningDispatchThread : NSThread <BDPRunningDispatchProtocol> {
    id _engine;
    id _napiLoader;
}

@property (retain, nonatomic) id<BDPQueueProtocol> queue;
@property (nonatomic) unsigned long long pkey;
@property (retain, nonatomic) BDPThreadSafeArray *stopBlkTasks;
@property BOOL running;
@property (retain) NSRunLoop *currentRunLoop;
@property BOOL isAwake;
@property (nonatomic) BOOL disableCustomQueue;
@property long long dispatchCount;
@property (weak, nonatomic) id<BDPRunningDispatchQueueDelegate> delegate;
@property (copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopWith:(id /* block */)a0;
- (id)napiLoader;
- (void)updateUniqueID:(id)a0;
- (void)setNapiLoader:(id)a0;
- (void)setEnableAcceptAsyncCall:(BOOL)a0;
- (BOOL)enableAcceptAsyncCall;
- (void)dispatchAsyncImmediately:(id /* block */)a0;
- (void)dispatchAsyncImmediatelyAnyThread:(id /* block */)a0;
- (void)removeAllAsyncDispatch;
- (void)_executeBlockImmediately:(id /* block */)a0;
- (void)dispatchAsyncImmediatelyWithOutQueue:(id /* block */)a0;
- (BOOL)currentIsDispatchThread;
- (void)dispatchAsyncWithOutQueue:(id /* block */)a0;
- (void)_innerDispatchedBlockConsumeQueue;
- (long long)getRaisedPriority;
- (void)_runTasks;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)engine;
- (void)setEngine:(id)a0;
- (void)start;
- (void)dealloc;
- (void)main;
- (void)dispatchAsync:(id /* block */)a0;

@end
