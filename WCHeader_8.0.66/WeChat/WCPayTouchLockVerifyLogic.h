@class WCPayCloseWalletLockCgi, WCPayTouchLockAuthenCgi, NSData, NSString;
@protocol WCPayTouchLockVerifyLogicDelegate;

@interface WCPayTouchLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, MMTipsViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayCloseWalletLockCgiDelegate, WCPayWalletLockSettingLogicDelegate, WCPayTouchLockAuthenCgiDelegate, WCPayVerifyTouchLockViewControllerDelegate>

@property (nonatomic) unsigned int patternLockLogicTag;
@property (retain, nonatomic) WCPayCloseWalletLockCgi *closeWalletLockCgi;
@property (retain, nonatomic) NSData *domainData;
@property (retain, nonatomic) WCPayTouchLockAuthenCgi *authenCgi;
@property (weak, nonatomic) id<WCPayTouchLockVerifyLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)showNotSupportTouchID;
- (void)showTouchIDNotEnrolled;
- (void)showPasswordVC:(long long)a0;
- (void)checkTouchID;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0 vc:(id)a1;
- (void)shouldVerifyTouchLock:(id)a0;
- (void)shouldVerifyPassword:(id)a0;
- (BOOL)needBlockBack:(id)a0;
- (void)verifyViewControllerBack:(id)a0;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (BOOL)needCancelPopAnimation;
- (void)walletLockDidClose:(id)a0;
- (void)touchLockDidSetup:(id)a0;
- (void)patternLockDidSetup:(id)a0;
- (void)walletLockSettingLogicWillStop:(id)a0;
- (void)closeWalletLockCgi:(id)a0 didGetResponse:(id)a1;
- (void)closeWalletLockCgi:(id)a0 didFailWithError:(id)a1;
- (void)OnVerifyPayPassword:(id)a0;
- (void)touchLockAuthenCgi:(id)a0 didGetResponse:(id)a1;
- (void)touchLockAuthenCgi:(id)a0 didFailWithError:(id)a1;
- (void)touchLockAuthenCgiVerifyPwdFail:(id)a0;
- (void).cxx_destruct;

@end
