@class BaseRequest, SKBuiltinBuffer_t;

@interface MultiTalkRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;

+ (void)initialize;

@end
