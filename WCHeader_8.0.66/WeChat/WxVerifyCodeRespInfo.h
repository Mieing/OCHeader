@class NSString, SKBuiltinBuffer_t;

@interface WxVerifyCodeRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *verifySignature;
@property (retain, nonatomic) SKBuiltinBuffer_t *verifyBuff;

+ (void)initialize;

- (void)setVerifyBuff:(id)a0;
- (id)verifyBuff;
- (void)setVerifySignature:(id)a0;
- (id)verifySignature;

@end
