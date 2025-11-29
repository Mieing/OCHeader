@class BaseRequest, SKBuiltinBuffer_t;

@interface OpPatternLockRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int cmd;
@property (retain, nonatomic) SKBuiltinBuffer_t *nowpatternhash;
@property (retain, nonatomic) SKBuiltinBuffer_t *newpatternhash;

+ (void)initialize;

@end
