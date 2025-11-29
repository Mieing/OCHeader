@interface VERLTwoTextureRenderer : VERLBaseRenderer

@property (readonly, nonatomic) void *renderer;

- (void)deInit;
- (void)render:(id)a0 config:(id)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
