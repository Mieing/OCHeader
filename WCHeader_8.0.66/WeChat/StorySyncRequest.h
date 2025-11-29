@class BaseRequest, SKBuiltinBuffer_t;

@interface StorySyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (nonatomic) unsigned int syncScene;

+ (void)initialize;

- (void)setSyncScene:(unsigned int)a0;
- (unsigned int)syncScene;
- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setSelector:(unsigned int)a0;
- (unsigned int)selector;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
