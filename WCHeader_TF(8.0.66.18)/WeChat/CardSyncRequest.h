@class BaseRequest, SKBuiltinBuffer_t, LayOut;

@interface CardSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) LayOut *layout;
@property (nonatomic) unsigned int layoutScene;

+ (void)initialize;

@end
