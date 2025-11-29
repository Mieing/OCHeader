@class NSString, SKBuiltinBuffer_t;

@interface WTLoginImgRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgEncryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *ksid;
@property (retain, nonatomic) NSString *imgSid;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;

+ (void)initialize;

- (void)setImgBuf:(id)a0;
- (id)imgBuf;
- (void)setImgSid:(id)a0;
- (id)imgSid;
- (void)setKsid:(id)a0;
- (id)ksid;
- (void)setImgEncryptKey:(id)a0;
- (id)imgEncryptKey;

@end
