@class NSString, NSArray, UIImage, NSNumber;
@protocol CSJAdSDKPrivacyProvider;

@interface CSJAdSDKConfiguration : NSObject

@property (copy) NSString *abvidString;
@property (copy, nonatomic) NSArray *inherentUserData;
@property (copy, nonatomic) NSString *unitySetString;
@property (copy, nonatomic) NSString *unityEVString;
@property (nonatomic) unsigned long long audioSessionType;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) long long ageGroup;
@property (copy, nonatomic) NSString *userExtData;
@property (nonatomic) long long webViewOfflineType;
@property (retain, nonatomic) NSNumber *debugLog;
@property (retain, nonatomic) NSNumber *themeStatus;
@property (copy, nonatomic) NSArray *abvids;
@property (copy) NSString *abSDKVersion;
@property (copy, nonatomic) NSString *customIdfa;
@property (nonatomic) BOOL allowModifyAudioSessionSetting;
@property (nonatomic) BOOL unityDeveloper;
@property (retain, nonatomic) id<CSJAdSDKPrivacyProvider> privacyProvider;
@property (retain, nonatomic) UIImage *appLogoImage;
@property (nonatomic) BOOL SDKDEBUG;

+ (BOOL)validWiFiBSSID;
+ (id)configuration;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)interfaceVersion;

- (void)InitializeParamaters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
