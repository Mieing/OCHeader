@class ExtSession, SKBuiltinBuffer_t, BaseResponse;

@interface GetIosExtensionKeyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *key;
@property (retain, nonatomic) ExtSession *extensionSession;

+ (void)initialize;

- (void)setExtensionSession:(id)a0;
- (id)extensionSession;
- (void)setKey:(id)a0;
- (id)key;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
