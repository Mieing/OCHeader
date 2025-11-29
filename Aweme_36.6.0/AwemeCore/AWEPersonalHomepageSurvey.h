@class NSString, UIViewController, AWEQuestionnaireResponse;

@interface AWEPersonalHomepageSurvey : NSObject <BDXContainerLifecycleProtocol, AWEAlertProtocol>

@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireResponse;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)containerDidClose:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onBroadcastNotification:(id)a0;
- (void)trackLoadResult:(BOOL)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (id)init;

@end
