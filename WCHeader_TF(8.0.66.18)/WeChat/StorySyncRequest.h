@class BaseRequest, SKBuiltinBuffer_t;

@interface StorySyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (nonatomic) unsigned int syncScene;

+ (void)initialize;

@end
