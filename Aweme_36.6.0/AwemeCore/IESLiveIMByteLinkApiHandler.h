@class NSMutableDictionary, NSTimer, NSString, IESLiveIMAppConfig, IESLiveIMByteLinkApiHttpHandler;

@interface IESLiveIMByteLinkApiHandler : NSObject <IESLiveIMByteLinkApiService, IESLiveIMByteLinkDownlinkHandler>

@property (nonatomic) unsigned long long strategy;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSMutableDictionary *requestMap;
@property (retain, nonatomic) IESLiveIMAppConfig *appConfig;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) IESLiveIMByteLinkApiHttpHandler *httpHandler;
@property (copy, nonatomic) id /* block */ sendMessageByByteLink;
@property (copy, nonatomic) id /* block */ byteLinkIsConnected;
@property (nonatomic) BOOL forceHttp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logEvent:(id)a0 params:(id)a1;
- (void)setupApiReqTimeout:(double)a0;
- (void)sendApiMessageWithRequest:(id)a0 callback:(id /* block */)a1;
- (void)checkTimerStatus;
- (void)handleDownlinkMessage:(id)a0;
- (void)p_sendApiMessageWithRequest:(id)a0 callback:(id /* block */)a1;
- (void)p_handleDownlinkMessage:(id)a0;
- (id)p_uplinkPacketWithReq:(id)a0;
- (void)p_sendApiMessageByByteLink:(id)a0;
- (id)p_pushMessageWithApiModel:(id)a0;
- (void)addApiModel:(id)a0;
- (id)p_objKeyFromPacket:(id)a0;
- (void)removeApiModel:(id)a0;
- (void)p_addQueryToParams:(id)a0 fromParams:(id)a1;
- (void)p_addCookieToParams:(id)a0;
- (long long)nextUniqueId;
- (void)stopTimer;
- (id)errorWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)setup;
- (id)payloadType;
- (void)checkTimeout;

@end
