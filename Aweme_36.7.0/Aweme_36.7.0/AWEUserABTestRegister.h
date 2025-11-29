@interface AWEUserABTestRegister : NSObject

+ (BOOL)hideCreateSubGuideDialog;
+ (BOOL)shouldUseUnifyUserStorage;
+ (void)_aweLazyRegisterStaticLoad;
+ (BOOL)isRestRequestUseSaas;
+ (BOOL)isThirdBindUseSaas;
+ (BOOL)loginPanelShowOpt;
+ (BOOL)isPhoneRequestUseSaas;
+ (BOOL)isOneKeyRequestUseSaas;
+ (BOOL)isSwitchAccountRequestUseSaaS;
+ (BOOL)vcdAccountLoginOptimize;
+ (BOOL)isSwitchAccountRequestUseSaaSGet;
+ (BOOL)isSwitchAccountControlGroupToPost;
+ (BOOL)useSwitchAccountSaaSSDK;
+ (Class)aAWEUserModuleConfigCommonClass;
+ (BOOL)loginSuccessTimeOpt;
+ (BOOL)createAccountRandomName;
+ (BOOL)canNotCreateSubAccount;
+ (BOOL)accountCreateSubAccount;
+ (unsigned long long)loginDeviceIdCheckStatus;
+ (unsigned long long)loginDeviceIdCheckType;
+ (long long)loginDeviceIdCheckTypeVid;
+ (BOOL)loginPanelAccessPanelManager;
+ (BOOL)shouldKickOffOnMigratePhone;
+ (BOOL)loginPanelUseNewAnimation;
+ (BOOL)shouldUsePreloginPanel;
+ (Class)aAWEUserModuleConfigCommonAdapterClass;
+ (BOOL)accountPhoneOneKeyNetworkOpt;
+ (BOOL)accountPhoneOneKeyTimeOpt;
+ (BOOL)carrierPhoneCacheTimeOpt;
+ (BOOL)carrierLoginUseSDKExp;
+ (long long)carrierLoginUseHardExpTime;
+ (BOOL)accountTrustLoginOpt;
+ (BOOL)enableRegisterABTestForLoginDeviceIdCheckType;
+ (BOOL)accountKickLogoutSaaS;
+ (Class)aAWEUserModuleConfigClass;
+ (id)overseaSMSLoginPanelThirdList;
+ (BOOL)shouldShowFindAccountEntrance;
+ (id)findAccountEntranceTitles;
+ (BOOL)enableUserPadSplitScreenOptimize;
+ (BOOL)combineFailShouldSendCode;
+ (BOOL)accountPhoneOneKeySuccessOpt;
+ (BOOL)carrierMaskLoginRequestOpt;
+ (BOOL)freeLoginIgnoreSwitch;
+ (BOOL)canShowGoogleLogin;
+ (BOOL)fullScreenSMSKeyboardOpt;
+ (BOOL)canShowEmailCodeLogin;

- (id)aAWEUserModuleConfigCommon;
- (id)aAWEUserModuleConfigCommonAdapter;
- (id)aAWEUserModuleConfig;

@end
