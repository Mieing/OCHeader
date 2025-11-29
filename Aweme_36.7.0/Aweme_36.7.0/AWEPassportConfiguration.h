@class NSString;
@protocol AWEPassportProductConfiguration, AWEPassportSettings;

@interface AWEPassportConfiguration : NSObject <AWEPassportProductConfiguration, AWEPassportSettings, AWEPassportConfigurable>

@property (retain, nonatomic) id<AWEPassportProductConfiguration, AWEPassportSettings> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiLogin;
+ (id)appKeyToutiao;
+ (id)appKeyXigua;
+ (id)appKeyDouyin;
+ (id)appKeyWeibo;
+ (id)appKeyQQ;
+ (id)appKeyWechat;
+ (id)appKeyGoogle;
+ (id)platformAppIdApple;
+ (id)appidChinaTelecom;
+ (void)setupImplementation:(id)a0;
+ (BOOL)isInhouse;
+ (id)platformAppIdToutiao;
+ (id)platformAppIdXiGua;
+ (id)platformAppIdQQ;
+ (id)appidChinaMobile;
+ (id)appkeyChinaMobile;
+ (id)appkeyChinaTelecom;
+ (id)appidChinaUnion;
+ (id)appkeyChinaUnion;
+ (id)openAuthState;
+ (id)platformAppIdGoogle;
+ (BOOL)enableVirtualPhoneNumber;
+ (BOOL)enableCMCCSDK;
+ (BOOL)enableCarrierTypeProviders;
+ (unsigned long long)maxCountOfMultiLoginAccount;
+ (BOOL)enableAuthorizeInstagramWithEnglish;
+ (BOOL)enableCheckUserIDMismatch;
+ (BOOL)enableFixInstagramKeyboardAppearError;
+ (BOOL)enableStoreAccountInUserDefault;
+ (void)setupNetworkImplementation:(id)a0;
+ (void)setupUtilsImplementation:(id)a0;
+ (void)setupAntispamImplementation:(id)a0;
+ (id)appID;
+ (id)deviceID;
+ (id)sharedInstance;
+ (id)appDisplayName;

- (void).cxx_destruct;

@end
