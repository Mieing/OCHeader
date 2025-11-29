@class IESLiveIMWebSocketFetcher, IESLiveIMBaseChannel, NSString, IESLiveIMConfig, NSDictionary, IESLiveIMHTTPFetcher;
@protocol IESLiveIMClientParamsConfig, IESLiveIMClientDataReceiver, IESLiveIMPaaSClient;

@interface IESLiveIMClientWrapper : NSObject <IESLiveIMChannelDelegate>

@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveIMConfig *imConfig;
@property (weak, nonatomic) id<IESLiveIMClientParamsConfig> paramsConfig;
@property (weak, nonatomic) id<IESLiveIMClientDataReceiver> dataReceiver;
@property (retain, nonatomic) IESLiveIMBaseChannel *imChannel;
@property (retain, nonatomic) IESLiveIMWebSocketFetcher *wsFetcher;
@property (retain, nonatomic) IESLiveIMHTTPFetcher *httpFetcher;
@property (copy, nonatomic) NSString *pushServer;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *internalExt;
@property (copy, nonatomic) NSDictionary *routeParams;
@property (weak, nonatomic) id<IESLiveIMPaaSClient> superClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)channel:(id)a0 opened:(id)a1;
- (void)channel:(id)a0 transportChanged:(id)a1;
- (void)channel:(id)a0 closed:(id)a1;
- (void)channel:(id)a0 received:(id)a1;
- (id)assembleHttpQuerys:(id)a0;
- (id)assembleHttpFetcherParams:(id)a0;
- (id)assembleHttpHeaders:(id)a0;
- (id)httpBodyField;
- (id)defaultWebsocketUrl;
- (id)assembleWsFetcherHeaders:(id)a0;
- (id)assembleWsFetcherParams:(id)a0;
- (void)setupHttpFetcherWithConfig:(id)a0;
- (void)setupWsFetcherWithConfig:(id)a0;
- (void)setupChannlWithConfig:(id)a0;
- (BOOL)isWebsocketFirst;
- (id)initWithNetConfig:(id)a0 imConfig:(id)a1;
- (void)reconnect;
- (void).cxx_destruct;
- (void)stop;
- (id)httpUrl;
- (void)start;

@end
