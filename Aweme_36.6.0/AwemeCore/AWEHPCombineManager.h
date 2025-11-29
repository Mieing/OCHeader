@class AWEHPCombineSubscribeCenter, AWEHPCombineAutoTriggerCenter, NSString, AWEHPCombineNetworkManager, AWEHPCombineStrategyCenter;

@interface AWEHPCombineManager : NSObject <AWEHPCombineSubscribeCenterDelegate, AWEHPCombineAutoTriggerCenterDelegate>

@property (retain, nonatomic) AWEHPCombineNetworkManager *networkManager;
@property (retain, nonatomic) AWEHPCombineSubscribeCenter *subscribeCenter;
@property (retain, nonatomic) AWEHPCombineStrategyCenter *strategyCenter;
@property (retain, nonatomic) AWEHPCombineAutoTriggerCenter *triggerCenter;
@property (nonatomic) BOOL requestSessionID;
@property (nonatomic) BOOL hasSetup;
@property (copy, nonatomic) NSString *retryScene;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)triggerCenter:(id)a0 triggerScene:(id)a1;
- (void)p_sendRequestWithAutoTriggerScene:(id)a0;
- (void)p_sendRequestWithForceRequest:(id)a0 completion:(id /* block */)a1;
- (void)businessRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
