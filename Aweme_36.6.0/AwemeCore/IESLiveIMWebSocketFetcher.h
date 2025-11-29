@class IESLiveIMAppInfo, NSString, NSTimer, TTPushManager;

@interface IESLiveIMWebSocketFetcher : NSObject <IESLiveIMFetcher, WsDelegate>

@property (retain, nonatomic) TTPushManager *pushManager;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long heartbeatDuration;
@property (retain, nonatomic) IESLiveIMAppInfo *appInfo;
@property (copy, nonatomic) id /* block */ urlCallback;
@property (copy, nonatomic) id /* block */ paramsCallback;
@property (copy, nonatomic) id /* block */ headerFields;
@property (copy, nonatomic) id /* block */ stateCallback;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ heartbeatData;
@property (copy, nonatomic) id /* block */ asyncSendPushMessageCallback;
@property (copy, nonatomic) id /* block */ ackHeaderCallback;
@property (nonatomic) BOOL skipChannelValidation;
@property (copy, nonatomic) id /* block */ connectionCallback;
@property (copy, nonatomic) id /* block */ heartbeatCallback;
@property (copy, nonatomic) id /* block */ receivedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)asyncSendPushMessage:(id)a0;
- (void)p_handleNetworkChange:(long long)a0;
- (void)onReachabilityChanged:(id)a0;
- (void)onAppDidBecomeActive:(id)a0;
- (void)asyncAckWithPacket:(id)a0;
- (void)updateHeartbeatDuration:(long long)a0 resetTimer:(BOOL)a1;
- (void)p_addQueryToParams:(id)a0 fromParams:(id)a1;
- (void)handleHeaders:(id)a0 toOutPacket:(id)a1;
- (void)handleLiveChannelPushObj:(id)a0 pushManager:(id)a1;
- (void)updateHeartbeatDuration:(long long)a0;
- (void)checkConnectState;
- (id)readLastUrlString;
- (void)fetchWithContext:(id)a0 state:(id /* block */)a1 data:(id /* block */)a2;
- (void)fetchBegin;
- (void)fetchEnd;
- (BOOL)p_isLiveChannel:(id)a0;
- (BOOL)p_isLiveWsURL:(id)a0;
- (id)getAckHeadersFromPacket:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)init;
- (void)dealloc;
- (void)startTimerWithInterval:(double)a0;

@end
