@class AWEMessageReachDialogDataModel, NSString, AWEMessageReachNativeDialog, AWEForceAlertCallbackWrapper, AWEForceAlertContext, AWEMRForceNativeDialogConfig;
@protocol AWEMRForceCommonDialogPluginProtocol;

@interface AWEMRForceNativeDialogHandler : NSObject <AWEMessageReachNativeDialogDelegate, AWEForceAlertProtocol>

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) AWEMRForceNativeDialogConfig *localConfig;
@property (nonatomic) long long showTimeout;
@property (retain, nonatomic) AWEMessageReachDialogDataModel *dialogConfig;
@property (retain, nonatomic) AWEForceAlertContext *alertContext;
@property (retain, nonatomic) AWEForceAlertCallbackWrapper *callbackWrapper;
@property (retain, nonatomic) AWEMessageReachNativeDialog *dialog;
@property (retain, nonatomic) id<AWEMRForceCommonDialogPluginProtocol> plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forceAlertIDForEvent:(id)a0;
- (unsigned long long)forceAlertViewStyleForEvent:(id)a0;
- (void)forceShowWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)forceDismissWithCallTrace:(id)a0;
- (void)dismissDialogWithAnimated:(BOOL)a0 closeType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithComponentId:(id)a0 localConfig:(id)a1 plugin:(id)a2;
- (void)messageReachNativeDialogAppearSuccess:(id)a0;
- (void)messageReachNativeDialog:(id)a0 clickActionButton:(id)a1;
- (void)messageReachNativeDialog:(id)a0 countDownTimeArrived:(id)a1;
- (void)messageReachNativeDialogClickCloseButton:(id)a0;
- (void)messageReachNativeDialogClickMask:(id)a0;
- (void)messageReachNativeDialogDealloc:(id)a0;
- (void)messageReachNativeDialogDragToDismiss:(id)a0;
- (void)p_dismissDialogWithOutUIWithCloseType:(unsigned long long)a0;
- (id)pluginTrackParamsForEvent:(unsigned long long)a0;
- (void)generateNativeDataModel;
- (BOOL)enableCloseCallbackFix;
- (void).cxx_destruct;
- (void)setup;

@end
