@class NSString;
@protocol WCAccountBindPhoneControlLogicDelegate;

@interface WCAccountBindPhoneControlLogic : WCAccountBaseControlLogic <SettingModifyAliasViewControllerDelegate, WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, PBMessageObserverDelegate> {
    unsigned long long m_scene;
    NSString *m_nsOldPhone;
    id<WCAccountBindPhoneControlLogicDelegate> m_delegate;
    BOOL m_stopLogicIfCancelSetAlias;
    NSString *m_policyAgreementTicket;
    NSString *m_verifyTicket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (id)initWithData:(id)a0;
- (id)getData;
- (void)setScene:(unsigned int)a0;
- (void)stopLogic;
- (void)dealloc;
- (void)startlogicFromServerGuidanceWithRestrictiveISOContryCode:(id)a0;
- (void)startLogicToSetAlias;
- (void)startChangelogic:(id)a0;
- (void)startVerifylogic;
- (void)startLogic;
- (void)cancelAllEvent;
- (id)getFullPhoneNum;
- (unsigned int)getReadyOpcode;
- (unsigned int)getCheckOpcode;
- (BOOL)getVerifyCodeReady;
- (BOOL)getVoideVerifyCodeReady:(id)a0;
- (BOOL)checkVerifyCode:(id)a0;
- (BOOL)forceTakeOverPhone;
- (BOOL)startBindOpMobileRequest:(id)a0;
- (void)showBindSuccessViewWithNeedRestart:(BOOL)a0;
- (void)showModifyAliasViewControllerWithAnimated:(BOOL)a0;
- (void)onFillPhoneBack:(id)a0;
- (void)onFillPhoneNext:(id)a0 countryIsoCode:(id)a1 phoneNum:(id)a2;
- (void)doFillPhoneNext;
- (void)onPhoneVerifyBack:(id)a0;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyNext:(id)a0;
- (void)onVoiceVerifyBack:(id)a0;
- (void)onVoiceVerifyGetVerifyCode:(id)a0;
- (BOOL)onHandleError:(id)a0;
- (void)bindPhoneReturn:(id)a0;
- (void)callCheckOK;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)isFromChange;
- (BOOL)isFromBind;
- (BOOL)isFromVerify;
- (void)updateLastLoginName;
- (void)onSettingModifyAliasSuccess;
- (BOOL)onSettingModifyAliasQuitNakeWxProtect;
- (id)getViewController;
- (void)onErrorHandleLogicDone;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)a0;
- (void)onErrorHandleLogicDoneWithPolicyListIsAgreed:(BOOL)a0 policyAgreementTicket:(id)a1;
- (void).cxx_destruct;

@end
