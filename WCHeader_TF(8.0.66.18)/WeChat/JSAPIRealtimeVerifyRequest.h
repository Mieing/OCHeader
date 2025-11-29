@class BaseRequest, NSString, NSData;

@interface JSAPIRealtimeVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *jsapiName;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *noncestr;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *signatureMethod;
@property (retain, nonatomic) NSData *jsapiArgs;
@property (retain, nonatomic) NSString *commitUrl;
@property (nonatomic) unsigned int requestId;

+ (void)initialize;

@end
