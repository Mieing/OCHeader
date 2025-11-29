@class NSString, VELensHdrAlgorithm;

@interface HTSLensHdrFilter : HTSGLFilter

@property (nonatomic) BOOL shouldDoProcess;
@property (nonatomic) BOOL isExternalAlgorithm;
@property (nonatomic) BOOL enableAgfxContext;
@property (retain, nonatomic) NSString *modelPath;
@property (retain, nonatomic) VELensHdrAlgorithm *lensHdrAlgorithm;
@property (nonatomic) BOOL mIsMutliTrack;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (BOOL)initAlgorithmEngine:(id)a0 isMutliTrack:(BOOL)a1;
- (void)setRLDevice;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
