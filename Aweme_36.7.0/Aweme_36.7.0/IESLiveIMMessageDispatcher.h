@class NSDictionary, NSString;
@protocol IESLivePerfSampler;

@interface IESLiveIMMessageDispatcher : IESLiveIMMessageNormalDispatcher <HTSLiveMessageDispatchProvider, HTSLiveMessageDispatcher, IESLIveMessageDelayProvider, IESLiveMessageProcesserProvider>

@property (nonatomic) BOOL enableAsyncAddSubscriber;
@property (copy, nonatomic) NSDictionary *realMessagesCondition;
@property (copy, nonatomic) NSDictionary *delayMessagesCondition;
@property (copy, nonatomic) NSDictionary *discardableMessagesCondition;
@property (nonatomic) unsigned long long delayOptions;
@property (nonatomic) long long msgTotalCount;
@property (nonatomic) long long msgShowCount;
@property (nonatomic) long long msgRateCount;
@property (nonatomic) double lastRateInterval;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (copy, nonatomic) id /* block */ onMessageDispatch;
@property (copy, nonatomic) id /* block */ shouldDispatchMessage;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) double messageClientStartConnectTimeStamp;
@property (nonatomic) double messageClientDispatchFirstMessageTimeStamp;
@property (copy, nonatomic) NSString *firstFetchCursor;
@property (nonatomic) BOOL noMoreHistoryMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long ntpDiffTime;
@property (nonatomic) BOOL useHeartBeatSEI;

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
- (void)asyncQueryWRDSMessage:(Class)a0 withRoomId:(id)a1 subkey:(id)a2 completion:(id /* block */)a3;
- (long long)decideMessageCacheType:(id)a0;
- (void)unsubscribe:(id)a0 forMessage:(Class)a1;
- (void)unsubscribeForAll:(id)a0;
- (double)decideDelayMessageDispatchTime:(id)a0;
- (void)addFakeMessage:(id)a0;
- (void)addSyncStreamInfoMessage:(id)a0;
- (void)didRecieveMessages:(id)a0;
- (void)doTimerLoopAction;
- (BOOL)filterBeforeDispatchMessage:(id)a0;
- (void)enumerate:(id)a0 sendMessage:(id)a1;
- (void)messageDidDispatch:(id)a0;
- (void)enableLinkMessageDelay:(BOOL)a0;
- (id)dispatcher;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0;

@end
