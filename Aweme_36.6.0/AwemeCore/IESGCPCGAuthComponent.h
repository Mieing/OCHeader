@class NSNumber, NSString;
@protocol XPlayBusinessConfigProtocol;

@interface IESGCPCGAuthComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceAuthRequestActions, IESGCPCGInstanceActions, IESGCPCGAuthRouter, IESGCPCGMessageChannelActions>

@property (nonatomic) BOOL inAuthRequest;
@property (retain, nonatomic) id<XPlayBusinessConfigProtocol> xplayBusinessConfig;
@property (retain, nonatomic) NSNumber *loginErrorCode;
@property (copy, nonatomic) id /* block */ retryAuthBlock;
@property (nonatomic) BOOL useNewAuthLogic;
@property (nonatomic) long long clientLaunchAuthRetryCount;
@property (nonatomic) long long clientLaunchAuthMaxRetryCount;
@property (nonatomic) BOOL inAwemeAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)playInstanceDidReceiveAuthRequest:(id)a0;
- (void)playInstanceDidReceiveRealNameRequest:(id)a0;
- (void)playInstance:(id)a0 didReceiveAuthConfig:(id)a1;
- (void)playInstance:(id)a0 didReceiveAuthEvent:(id)a1;
- (id)authErrorCode;
- (void)sendAuthAndRealNameRequestWithCompletion:(id /* block */)a0;
- (void)didReceiveOSDKChannelMessage:(id)a0;
- (void)didReceivePodMiddleWareChannelMessage:(id)a0;
- (void)_handleAuthEventWithAuthInfo:(id)a0 completion:(id /* block */)a1;
- (void)_doAuthAndRealNameRequestWithCompletion:(id /* block */)a0;
- (void)_handleAuthEventByClient;
- (void)_doRealNameRequestWithCompletion:(id /* block */)a0;
- (void)_onAwemeAuthRequestFromMiddleWareWithData:(id)a0;
- (void)_onAwemeAuthRequestFromOSDKWithData:(id)a0;
- (void)_trackAbnormalStatisticsEvent:(long long)a0;
- (id)_awemeAuthAckInfoWithResult:(id)a0 extraInfo:(id)a1;
- (void)_doAwemeAuthorizeWithScopes:(id)a0 clientKey:(id)a1 openExtra:(id)a2 fromSource:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
