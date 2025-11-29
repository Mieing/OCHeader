@class WCPayPaySecurityCgi, NSString;
@protocol WCPayWalletLockSettingViewControllerDelegate;

@interface WCPayWalletLockSettingViewController : WCPayBaseViewController <WCPayPaySecurityCgiDelegate>

@property (retain, nonatomic) WCPayPaySecurityCgi *m_securityCgi;
@property (weak, nonatomic) id<WCPayWalletLockSettingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paySecurityCgi:(id)a0 didGetResponse:(id)a1;
- (void)paySecurityCgi:(id)a0 didFailWithError:(id)a1;
- (void)onConfirmError;
- (unsigned int)walletLockVCEntryScene;
- (void)viewDidLoad;
- (void)reload;
- (void)reloadTableView;
- (BOOL)patternLockIsCurrentWalletLock;
- (BOOL)isSpecailPatternLockOpen;
- (BOOL)isTouchLockOpen;
- (void)clickTouchLock;
- (void)clickPatternLock;
- (void)clickClose;
- (void)clickModifyPatternLock;
- (void).cxx_destruct;

@end
