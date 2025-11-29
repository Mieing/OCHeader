@interface VERLPixelBufferRenderer : VERLBaseRenderer

@property (readonly, nonatomic) void *renderer;
@property (nonatomic) BOOL isFullRange;

- (void)deInit;
- (void)render:(id)a0 config:(id)a1;
- (void)syncTransformValues;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
