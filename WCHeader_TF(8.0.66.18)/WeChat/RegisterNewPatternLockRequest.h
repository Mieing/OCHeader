@class BaseRequest, SKBuiltinBuffer_t;

@interface RegisterNewPatternLockRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *paytoken;
@property (retain, nonatomic) SKBuiltinBuffer_t *patternhash;
@property (nonatomic) unsigned int cmd;

+ (void)initialize;

@end
