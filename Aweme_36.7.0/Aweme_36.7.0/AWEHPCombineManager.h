@class AWEHPCombineSubscribeCenter, AWEHPCombineAutoTriggerCenter, NSString, AWEHPCombineNetworkManager, AWEHPCombineStrategyCenter;

@interface AWEHPCombineManager : NSObject <AWEHPCombineSubscribeCenterDelegate, AWEHPCombineAutoTriggerCenterDelegate>

@property (retain, nonatomic) AWEHPCombineNetworkManager *networkManager;
@property (retain, nonatomic) AWEHPCombineSubscribeCenter *subscribeCenter;
@property (retain, nonatomic) AWEHPCombineStrategyCenter *strategyCenter;
@property (retain, nonatomic) AWEHPCombineAutoTriggerCenter *triggerCenter;
@property (nonatomic) BOOL requestSessionID;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) long long retryScene;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trySetup;
- (void)triggerCenter:(id)a0 triggerScene:(long long)a1;
- (void)p_callHandleRequests:(id)a0;
- (void)p_callHandleResponsesWithRequests:(id)a0;
- (void)p_sendRequestWithAutoTriggerScene:(long long)a0 retryScene:(long long)a1;
- (void)p_sendRequestsWithRequests:(id)a0 autoTriggerScene:(long long)a1 retryScene:(long long)a2;
- (void)wrapper:(id)a0 sendRequestWithBody:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
