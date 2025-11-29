@class NSString, NSData, JSEvent, WCPayCheckUserAuthJSApiCgi;
@protocol WCPayJSApiVerifyDelegate;

@interface WCPayJSApiVerifyPayPasswordControlLogic : WCPayControlLogic <WCPayNewPwdViewControllerDelegate, WCPayCheckUserAuthJSApiCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate> {
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    unsigned int m_verifyPayPwdStatus;
}

@property (retain, nonatomic) WCPayCheckUserAuthJSApiCgi *checkUserAuthJSApiCgi;
@property (retain, nonatomic) NSData *m_lastAuthBiotricData;
@property (nonatomic) BOOL m_bHasBiotricAuth;
@property (weak, nonatomic) id<WCPayJSApiVerifyDelegate> paramDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0;
- (void)startLogic;
- (void)OnGetCheckUserAuthJSApiResponseOK:(id)a0;
- (void)OnGetCheckUserAuthJSApiResponseError:(id)a0 errorCode:(unsigned int)a1;
- (void)stopLogic;
- (void)checkStopLogic;
- (void)OnWCPayNewPwdViewControllerBack;
- (void)verifyPayPwdNext:(id)a0;
- (void)verifyPayBiotricNext:(id)a0;
- (void)verifyPayBiotricNext:(id)a0 signature:(id)a1 signSrc:(id)a2;
- (BOOL)isNewPwdLoading;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)a0;
- (void)VerifyPayCardAgain:(id)a0;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)onAlertResetPwdCancel:(id)a0;
- (void)onAlertResetPwdConfirm:(id)a0;
- (void)OnGetCheckPayPwdByToken:(id)a0 Error:(id)a1;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
