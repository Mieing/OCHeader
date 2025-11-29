@class BaseRequest, NSString;

@interface GetQRConnectCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *bundleid;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *opensdkVersion;
@property (retain, nonatomic) NSString *sdkToken;
@property (retain, nonatomic) NSString *opensdkBundleid;
@property (nonatomic) unsigned int sdkTokenChk;

+ (void)initialize;

@end
