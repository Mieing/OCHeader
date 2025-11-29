@class NSString, NSMutableDictionary;

@interface WCPayWordingHelpMgr : MMUserService <MMServiceProtocol, MMPackageDownloadMgrExt, IMMLanguageMgrExt>

@property (nonatomic) unsigned int lastUpdateTime;
@property (retain, nonatomic) NSMutableDictionary *serverDefaultWordingDict;
@property (retain, nonatomic) NSMutableDictionary *validityDynamicWordingDict;
@property (retain, nonatomic) NSMutableDictionary *phoneNumberDynamicWordingDict;
@property (retain, nonatomic) NSMutableDictionary *cvvCodeDynamicWordingDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)onLanguageChange;
- (void)receiveWordingContent:(id)a0;
- (void)tryDownloadWCPayWording;
- (void)onPackageListUpdated:(id)a0;
- (BOOL)loadAndUpdateWCPayWording;
- (void)saveWCPayWording:(id)a0;
- (BOOL)writeToFile:(id)a0 data:(id)a1;
- (BOOL)isShowPersonalInfo;
- (id)getPersonalInfoWording;
- (BOOL)isShowValidity:(id)a0;
- (id)getValidityWording:(id)a0;
- (BOOL)isShowPhoneNumber:(id)a0;
- (id)getPhoneNumberWordingWithBankCardInfo:(id)a0;
- (id)getPhoneNumberWording:(id)a0;
- (BOOL)isShowSmsVerifyCode;
- (id)getSmsVerifyCodeTipWording;
- (id)getSmsVerifyCodeWording;
- (BOOL)isShowCardNumberInputTip;
- (id)getCardNumberInputTipWording;
- (BOOL)isShowCardNumberInputSafetyTip;
- (id)getCardNumberInputSafetyInstructionDescWording;
- (BOOL)isShowCVVCode:(id)a0;
- (id)getCVVCodeWoring:(id)a0;
- (void).cxx_destruct;

@end
