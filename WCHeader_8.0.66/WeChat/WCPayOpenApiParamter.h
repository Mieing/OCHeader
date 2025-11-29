@class NSString;

@interface WCPayOpenApiParamter : NSObject <PBCoding>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *apiName;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL isLaunchByUniversalLink;
@property (nonatomic) BOOL isDegradeLaunchByScheme;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *contextID;
@property (copy, nonatomic) NSString *sdkBundleID;
@property (nonatomic) unsigned int tokenVerifyResult;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) BOOL isSDKResendByRefreshToken;
@property (nonatomic) unsigned int sdkUrlParamType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_apiName;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_bundleID;
+ (void)PBArrayAdd_isLaunchByUniversalLink;
+ (void)PBArrayAdd_isDegradeLaunchByScheme;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_contextID;
+ (void)PBArrayAdd_sdkBundleID;
+ (void)PBArrayAdd_tokenVerifyResult;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_sdkVersion;
+ (void)PBArrayAdd_isSDKResendByRefreshToken;
+ (void)PBArrayAdd_sdkUrlParamType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
