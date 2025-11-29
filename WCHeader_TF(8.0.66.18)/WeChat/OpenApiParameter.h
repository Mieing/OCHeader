@class NSURL, NSString, AppCommunicateData;

@interface OpenApiParameter : MMObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *apiName;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL isLaunchByUniversalLink;
@property (nonatomic) BOOL isDegradeLaunchByScheme;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *contextID;
@property (copy, nonatomic) NSString *sdkBundleID;
@property (nonatomic) unsigned int tokenVerifyResult;
@property (readonly, nonatomic) NSString *universalLink;
@property (readonly, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) BOOL isSDKResendByRefreshToken;
@property (retain, nonatomic) AppCommunicateData *appData;
@property (nonatomic) unsigned int appSupportUrlParamsType;
@property (nonatomic) BOOL isAppPassDataWithUrl;

- (id)description;
- (void)clearAppDataUniversalLink;
- (id)covertToWCPayOpenApiParamter;
- (id)signatureNodeDict;
- (unsigned int)messageType;
- (void).cxx_destruct;

@end
