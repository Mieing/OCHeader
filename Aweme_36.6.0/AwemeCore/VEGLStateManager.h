@class NSString, NSMutableDictionary, NSDictionary, HTSGLContext, IESGLesProgram;
@protocol IVERendererDrawable;

@interface VEGLStateManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *floatUniformDict;
@property (retain, nonatomic) NSMutableDictionary *intUniformDict;
@property (retain, nonatomic) NSMutableDictionary *dataUniformDict;
@property (nonatomic) unsigned int sfactor;
@property (nonatomic) unsigned int dfactor;
@property (copy, nonatomic) NSString *customProgramVertex;
@property (copy, nonatomic) NSString *customProgramFragment;
@property (copy, nonatomic) NSDictionary *customProgramAttribute;
@property (nonatomic) float bgColorRed;
@property (nonatomic) float bgColorGreen;
@property (nonatomic) float bgColorBlue;
@property (nonatomic) float bgColorAlpha;
@property (retain, nonatomic) HTSGLContext *context;
@property (readonly, nonatomic) IESGLesProgram *program;
@property (readonly, nonatomic) long long programType;
@property (readonly, nonatomic) BOOL shouldUpdateProgram;
@property (readonly, nonatomic) id<IVERendererDrawable> glDrawable;

- (void)resetRenderEnv;
- (void)setBlendSFactor:(long long)a0 dFactor:(long long)a1;
- (void)loadPipeline;
- (void)loadMvpQuadData:(const float *)a0;
- (void)enableBlend;
- (void)diableBlend;
- (void)customVertexShader:(id)a0 fragmentShader:(id)a1 attributes:(id)a2;
- (void)renderClearColor;
- (void)resetDefaultUniforms;
- (BOOL)bindScreenFBO;
- (void)presentScreenFBO;
- (void)updatePipeline:(long long)a0;
- (void)loadExtraUniforms;
- (void)setClearColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)removeUniform:(id)a0 uniformType:(long long)a1;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)addUniform:(id)a0;
- (void)setDrawable:(id)a0;

@end
