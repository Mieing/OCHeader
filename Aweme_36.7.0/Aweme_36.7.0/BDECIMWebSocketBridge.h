@class NSString, BDECIMClientConfig, BDECIMWebSocket;
@protocol IESLCMessageHandlerProtocol, IESLCConnectManagerProtocol;

@interface BDECIMWebSocketBridge : NSObject <TIMXLongConnectionClientUnderlayingWebSocket, IESLCConnectService, IESLCMessageHandlerService>

@property (retain, nonatomic) BDECIMWebSocket *webSocket;
@property (retain, nonatomic) BDECIMClientConfig *config;
@property (copy, nonatomic) id /* block */ notifyNewMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)onWSMessageDidReceive:(id)a0;
- (BOOL)webSocketBreak;
- (BOOL)asyncSendMessage:(id)a0;
- (void)openLongConnection;
- (void)closeLongConnection;
- (void)setupLongConnectionServiceWithToken:(id)a0 config:(id)a1;
- (id)generateNextMessage;
- (void)setupWebsock:(id)a0 token:(id)a1;
- (void)onLongConnectionStateChanged:(id)a0;
- (id)addCustomHeadersToOriginalMessageHedaers:(id)a0;
- (void)postBizCustomMethodsEvent:(id)a0 method:(long long)a1 service:(long long)a2;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
