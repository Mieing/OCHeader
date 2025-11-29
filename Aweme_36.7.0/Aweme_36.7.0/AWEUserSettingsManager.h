@class NSString;

@interface AWEUserSettingsManager : NSObject <AWEUserSettingsManagerProtocol>

@property (class, nonatomic) BOOL disableSaveLastLoginInfo;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackURLString;
+ (BOOL)disablePrivacyPolicyAlert;
+ (unsigned long long)fileSettingSize;
+ (BOOL)enableNewWriteStrategy;
+ (BOOL)enableNewReadStrategy;
+ (BOOL)bdTicketTrackEnable;
+ (id)bdTicketTrackSampleRate;
+ (id)changeLostMobileUrl;
+ (BOOL)enableOneLogin;
+ (BOOL)carrierOneKeyLoginEnable;
+ (id)networkFrequencyConfig;
+ (id)accountSdkLoginGuideStrategy;
+ (BOOL)isInProtectionPeriod;
+ (id)coldstartLoginGuideTheme;
+ (id)loginGuideAlertConfig;
+ (long long)multiLoginCountLimit;
+ (double)trustLoginDowngradeTimeOut;
+ (id)supportTabName;
+ (long long)padQRCodeLoginCheckConnectInterval;
+ (id)findAccountLink;
+ (BOOL)enablePadAutorotate;
+ (id)quickBindInWifiOrCellularArray;
+ (BOOL)syncKeyLogToTracker;
+ (BOOL)enableUnicomValidateMobileLogin;
+ (BOOL)enableValidateMobileLogin;
+ (id)loginUIThemeData;
+ (id)redirectToSafetyPageWhiteList;
+ (long long)switchAccountAddNewAccountLimitCount;
+ (BOOL)enableChinaMobilePrefetchLogin;
+ (BOOL)enableChinaUnionPrefetchLogin;
+ (BOOL)enableChinaTelecomPrefetchLogin;
+ (long long)carrierOneKeyStatus;
+ (long long)carrierPrefetchLoginStatus;
+ (id)changeLostMobileUrlConfig;
+ (id)padQRCodeLoginConfig;
+ (id)padNumberKeyboardConfig;
+ (BOOL)disableCheckLoginStateWhenSessionExpired;
+ (BOOL)enableSystemRebind;
+ (BOOL)enableQueryPassportWhenUnlogin;
+ (id)qaVerifyUrl;
+ (BOOL)carrierOneKeyBindEnable;
+ (id)smsSelfSolveConfig;
+ (BOOL)padQRCodeLoginEnabled;
+ (long long)padQRCodeLoginPopType;
+ (long long)padQRCodeGuideType;
+ (BOOL)enablePadNumberKeyboard;
+ (BOOL)shouldShowAlertWhenBindSkip:(unsigned long long)a0;
+ (BOOL)shouldShowAlertWithCountryCode:(id)a0;
+ (BOOL)shouldShowWhatsAPPFirstWithCountryCode:(id)a0;
+ (BOOL)enableTelecomGetOperatorType;
+ (BOOL)enableLogOutProcedureManager;
+ (BOOL)enableKeychainLogin;
+ (BOOL)shouldStoreChainLoginUserInfo;
+ (id)shouldShowAlertGuideNakedUserBindPhone;
+ (id)commercialAccountPrivacyProtocolSettings:(id)a0;
+ (BOOL)safeMobileSupportChangeMobile;
+ (BOOL)accountBindSyncRequestIsColdLaunch;
+ (BOOL)shouldSaveSharedPhoneInfoInKeychain;


@end
