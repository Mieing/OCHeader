@class SKBuiltinBuffer_t, SKBuiltinString_t;

@interface ImgPair : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
@property (retain, nonatomic) SKBuiltinString_t *username;

+ (void)initialize;

@end
