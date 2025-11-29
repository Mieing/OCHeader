@class BDECPigeonClientV2, BDECPigeonClientConfigV2, NSString;
@protocol BDECIMCloudWebSocketBridgeV2Interface, BDECPigeonWebSocketDelegate, BDECPigeonWebSocketProtocol;

@interface BDECPigeonWebSocketBridge : NSObject <BDECIMCloudWebSocketBridgeV2Delegate, BDECPigeonWebSocketDelegate, BDECPigeonWebSocketProtocol>

@property (retain, nonatomic) id<BDECPigeonWebSocketProtocol> webSocket;
@property (retain, nonatomic) id<BDECIMCloudWebSocketBridgeV2Interface> imCloudBridge;
@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (nonatomic) double startConnectingTimestamp;
@property BOOL canTrackConnectFailure;
@property BOOL canTrackConnectSuccess;
@property (copy, nonatomic) id /* block */ notifyNewMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECPigeonWebSocketDelegate> delegate;

- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)webSocketBreak;
- (BOOL)asyncSendMessage:(id)a0;
- (void)openLongConnection;
- (void)closeLongConnection;
- (void)setupWebSocket:(id)a0 token:(id)a1;
- (void)setupLongConnectionServiceWithToken:(id)a0 config:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 errorStr:(id)a3 errorDict:(id)a4;
- (void)messageHandler:(id)a0 didReceiveMsg:(id)a1 receivedTimestamp:(double)a2;
- (void)trackWSConnectionWithSuccess:(BOOL)a0 extra:(id)a1;
- (void)trackConnectStatus:(unsigned long long)a0 errorDict:(id)a1;
- (void)postBizCustomMethodsEvent:(id)a0 method:(long long)a1;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithClient:(id)a0;

@end
