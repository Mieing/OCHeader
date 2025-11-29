@class VERenderer, NSMutableDictionary, IESEffectVideoAnimatedRenderer, NSDictionary, HTSGLFramebuffer, NSMutableArray;

@interface IESMMMultiTrackFilter : HTSGLFilter

@property (nonatomic) long long hasReceivedCount;
@property (nonatomic) long long hasSetTextureCount;
@property (retain, nonatomic) NSMutableDictionary *inputFramebuffers;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } firstFrameTime;
@property (retain, nonatomic) IESEffectVideoAnimatedRenderer *renderer;
@property (nonatomic) struct CGSize { double width; double height; } backgroundTextureSize;
@property (retain, nonatomic) HTSGLFramebuffer *transpEdgeFramebuffer;
@property (retain, nonatomic) HTSGLFramebuffer *subTrackFramebuffer;
@property (retain, nonatomic) VERenderer *transpEdgeRenderer;
@property (retain, nonatomic) NSMutableArray *activeHanderKeys;
@property (nonatomic) long long inputCount;
@property (retain, nonatomic) NSDictionary *assetSources;
@property (retain, nonatomic) NSDictionary *assetAnimateInfos;
@property (nonatomic) BOOL forceUseEffectRender;

- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (id)getkeyFrameInfoWithPts:(unsigned long long)a0 withVideoTrackID:(unsigned long long)a1;
- (void)setEffectAnimatedRenderer:(id)a0;
- (void)updateKeyFrameInfo:(id)a0 withVideoTrackID:(unsigned long long)a1;
- (id)getKeyByVideoTrackId:(long long)a0;
- (BOOL)p_checkUseEffectRender:(id)a0 source:(id)a1;
- (void)drawUsingEffectRenderer:(id)a0;
- (void)drawWithoutEffectRender:(id)a0;
- (void)renderTranspEdge:(double)a0 vertices:(float *)a1 inputFramebuffer:(id)a2;
- (void)positionCalculateWithSource:(id)a0 vertices:(float *)a1 inputSize:(struct CGSize { double x0; double x1; })a2 canvasSize:(struct CGSize { double x0; double x1; })a3 paddingSize:(struct CGSize { double x0; double x1; })a4;
- (void)positionCalculateWithSource:(id)a0 vertices:(float *)a1 inputSize:(struct CGSize { double x0; double x1; })a2 canvasSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)isAnimatedReady;
- (void)p_transformCalculateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 source:(id)a2 vertices:(float *)a3 canvasSize:(struct CGSize { double x0; double x1; })a4;
- (void)p_transformCalculateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1 vertices:(float *)a2 canvasSize:(struct CGSize { double x0; double x1; })a3;
- (void)updateAssetSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
