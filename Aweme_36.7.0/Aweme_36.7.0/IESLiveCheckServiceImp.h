@class NSArray, NSDictionary, NSString, IESLiveCheckApi, NSMutableArray;
@protocol IESLiveCheckSubscriberProtocol;

@interface IESLiveCheckServiceImp : NSObject <IESLiveByteLinkCheckServiceMessageReceiver, IESLiveCheckService>

@property (copy, nonatomic) NSArray *params;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id /* block */ broadcast;
@property (weak, nonatomic) id<IESLiveCheckSubscriberProtocol> subscriber;
@property (copy, nonatomic) NSArray *byteLinkEnableScenes;
@property (retain, nonatomic) IESLiveCheckApi *checkApi;
@property (nonatomic) struct IESLiveCheckConfig { BOOL x0; BOOL x1; BOOL x2; } *liveCheckConfig;
@property (nonatomic) BOOL subscribeSuccess;
@property (retain, nonatomic) NSMutableArray *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ liveCheckUpLinkBlock;
@property (copy, nonatomic) id /* block */ frontierConnected;

+ (id)sharedInstance;

- (id)enableByteLinkScenes;
- (BOOL)forbidHttpCheck;
- (long long)accelerateCheckTime:(long long)a0 Type:(unsigned long long)a1;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 subscriber:(id)a1;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 subscriber:(id)a1 complete:(id /* block */)a2;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 broadcast:(id /* block */)a1;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 broadcast:(id /* block */)a1 complete:(id /* block */)a2;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 extra:(id)a1 subscriber:(id)a2;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 extra:(id)a1 subscriber:(id)a2 complete:(id /* block */)a3;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 extra:(id)a1 broadcast:(id /* block */)a2;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 extra:(id)a1 broadcast:(id /* block */)a2 complete:(id /* block */)a3;
- (void)unregisterLiveStatusCheckInterceptor:(id)a0;
- (void)liveCheckUseByteLinkAgentWithParam:(id)a0 completion:(id /* block */)a1;
- (void)refreshSubscribeStatus;
- (void)registerLiveStatusCheckInterceptor:(id)a0;
- (void)setConfig;
- (BOOL)enableByteLink;
- (void)receivePushMessages:(id)a0;
- (void)receiveFetchMessage:(id)a0;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 extra:(id)a1 complete:(id /* block */)a2;
- (BOOL)isSameSubscribeWithParams:(id)a0;
- (void)trackSubscribeWithParams:(id)a0;
- (void)byteLinkSubscribeWithParams:(id)a0 extra:(id)a1 complete:(id /* block */)a2;
- (void)checkLiveWithCheckParams:(id)a0 completion:(id /* block */)a1;
- (void)sendBroadcastWithCheckResult:(id)a0;
- (void)trackSubscribeSuccessWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
