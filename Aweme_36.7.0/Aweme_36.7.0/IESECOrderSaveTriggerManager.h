@class IESECOrderSavedEventChainManager;
@protocol IESECOrderListBaseTrackInterface, YataInstanceInterface;

@interface IESECOrderSaveTriggerManager : NSObject

@property (retain, nonatomic) IESECOrderSavedEventChainManager *savedEventChainManager;
@property (weak, nonatomic) id<IESECOrderListBaseTrackInterface> trackerManager;
@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;

- (void)trackMonitorForCommonLogWithDesc:(id)a0 extraDict:(id)a1;
- (void)subscribeEventForSaveTrigger:(id)a0;
- (void)saveEventChain:(id)a0 listenerName:(id)a1;
- (void)clearSaveTriggerWhenViewWillReappear;
- (id)initWithTrackerManager:(id)a0 yataInstance:(id)a1;
- (void)clearSaveTriggerEventWhenProtocolClear;
- (void)processSaveTriggerWithListenerName:(id)a0 params:(id)a1;
- (void)processSaveTriggerWithNotification:(id)a0;
- (void)unSubscribeEventForSaveTrigger:(id)a0 sceneType:(id)a1;
- (void)triggerEventWithOptEventChain:(id)a0;
- (void).cxx_destruct;

@end
