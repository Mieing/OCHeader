@class BaseRequest, NSString;

@interface WecoinRealNameAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
