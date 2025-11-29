@class WCAccountAutoLoginControlLogic, NSString, WCAccountSignHelper, WCAccountSwitchLogic, WCAccountCloseMainFrameLogic;

@interface WCAccountControlMgr : MMUserService <MMKernelExt, MMAuthServiceExt, WCAccountAutoLoginControlLogicDelegate, WCAccountCloseMainFrameLogicDelegate, MMServiceProtocol> {
    NSString *m_reportClientID;
    WCAccountAutoLoginControlLogic *m_autoLoginLogic;
    BOOL m_isAutoLoginRequiring;
    WCAccountSwitchLogic *m_switchLogic;
    WCAccountCloseMainFrameLogic *m_closeMainFrameLogic;
    id /* block */ m_quitCompleteBlock;
}

@property BOOL m_isMainHostDisaster;
@property unsigned long long m_lastmakesuretime;
@property (nonatomic) unsigned long long m_lastAuthFinishTime;
@property BOOL m_needAuthAgainForUpdateInfo;
@property (retain, nonatomic) WCAccountSignHelper *signHelper;
@property BOOL m_isInMainFrame;
@property BOOL m_isLogin;
@property BOOL m_isAutoLoginMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)inheritFromAccountControlMgrForGuest:(id)a0;
- (BOOL)isInSwitchView;
- (BOOL)isSupportPureOfflineMigration;
- (id)getReportClientID;
- (void)resetReportClientID;
- (void)startManualAuth;
- (id)getLoginUserInfos;
- (void)updateLastLoginInfo:(id)a0;
- (void)updateLastLoginInfo:(id)a0 fromSwitch:(BOOL)a1;
- (void)deleteLoginInfo:(id)a0;
- (id)getCurrentLoginInfo;
- (void)reportSwitchAccountWithOpCode:(unsigned int)a0 userName:(id)a1;
- (BOOL)isLogoutSwitch;
- (void)startAutoAuth;
- (BOOL)isLogin;
- (void)resetLastAuthTime;
- (BOOL)makeSureAuthWithHost:(id)a0;
- (void)onSessionTimeout;
- (void)onNotifyDisasterNode:(id)a0;
- (void)quitLogin;
- (void)logoutCurrentAccount:(id /* block */)a0;
- (void)setSwitchLogin:(id)a0;
- (void)deleteAccountSuccess;
- (void)makeAutoAuthForUpdateInfo;
- (void)makeAutoAuth;
- (void)onCloseMainFrameWithoutStop;
- (id)pubKeyInfoAfterUpdateForCgiName:(id)a0;
- (id)pubKeyInfoWithoutUpdate;
- (id)ecdsaSignWithData:(id)a0;
- (void)tryTestEcdsaSign;
- (void)doTestEcdsaSignCgi;
- (void)onWCAccountCloseMainFrameLogicDone;
- (void)startCloseMainFrame:(unsigned int)a0;
- (void)onWCAccountAutoLoginControlLogicStop:(unsigned long long)a0;
- (void)onPreQuit;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)onAxTicketExpiredWithNeedRetryAuth;
- (void).cxx_destruct;

@end
