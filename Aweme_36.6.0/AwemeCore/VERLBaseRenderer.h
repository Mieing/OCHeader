@protocol IVERendererDrawable;

@interface VERLBaseRenderer : VERenderer {
    void *_rlRenderer;
}

@property (weak, nonatomic) id<IVERendererDrawable> rlDrawable;

- (void)deInit;
- (void)customVertexShader:(id)a0 fragmentShader:(id)a1 attributes:(id)a2;
- (void)layoutDrawable:(id)a0;
- (void)updatePipeline:(long long)a0;
- (void)renderClearColor:(id)a0;
- (void)setClearColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)removeUniform:(id)a0 uniformType:(long long)a1;
- (int)rlAttrTypeFromIESAttrType:(long long)a0;
- (int)teUniformTypeFromVEUniformType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)addUniform:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
