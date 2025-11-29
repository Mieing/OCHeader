@class NSObject, NSMutableDictionary, XPlaySocketTracker, NSString, XPlayInstructionCache, TTPushManager;
@protocol OS_dispatch_queue;

@interface XPlaySocketManager : NSObject <WsDelegate, XPlaySocketManagerProtocol>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) XPlayInstructionCache *instCache;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) XPlaySocketTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (id)cloudBusinessHandlerWithItem:(id)a0;
- (void)cancelCloudBusiness:(id)a0;
- (void)sendInstruction:(id)a0;
- (void)addSocketHandler:(id)a0 forItemId:(id)a1;
- (void)removeHandler:(id)a0 forItemId:(id)a1 needForceDisconnect:(BOOL)a2;
- (void)realSendInst:(id)a0;
- (void)sendSocketMessage:(id)a0 service:(int)a1 method:(int)a2;
- (void)sendAckInstructionForInst:(id)a0 withExtra:(id)a1 respInst:(id)a2;
- (void)noticeReceiveMessage:(id)a0;
- (void)noticeReceiveAckMessage:(id)a0 forMessage:(id)a1;
- (void)handleAckMessage:(id)a0;
- (void)handleBusinessMessage:(id)a0;
- (long long)translateToSocketState:(unsigned long long)a0;
- (void)noticeSocketConnectionFailed:(id)a0 with:(long long)a1;
- (void)flushOverstockInst;
- (void)updateNetworkStatus;
- (void)noticeSocketStateChanged:(long long)a0;
- (void)removeHandler:(id)a0 forItemId:(id)a1;
- (void)removeAllHandler;
- (void).cxx_destruct;
- (BOOL)connectionMode;
- (BOOL)isConnected;
- (void)disconnect;
- (id)init;
- (void)connect;
- (void)dealloc;
- (void)setup;
- (void)addNotificationObserver;

@end
