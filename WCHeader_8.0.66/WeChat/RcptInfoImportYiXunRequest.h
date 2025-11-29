@class BaseRequest, SKBuiltinBuffer_t;

@interface RcptInfoImportYiXunRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int qq;
@property (retain, nonatomic) SKBuiltinBuffer_t *a2Key;
@property (retain, nonatomic) SKBuiltinBuffer_t *newA2Key;

+ (void)initialize;

@end
