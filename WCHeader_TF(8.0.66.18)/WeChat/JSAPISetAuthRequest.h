@class BaseRequest, NSString, NSData, NSMutableArray;

@interface JSAPISetAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *jsapiName;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *noncestr;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *signatureMethod;
@property (retain, nonatomic) NSData *jsapiArgs;
@property (nonatomic) unsigned int signatureFlag;
@property (retain, nonatomic) NSMutableArray *scopeAuthInfo;
@property (retain, nonatomic) NSString *commitUrl;
@property (nonatomic) unsigned int requestId;

+ (void)initialize;

@end
