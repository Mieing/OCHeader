@class AWEMessageReachDialogDataModel, NSString, BDXBridgeEventSubscriber, AWEMRForceLynxDialogConfig, AWEForceAlertContext, AWEForceAlertCallbackWrapper;

@interface AWEMRForceLynxDialogHandler : NSObject <BDXContainerLifecycleProtocol, AWEForceAlertProtocol>

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) AWEMRForceLynxDialogConfig *localConfig;
@property (nonatomic) BOOL didTrackCloseEvent;
@property (retain, nonatomic) AWEMessageReachDialogDataModel *dialogConfig;
@property (retain, nonatomic) AWEForceAlertContext *alertContext;
@property (retain, nonatomic) AWEForceAlertCallbackWrapper *callbackWrapper;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidClose:(id)a0;
- (id)commonParamsWithContext:(id)a0;
- (id)forceAlertIDForEvent:(id)a0;
- (unsigned long long)forceAlertViewStyleForEvent:(id)a0;
- (void)forceShowWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)forceDismissWithCallTrace:(id)a0;
- (void)subscribeBridgeEvent;
- (void)unsubscribeBridgeEvent;
- (id)initWithComponentId:(id)a0 localConfig:(id)a1;
- (void)generateNativeDataModel;
- (void)closeDialogWithShowed:(BOOL)a0;
- (void)timingCloseIfNeeded;
- (void)handleBridgeEvent:(id)a0 paramDict:(id)a1;
- (void)handleClickEventWithParamDict:(id)a0;
- (void)handleCloseEventWithParamDict:(id)a0;
- (void)trackClickEventWithParamDict:(id)a0;
- (void)trackCloseEventWithParamDict:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
