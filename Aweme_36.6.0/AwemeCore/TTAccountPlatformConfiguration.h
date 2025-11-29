@class NSString, NSArray, NSOrderedSet;

@interface TTAccountPlatformConfiguration : NSObject

@property (copy, nonatomic) NSString *appCheckApiKey;
@property (nonatomic) long long platformType;
@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (nonatomic) BOOL isShareUserInfo;
@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *platformAppId;
@property (copy, nonatomic) NSString *platformAppDisplayName;
@property (copy, nonatomic) NSString *platformRedirectUrl;
@property (copy, nonatomic) NSString *authCallbackSchemeUrl;
@property (copy, nonatomic) id /* block */ laziedRegisterPlatformHandler;
@property (nonatomic) BOOL useDefaultWAPLogin;
@property (nonatomic) BOOL tryCustomLoginWhenSDKFailure;
@property (nonatomic) BOOL bootOptimization;
@property (copy, nonatomic) NSString *snsBarText;
@property (nonatomic) BOOL snsBarHidden;
@property (copy, nonatomic) NSString *platformAppInstallUrl;
@property (copy, nonatomic) NSArray *platformInstalledURLSchemes;
@property (copy, nonatomic) NSArray *platformSupportedURLSchemes;
@property (retain, nonatomic) NSOrderedSet *permissions;
@property (retain, nonatomic) NSOrderedSet *additionalPermissions;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *organizationId;

- (void).cxx_destruct;
- (id)init;

@end
