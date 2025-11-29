@class NSString, WCPayResetPwdByTokenCgi, WCPayPayPwdViewController;

@interface WebviewJSEventHandler_setWCPayPassword : WebviewJSEventHandlerBase <WCPayPayPwdViewControllerDelegate, WCPayLogicMgrExt, WCPayResetPwdByTokenCgiDelegate>

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) WCPayPayPwdViewController *pwdVC;
@property (retain, nonatomic) WCPayResetPwdByTokenCgi *resetCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)SetPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)resetPwdByTokenCgi:(id)a0 didGetResponse:(id)a1;
- (void)resetPwdByTokenCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
