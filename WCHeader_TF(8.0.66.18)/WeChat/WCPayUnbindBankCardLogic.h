@class NSString, JSEvent;

@interface WCPayUnbindBankCardLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate> {
    JSEvent *m_jsEvent;
}

@property (retain, nonatomic) NSString *unbindCardBindSerial;
@property (retain, nonatomic) NSString *unbindCardQuickSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0;
- (void)startLogic;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)OnUnBindCard:(id)a0 Error:(id)a1;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)BackToRootView;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)stopLogic;
- (void).cxx_destruct;

@end
