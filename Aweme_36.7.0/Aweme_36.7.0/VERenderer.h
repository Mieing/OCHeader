@class HTSGLContext, VETransform;

@interface VERenderer : NSObject

@property (readonly, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) VETransform *transform;
@property (nonatomic) BOOL enableBlend;

- (void)deInit;
- (void)setBlendSFactor:(long long)a0 dFactor:(long long)a1;
- (void)customVertexShader:(id)a0 fragmentShader:(id)a1 attributes:(id)a2;
- (void)renderClearColor;
- (void)layoutDrawable:(id)a0;
- (void)updatePipeline:(long long)a0;
- (void)renderClearColor:(id)a0;
- (void)render:(id)a0 config:(id)a1;
- (void)setClearColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)removeUniform:(id)a0 uniformType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)doInit;
- (void)addUniform:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
