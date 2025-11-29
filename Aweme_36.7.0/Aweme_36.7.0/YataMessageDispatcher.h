@class YataMessageMonitor, NSMapTable, YYMemoryCache, NSString, TTPushConfig, TTPushManager;

@interface YataMessageDispatcher : NSObject <WsDelegate>

@property (nonatomic) unsigned long long connectionState;
@property (retain, nonatomic) TTPushConfig *pushConfig;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) NSMapTable *subscribers;
@property (retain, nonatomic) YYMemoryCache *cache;
@property (retain, nonatomic) YataMessageMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)onReachabilityChanged:(id)a0;
- (void)onAppDidBecomeActive:(id)a0;
- (void)registerSubscriber:(id)a0 forUniqueSceneType:(id)a1 bizCode:(id)a2;
- (void)unRegisterSubscriber:(id)a0 forUniqueSceneType:(id)a1 bizCode:(id)a2;
- (unsigned long long)messageConsumeTypeWithMessageProtocol:(id)a0 localProtocol:(id)a1 detail:(id *)a2;
- (void)asyncConnection:(id)a0 bizCode:(id)a1;
- (BOOL)isEmptySubscribers;
- (void)asyncStopConnection:(id)a0 bizCode:(id)a1;
- (unsigned long long)consumeTypeWithRecievedID:(id)a0 currentPID:(id)a1 expectedPID:(id)a2 detail:(id *)a3;
- (unsigned long long)consumeTypeWithRecievedID:(id)a0 currentPID:(id)a1 detail:(id *)a2;
- (void)handleNetworkChange:(long long)a0;
- (id)convertMessageToJSONDict:(id)a0;
- (void)dispatchMessageContent:(id)a0;
- (id)tryConsumeCachedProtocolMessageWithProtocol:(id)a0 mergeTool:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end
