@class NSString, BDPNapiLoader, NSRunLoop, NSMutableArray;
@protocol BDPContextProtocol;

@interface BDPLynxRuntimeDispatcher : NSObject <BDPRunningDispatchProtocol> {
    NSString *_name;
    id<BDPContextProtocol> _engine;
    BDPNapiLoader *_napiLoader;
    NSMutableArray *_pendingTasks;
}

@property (copy) NSString *name;
@property (readonly) NSRunLoop *currentRunLoop;
@property (readonly) long long dispatchCount;
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
- (id)initWithGroupName:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (id)engine;
- (void)setEngine:(id)a0;
- (void)dealloc;
- (void)dispatchAsync:(id /* block */)a0;

@end
