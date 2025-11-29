@class IESGLesProgram, VEGLStateManager;

@interface IESGLesBaseRenderer : VERenderer {
    unsigned int _displayRenderbuffer;
    unsigned int _displayFramebuffer;
}

@property (readonly, nonatomic) VEGLStateManager *glStateManager;
@property (readonly, nonatomic) IESGLesProgram *program;
@property (readonly, nonatomic) long long programType;
@property (readonly, nonatomic) BOOL shouldUpdateProgram;

- (void)resetRenderEnv;
- (void)setBlendSFactor:(long long)a0 dFactor:(long long)a1;
- (void)customVertexShader:(id)a0 fragmentShader:(id)a1 attributes:(id)a2;
- (void)renderClearColor;
- (void)layoutDrawable:(id)a0;
- (BOOL)bindScreenFBO;
- (void)presentScreenFBO;
- (void)updatePipeline:(long long)a0;
- (void)loadProgram;
- (void)renderClearColor:(id)a0;
- (void)setupRenderEnv;
- (void)loadMvpQuadData;
- (void)loadExtraUniforms;
- (void)teardownRenderEnv;
- (void)render:(id)a0 config:(id)a1;
- (void)setClearColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)removeUniform:(id)a0 uniformType:(long long)a1;
- (void).cxx_destruct;
- (void)doInit;
- (void)addUniform:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
