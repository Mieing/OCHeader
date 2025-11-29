@class UIViewController, UIWindow;

@interface WCAccountManualLoginControlMgr : WCBaseControlMgr <MMKernelExt> {
    UIViewController *m_firstViewController;
    UIWindow *m_window;
}

- (id)init;
- (void)dealloc;
- (id)getWindow;
- (void)setMainWindowRootView:(id)a0;
- (void)openFirstView:(id)a0;
- (void)closeFirstViewWithFadeOutAnimation;
- (void)closeFirstView:(BOOL)a0;
- (void)switchLogin;
- (void)reportClickAction:(unsigned int)a0;
- (unsigned int)startLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startLastUserLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startMainLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startOneClickLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startQRCodeLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startPhoneRegLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startThirdAppRegisterLogic:(id)a0 Data:(id)a1;
- (unsigned int)startFacebookLogic:(id)a0 Data:(id)a1;
- (unsigned int)startAppleLogic:(id)a0 Data:(id)a1;
- (unsigned int)startPasskeyLogic:(id)a0 Data:(id)a1;
- (unsigned int)startSecurityCenterLogic:(id)a0 Data:(id)a1;
- (unsigned int)startNewPhoneLoginLogic:(id)a0 Data:(id)a1;
- (unsigned int)startKidsWatchLogic:(id)a0 Data:(id)a1;
- (unsigned int)startRegAffiliatedAcct:(id)a0 Data:(id)a1;
- (void)reportADID;
- (void)reportPhoneSwitchToOthersOrReverse:(BOOL)a0;
- (void)reportPwdSwitchToVerifyOrReverse:(BOOL)a0;
- (void)reportLogoutDefaultPhoneOrNot:(BOOL)a0;
- (void)reportLogoutSwitchToOtherMethodToLogin;
- (void)reportLogoutSwitchToOtherAccount;
- (void).cxx_destruct;

@end
