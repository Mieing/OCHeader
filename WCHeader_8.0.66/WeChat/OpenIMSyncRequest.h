@class BaseRequest, SKBuiltinBuffer_t;

@interface OpenIMSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;

+ (void)initialize;

@end
