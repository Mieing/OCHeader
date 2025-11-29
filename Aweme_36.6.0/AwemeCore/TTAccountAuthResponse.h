@class NSString, NSOrderedSet, NSDictionary;

@interface TTAccountAuthResponse : NSObject

@property (copy, nonatomic) NSString *responseId;
@property (copy, nonatomic) NSString *code;
@property (nonatomic, getter=isSDKAuth) BOOL sdkAuth;
@property (nonatomic, getter=isSSOAuth) BOOL ssoAuth;
@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *platformAppId;
@property (nonatomic) long long platformType;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appSecret;
@property (copy, nonatomic) NSString *scope;
@property (retain, nonatomic) NSOrderedSet *grantedPermissions;
@property (retain, nonatomic) NSOrderedSet *grantedFields;
@property (copy, nonatomic) NSString *redirectURL;
@property (copy, nonatomic) NSString *pkceCodeVerifier;
@property (copy, nonatomic) NSString *pkceCodeChallenge;
@property (copy, nonatomic) NSDictionary *customUserInfo;
@property (nonatomic) BOOL shareToSnsUser;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errmsg;

- (void).cxx_destruct;
- (id)init;

@end
