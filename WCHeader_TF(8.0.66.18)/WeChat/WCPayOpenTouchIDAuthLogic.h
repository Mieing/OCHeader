@class NSString, WCPayBioPayV2UpdateAuthKeyCgi, WCPayBioPayV2GetChallengeCgi;
@protocol WCPayOpenTouchIDAuthLogicDelegate;

@interface WCPayOpenTouchIDAuthLogic : WCPayControlLogic <MMTipsViewControllerDelegate, WCPayBioPayV2UpdateAuthKeyCgiDelegate, WCPayBioPayV2GetChallengeCgiDelegate>

@property (retain, nonatomic) WCPayBioPayV2UpdateAuthKeyCgi *updateAuthKeyCgi;
@property (retain, nonatomic) WCPayBioPayV2GetChallengeCgi *getChallengeCgi;
@property (retain, nonatomic) NSString *liteAppErrorCode;
@property (nonatomic) BOOL isUseLiteApp;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long source;
@property (weak, nonatomic) id<WCPayOpenTouchIDAuthLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)stopLogic;
- (void)refreshLocalDataFromServerWithState:(BOOL)a0;
- (void)openTouchPay;
- (void)openTouchPay:(BOOL)a0 msgString:(id)a1 signature:(id)a2;
- (void)showCommonError:(id)a0 errorCode:(long long)a1 dimissView:(BOOL)a2;
- (void)showErrorFromManagePage:(id)a0;
- (void)handleError:(id)a0 errorCode:(long long)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)openPWDVC;
- (void)showCloseAlert;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)alertViewClickCancel;
- (void)alertViewClickConfirm;
- (void)verifyPassword;
- (void)onAlertViewIKnow;
- (void)onAlertViewCancel;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(id)a0;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayBioPayV2GetChallengeCgiResponseOK:(id)a0;
- (void)onWCPayBioPayV2GetChallengeCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)callOkDelegate;
- (void)callFailDelegate:(id)a0;
- (void).cxx_destruct;

@end
