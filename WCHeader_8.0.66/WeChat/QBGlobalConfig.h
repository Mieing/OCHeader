@interface QBGlobalConfig : NSObject

@property long long m_wifiAddr;
@property BOOL bSpdyAccelerateOn;
@property BOOL bADFilter;
@property BOOL bScreenAdapter;
@property BOOL bDisplayImage;
@property BOOL bUseTidyWebsite;
@property BOOL bIsRetina;
@property long long configVersion;
@property long long startUpType;
@property BOOL newInstall;
@property BOOL isUpdateVersion;
@property BOOL isUpdateSmallVersion;
@property BOOL bGettingGuid;
@property long long wupSuccessCount;
@property long long wupFailureCount;
@property BOOL bAuthorize;
@property BOOL bThirdInvoke;
@property BOOL isFileOpenFromThird;
@property BOOL bEnableSecurityCheck;

+ (id)sharedInstance;
+ (void)load;
+ (void)spedSettingDidChanged:(id)a0;

- (id)init;

@end
