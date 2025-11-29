@class BaseRequest, SKBuiltinString_t;

@interface SendVerifyEmailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinString_t *userName;

+ (void)initialize;

@end
