@class AWEMessageReachDialogDataModel, NSString, AWEAlertContext, BDXBridgeEventSubscriber, UIView, NSTimer;
@protocol AWEMessageReachCommonDialogPluginProtocol, BDXViewContainerProtocol;

@interface AWEMessageReachLynxDialogHandler : NSObject <BDXContainerLifecycleProtocol, AWEMessageReachPopViewProtocol>

@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) long long priority;
@property (retain, nonatomic) AWEMessageReachDialogDataModel *dataModel;
@property (retain, nonatomic) id<AWEMessageReachCommonDialogPluginProtocol> plugin;
@property (weak, nonatomic) AWEAlertContext *alertContext;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxContainer;
@property (retain, nonatomic) NSTimer *showTimeoutTimer;
@property (copy, nonatomic) id /* block */ onShowed;
@property (copy, nonatomic) id /* block */ onClicked;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidClose:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)prepareWithContext:(id)a0 onCompletion:(id /* block */)a1;
- (BOOL)blockAllAlertWhenNotPreparedWithContext:(id)a0;
- (double)prepareTimeoutWithContext:(id)a0;
- (void)prepareTimeoutCompletedWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)mr_accessIDForEvent:(id)a0;
- (id)initWithComponentId:(id)a0 priority:(long long)a1 dataModel:(id)a2;
- (void)p_unsubscribeBridgeEvent;
- (id)p_commonParamsWithContext:(id)a0;
- (void)p_createPluginIfNeed;
- (BOOL)p_canShowByPlugin;
- (void)p_closeDialog:(BOOL)a0;
- (void)p_didShowDialogForPlugin;
- (void)p_addTimerIfNeed;
- (void)p_trackClickEventWithActionType:(id)a0;
- (void)p_trackCloseEventWithReason:(id)a0;
- (void)p_trackCloseEventWithCloseType:(unsigned long long)a0;
- (void)p_onShowTimeout;
- (void).cxx_destruct;
- (void)dealloc;

@end
