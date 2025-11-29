@class WCPayCloseWalletLockCgi, WCPayWalletLockSettingViewController, NSString;
@protocol WCPayWalletLockSettingLogicDelegate;

@interface WCPayWalletLockSettingLogic : WCPaySecurityBaseControlLogic <WCPayWalletLockSettingViewControllerDelegate, MMPatternLockLogicDelegate, WCPayCloseWalletLockCgiDelegate, MMTipsViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayTouchLockSettingLogicDelegate>

@property (nonatomic) unsigned int patternLockLogicTag;
@property (retain, nonatomic) WCPayCloseWalletLockCgi *closeWalletLockCgi;
@property (retain, nonatomic) WCPayWalletLockSettingViewController *settingVC;
@property (nonatomic) long long m_patterLockScene;
@property (weak, nonatomic) id<WCPayWalletLockSettingLogicDelegate> delegate;
@property (nonatomic) unsigned int entryScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1 entryScene:(unsigned int)a2;
- (void)startLogic;
- (void)startKindaWalletLockSetting;
- (void)WCPayViewControllerDidBeRemoved:(id)a0;
- (void)showPasswordVC;
- (unsigned int)walletLockVCEntryScene;
- (void)walletLockVCClickTouchLock:(id)a0;
- (void)walletLockVCClickPatternLock:(id)a0;
- (void)walletLockVCClickClose:(id)a0;
- (void)walletLockVCClickModifyPatternLock:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (BOOL)needCancelPopAnimation;
- (void)touchLockSettingLogicSetupSuccess:(id)a0;
- (void)closeWalletLockCgi:(id)a0 didGetResponse:(id)a1;
- (void)closeWalletLockCgi:(id)a0 didFailWithError:(id)a1;
- (void)OnVerifyPayPassword:(id)a0;
- (void).cxx_destruct;

@end
