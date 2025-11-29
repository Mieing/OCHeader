@class NSString;

@interface OpenSDKOAuthRequest : MMObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *sdkToken;
@property (copy, nonatomic) NSString *sdkBundleID;
@property (nonatomic) BOOL isWXLaunchByUniversalLink;
@property (nonatomic) unsigned int tokenVerifyResult;
@property (nonatomic) BOOL isOption1;
@property (copy, nonatomic) NSString *extData;
@property (nonatomic) BOOL nonautomatic;

- (id)description;
- (void).cxx_destruct;

@end
