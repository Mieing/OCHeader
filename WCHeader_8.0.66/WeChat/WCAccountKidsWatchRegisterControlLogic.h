@class WCAccountBindPhoneForRegCGI, WCPrivacyPolicyControlLogic, NSString;
@protocol WCAccountKidsWatchRegisterControlLogicDelegate;

@interface WCAccountKidsWatchRegisterControlLogic : WCAccountBaseControlLogic <WCAccountBindPhoneForRegCGIDelegate, WCPrivacyPolicyControlLogicDelegate, KidsWatchBaseViewControllerDelegate, KidsWatchKidsRegisterFillFormViewControllerDelegate, KidsWatchKidsRegisterBindConfirmViewControllerDelegate, KidsWatchKidsRegisterDoneViewControllerDelegate, ICdnComMgrExt>

@property (retain, nonatomic) WCPrivacyPolicyControlLogic *privacyPolicyControlLogic;
@property (copy, nonatomic) id /* block */ privacyPolicyCompletionHandler;
@property (retain, nonatomic) WCAccountBindPhoneForRegCGI *bindPhoneCGI;
@property (nonatomic) unsigned int checkPhoneNumberRetryCount;
@property (nonatomic) unsigned int adjustRet;
@property (retain, nonatomic) NSString *headImageUploadClientId;
@property (nonatomic) BOOL isRegistering;
@property (readonly, weak, nonatomic) id<WCAccountKidsWatchRegisterControlLogicDelegate> m_logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)countryCode;
+ (id)ISOCode;
+ (id)headImageUploadTempPath;
+ (id)headImageUploadClientId:(id)a0;

- (void)startLogic;
- (void)checkPhoneNumberStatus;
- (void)getRegisterVerifyCode;
- (void)checkRegisterVerifyCode:(id)a0;
- (void)startRegister;
- (BOOL)uploadHeadImage;
- (void)registerKidsAccount;
- (void)registerKidsAccountWithHeadImage:(id)a0;
- (id)phoneNumber;
- (BOOL)checkViewController:(Class)a0;
- (void)backToViewController:(Class)a0 animated:(BOOL)a1;
- (id)getRegSessionID;
- (void)onCheckRegPhoneNumberStatus:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onGetRegVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onCheckRegVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onLeaveViewController:(id)a0;
- (void)closeAndExit;
- (void)closeAndExitWithSuccess:(BOOL)a0;
- (void)nextToPrivacyPolicyWithNickName:(id)a0 rawPhoneNumber:(id)a1 andHeadImage:(id)a2;
- (void)nextToGetVerifyCode;
- (void)nextToCheckVerifyCode:(id)a0;
- (void)nextToForceBindAndRegister;
- (void)backToRegisterBegin;
- (void)finishRegister;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (BOOL)onErrorHandleLogicAction:(id)a0;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
