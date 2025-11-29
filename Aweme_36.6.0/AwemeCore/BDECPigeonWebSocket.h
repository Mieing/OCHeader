@class TTPushManager, NSString, BDECPigeonClientV2, TTPushConfig, BDECPigeonClientConfigV2;
@protocol BDECPigeonWebSocketDelegate;

@interface BDECPigeonWebSocket : NSObject <WsDelegate, BDECPigeonWebSocketProtocol>

@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) TTPushConfig *config;
@property (nonatomic) double startConnectingTimestamp;
@property (nonatomic) BOOL canTrackConnectFailure;
@property (nonatomic) BOOL canTrackConnectSuccess;
@property (retain, nonatomic) BDECPigeonClientConfigV2 *imClientConfig;
@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECPigeonWebSocketDelegate> delegate;

+ (id)paramsByURLEncode:(id)a0;
+ (unsigned long long)bizState:(unsigned long long)a0;
+ (id)shared;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)webSocketBreak;
- (BOOL)asyncSendMessage:(id)a0;
- (void)openLongConnection;
- (void)closeLongConnection;
- (void)setupLongConnectionServiceWithToken:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)versionNumber;
- (id)versionCode;

@end
