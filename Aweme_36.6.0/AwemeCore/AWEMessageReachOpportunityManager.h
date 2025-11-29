@class NSString;
@protocol IESLCMessageHandlerProtocol, AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachOpportunityManager : NSObject <AWEUserMessage, IESLCMessageHandlerService>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (id)getGuaranteeEvent;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)requestFromChannelWithBussinessParamsModel:(id)a0;
- (void)handlePitayaMessage:(id)a0;
- (void)followTabSwitchOn;
- (void)requestDelayBubbleWithTask:(id)a0;
- (void)appDidFinishColdLaunch;
- (void)appDidFinishHotLaunch;
- (BOOL)handleCachePitayaMessage:(id)a0;
- (void)backToMainPage:(id)a0;
- (void)p_handleLongConnectMessage:(id)a0 triggerEvent:(id)a1;
- (id)collectBussinessParamsWithTriggerEvent:(id)a0 source:(id)a1 scenes:(id)a2;
- (BOOL)pitayaReturnHomepageForbid;
- (id)collectAllBizParamsWithTriggerEvent:(id)a0 source:(id)a1;
- (void)requestFromGrouponWithBussinessParamsModel:(id)a0;
- (void)requestFromMallWithBussinessParamsModel:(id)a0;
- (id)collectDelayBubbleTaskParamsWithTriggerEvent:(id)a0 task:(id)a1;
- (void)requestFromSideBarWithExtraReqPramas:(id)a0 triggerCompletion:(id /* block */)a1 updateTask:(id)a2;
- (void)handleMessage:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)startMonitor;

@end
