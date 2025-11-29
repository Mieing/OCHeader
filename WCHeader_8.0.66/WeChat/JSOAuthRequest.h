@class BaseRequest, NSString;

@interface JSOAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *signatureMethod;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *nonce;

+ (void)initialize;

@end
