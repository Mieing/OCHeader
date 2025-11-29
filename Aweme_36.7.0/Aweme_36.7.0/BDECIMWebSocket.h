@class NSString, BDECIMClientConfig, TTPushConfig, TTPushManager;

@interface BDECIMWebSocket : NSObject <WsDelegate>

@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) TTPushConfig *config;
@property (nonatomic) double startConnectingTimestamp;
@property (nonatomic) BOOL canTrackConnectFailure;
@property (nonatomic) BOOL canTrackConnectSuccess;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) BDECIMClientConfig *imClientConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsByURLEncode:(id)a0;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)webSocketBreak;
- (BOOL)asyncSendMessage:(id)a0;
- (void)openLongConnection;
- (void)closeLongConnection;
- (void)setupLongConnectionServiceWithToken:(id)a0 config:(id)a1;
- (void)trackWSConnectionWithSuccess:(BOOL)a0 extra:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)buildConfig;

@end
