@class AWEMessageReachDialogDataModel, NSString, AWEMessageReachNativeDialog, AWEAlertContext, NSTimer;
@protocol AWEMessageReachCommonDialogPluginProtocol;

@interface AWEMessageReachNativeDialogHandler : NSObject <AWEMessageReachNativeDialogDelegate, AWEMessageReachPopViewProtocol>

@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) long long priority;
@property (retain, nonatomic) AWEMessageReachDialogDataModel *dataModel;
@property (retain, nonatomic) AWEMessageReachNativeDialog *dialog;
@property (retain, nonatomic) id<AWEMessageReachCommonDialogPluginProtocol> plugin;
@property (weak, nonatomic) AWEAlertContext *alertContext;
@property (retain, nonatomic) NSTimer *showTimeoutTimer;
@property (copy, nonatomic) id /* block */ onShowed;
@property (copy, nonatomic) id /* block */ onClicked;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)mr_accessIDForEvent:(id)a0;
- (id)initWithComponentId:(id)a0 priority:(long long)a1 dataModel:(id)a2;
- (void)dismissDialogWithAnimated:(BOOL)a0 withCloseType:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)p_createPluginIfNeed;
- (BOOL)p_canShowByPlugin;
- (void)p_didShowDialogForPlugin;
- (void)p_addTimerIfNeed;
- (void)p_onShowTimeout;
- (void)messageReachNativeDialogAppearFailed:(id)a0;
- (void)messageReachNativeDialogLoadImageFailed:(id)a0;
- (void)messageReachNativeDialogAppearSuccess:(id)a0;
- (void)messageReachNativeDialog:(id)a0 clickActionButton:(id)a1;
- (void)messageReachNativeDialog:(id)a0 countDownTimeArrived:(id)a1;
- (void)messageReachNativeDialogClickCloseButton:(id)a0;
- (void)messageReachNativeDialogClickMask:(id)a0;
- (void)messageReachNativeDialogDealloc:(id)a0;
- (void)messageReachNativeDialogDragToDismiss:(id)a0;
- (void)p_dismissDialogWithOutUIWithCloseType:(unsigned long long)a0;
- (id)pluginTrackParamsForEvent:(unsigned long long)a0;
- (void).cxx_destruct;

@end
