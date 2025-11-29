@class BaseRequest, NSString, NSData;

@interface SdkOauthAuthorizeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *bundleid;
@property (retain, nonatomic) NSString *androidPackageName;
@property (retain, nonatomic) NSString *androidSignature;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *opensdkVersion;
@property (retain, nonatomic) NSString *sdkToken;
@property (retain, nonatomic) NSString *opensdkBundleid;
@property (nonatomic) unsigned int sdkTokenChk;
@property (retain, nonatomic) NSString *sdkExtdata;
@property (retain, nonatomic) NSData *ilinkSpamBuffer;
@property (nonatomic) BOOL isoption1;
@property (retain, nonatomic) NSData *faceVerifyResultBuffer;
@property (nonatomic) BOOL nonautomatic;

+ (void)initialize;

@end
