@interface VERLTextureRenderer : VERLBaseRenderer

@property (nonatomic) void *renderer;

- (void)deInit;
- (void)setEnableBlend:(BOOL)a0;
- (void)setBlendSFactor:(long long)a0 dFactor:(long long)a1;
- (void)render:(id)a0 config:(id)a1;
- (int)rlFactorFromVEFactor:(long long)a0;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
