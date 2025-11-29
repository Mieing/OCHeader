@class NSString, NSTimer, UIView, NSNumber;
@protocol BDXViewContainerProtocol;

@interface AWELynxPopup : NSObject <BDXContainerLifecycleProtocol, AWELynxPopupProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxContainer;
@property (retain, nonatomic) NSTimer *prepareTimeoutTimer;
@property (retain, nonatomic) NSTimer *showTimeoutTimer;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) NSString *alertID;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSNumber *lynxURLTimeout;
@property (copy, nonatomic) NSString *lynxControllerURL;
@property (retain, nonatomic) NSNumber *lynxControllerURLTimeout;
@property (nonatomic) BOOL cancelOtherAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidClose:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)commonParamsWithContext:(id)a0;
- (void)onCloseOfAlert:(BOOL)a0;
- (void)onCheckCanShowComplete:(BOOL)a0 context:(id)a1;
- (void)onPrepareTimeout;
- (void)showLynxPopupWithContext:(id)a0;
- (void)onShowTimeout;
- (void)startCheckCanShowWithContext:(id)a0;
- (void)onLynxViewClose:(id)a0;
- (void).cxx_destruct;

@end
