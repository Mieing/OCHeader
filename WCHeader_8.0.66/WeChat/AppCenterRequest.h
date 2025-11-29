@class BaseRequest, SKBuiltinBuffer_t;

@interface AppCenterRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuf;

+ (void)initialize;

@end
