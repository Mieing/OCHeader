@class BaseRequest, SKBuiltinBuffer_t;

@interface InitRegRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
