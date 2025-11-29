@class IESLiveIMByteLinkClientWrapper, NSString, NSMutableDictionary, IESLiveIMByteLinkConfig, IESLiveIMBizConfig, IESLiveIMAppConfig, IESLiveIMByteLinkDispatcher;

@interface IESLiveIMByteLinkActionCreator : NSObject <IESLiveIMClientParamsConfig, IESLiveIMClientDataReceiver, IESLiveIMByteLinkService>

@property (copy, nonatomic) NSString *xByteLinkCursor;
@property (copy, nonatomic) NSString *xByteLinkInternalExt;
@property (retain, nonatomic) NSMutableDictionary *allPublishersDic;
@property (retain, nonatomic) NSMutableDictionary *requestDic;
@property (nonatomic) long long requestTotal;
@property (nonatomic) long long responseTotal;
@property (retain, nonatomic) IESLiveIMAppConfig *appConfig;
@property (retain, nonatomic) IESLiveIMBizConfig *bizConfig;
@property (retain, nonatomic) IESLiveIMByteLinkConfig *bytelinkConfig;
@property (retain, nonatomic) IESLiveIMByteLinkDispatcher *imDispatcher;
@property (retain, nonatomic) IESLiveIMByteLinkClientWrapper *imClient;
@property (retain, nonatomic) NSMutableDictionary *downlinkHandlerMap;
@property (nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ configBlock;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)addSubscriber:(id)a0 forMessages:(id)a1;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)setPublishers:(id)a0 withTenant:(id)a1 completion:(id /* block */)a2;
- (void)removeSubscriber:(id)a0 forMessages:(id)a1;
- (BOOL)sendData:(id)a0 withBizMethod:(long long)a1 completion:(id /* block */)a2;
- (void)deletePublishersWith:(id)a0 completion:(id /* block */)a1;
- (void)didRecievePacket:(id)a0;
- (void)setupWithIMConfig:(id)a0;
- (void)updateAllPublishersWith:(id)a0;
- (void)trackTimeoutRequest;
- (void)handleReceivedPushObj:(id)a0;
- (id)createHeartbeat;
- (void)sendSubscribeWith:(id)a0 completion:(id /* block */)a1;
- (id)createSubscribeWith:(id)a0;
- (id)websocketUrl;
- (id)httpQuerys:(id)a0;
- (id)httpParams:(id)a0;
- (id)websocketHeaders:(id)a0;
- (id)websocketParams:(id)a0;
- (id)httpHeader:(id)a0;
- (void)registerDownlinkHandler:(id)a0;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;
- (void)stop;
- (id)httpUrl;
- (void)start;
- (id)httpBody;
- (void)setup;
- (void)addSubscriber:(id)a0;
- (long long)defaultTimeout;

@end
