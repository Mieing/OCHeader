@class NSString, NSRecursiveLock, BTDSimplePing, BDPUniqueID, SRWebSocket, NSDictionary, NSMutableArray, NSObject;
@protocol BDPRemoteDebugMessenger, BDPRemoteDebugAgentDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPRemoteDebugAgent : NSObject <UnisusInspectorAgent, SRWebSocketDelegate, BTDSimplePingDelegate> {
    NSString *_runtimeType;
}

@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) SRWebSocket *socket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long syncCallbackID;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncCallbackIDLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncEventLock;
@property (retain, nonatomic) NSMutableArray *pendingMessages;
@property (nonatomic) BOOL queueSuspendSwitch;
@property (nonatomic) BOOL isQueueSuspend;
@property (retain, nonatomic) NSRecursiveLock *queueResumeLocker;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BTDSimplePing *pinger;
@property (nonatomic) BOOL pingSuccess;
@property (retain, nonatomic) NSMutableArray *incomingMessages;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncPause;
@property BOOL pausing;
@property (weak, nonatomic) id<BDPRemoteDebugAgentDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *debugRuntimeInfo;
@property (copy, nonatomic) NSString *autoTestMessage;
@property (nonatomic) BOOL useLocalNetwork;
@property (nonatomic) BOOL isServerSwtich;
@property (nonatomic) BOOL inLocalNetwork;
@property (nonatomic) BOOL isFastDebugMode;
@property (retain, nonatomic) id<BDPRemoteDebugMessenger> messenger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONStringify:(id)a0;

- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)st_simplePing:(id)a0 didStartWithAddress:(id)a1;
- (void)st_simplePing:(id)a0 didFailWithError:(id)a1;
- (void)st_simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 timeToLive:(long long)a2 sequenceNumber:(unsigned short)a3 timeElapsed:(double)a4;
- (id)initWithRuntime:(id)a0;
- (void)asyncSendWithCDPCallbackMessage:(id)a0;
- (void)recordDebugStartEventTracker:(BOOL)a0;
- (void)asyncSendWithEvent:(id)a0;
- (void)asyncSendWithMessage:(id)a0;
- (void)queueSuspend;
- (void)queueSuspendSwitchOff;
- (void)flushPendingMessages;
- (BOOL)isValidDebugCommand:(id)a0 cursor:(id)a1;
- (long long)webSocketStatus;
- (void)pingTimeout;
- (void)connectWithURLString:(id)a0;
- (void)reConnectWithRetryCount:(long long)a0;
- (void)sendEventAsync:(id /* block */)a0;
- (id)sendEventSync:(id /* block */)a0;
- (void)asyncSendWithDomMessage:(id)a0;
- (void)queueResume;
- (void)continueAutoTestReplayWithMessage:(id)a0;
- (id)JSONParse:(id)a0;
- (void)sendToDevtool:(id)a0;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)stopPing;

@end
