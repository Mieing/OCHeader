@class NSString, IESLiveIMPaaSWorker;

@interface AWELiveIMMessageDispatcher : IESLiveIMBaseDispatcher <HTSLiveMessageDispatcher, HTSLiveMessageDispatchProvider, IESLivePreStreamIMMessageSubscriber>

@property (weak, nonatomic) IESLiveIMPaaSWorker *mSequenceWorker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double messageClientStartConnectTimeStamp;
@property (nonatomic) double messageClientDispatchFirstMessageTimeStamp;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (id)addSubscriber:(id)a0 forMessage:(Class)a1;
- (id)addSubscriber:(id)a0 forMessages:(id)a1;
- (id)addSubscriberForAll:(id)a0;
- (void)combineDisposableForAddSubscriber:(id)a0 forMessages:(id)a1;
- (void)combineDisposableForAddSubscriber:(id)a0 forMessages:(id)a1 needReplay:(BOOL)a2;
- (void)addSubscriber:(id)a0 forWRDSMessage:(Class)a1 firstCallbackWithSubkey:(id)a2;
- (void)addSubscriber:(id)a0 forWRDSMessages:(id)a1;
- (void)asyncQueryWRDSMessage:(Class)a0 withSubkey:(id)a1 completion:(id /* block */)a2;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)onMSequenceSubMessageReceived:(id)a0;
- (long long)decideMessageCacheType:(id)a0;
- (void)unsubscribe:(id)a0 forMessage:(Class)a1;
- (void)unsubscribeForAll:(id)a0;
- (void)addFakeMessage:(id)a0;
- (void)addSyncStreamInfoMessage:(id)a0;
- (id)dispatcher;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0;

@end
