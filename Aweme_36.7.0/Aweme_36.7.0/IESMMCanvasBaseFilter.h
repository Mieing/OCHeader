@class NSString, HTSGLFramebuffer, IESMMCanvasSrcManager, IESEffectVideoAnimatedRenderer, IESMMCanvasConfig, VERenderer, IESMMCanvasSource, VEColorSpaceInfo;

@interface IESMMCanvasBaseFilter : HTSGLFilterTwoInput <IESMMCanvasConfigProtocol, IESMMCanvasInitializeProtocol> {
    float _canvasVertices[8];
    struct CGSize { double width; double height; } _secondFrameBufferTextureSize;
    BOOL _preventRendering;
}

@property (copy, nonatomic) id /* block */ observable;
@property (nonatomic) struct CGSize { double width; double height; } gCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (retain, nonatomic) IESEffectVideoAnimatedRenderer *renderer;
@property (retain, nonatomic) HTSGLFramebuffer *transpEdgeFramebuffer;
@property (retain, nonatomic) VERenderer *transpEdgeRenderer;
@property (retain, nonatomic) IESMMCanvasConfig *config;
@property (retain, nonatomic) IESMMCanvasSource *source;
@property (nonatomic) long long curSourceID;
@property (nonatomic) unsigned long long fillMode;
@property (retain, nonatomic) IESMMCanvasSrcManager *srcManager;
@property (nonatomic) BOOL enableCanvasAutoRotate;
@property (copy, nonatomic) NSString *canvasKey;
@property (nonatomic) BOOL hasVideoAnimation;
@property (nonatomic) BOOL forceDrawCanvas;
@property (copy, nonatomic) VEColorSpaceInfo *colorSpaceInfo;
@property (nonatomic) BOOL isPassThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)preventRendering;
- (void)setPreventRendering:(BOOL)a0;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)updateIsPassThrough:(BOOL)a0;
- (id)initWithConfig:(id)a0 observable:(id /* block */)a1 canvasSize:(struct CGSize { double x0; double x1; })a2 context:(id)a3;
- (id)initShader:(id)a0;
- (void)p_initCanvasRender;
- (id)initWithConfig:(id)a0 observable:(id /* block */)a1 canvasSize:(struct CGSize { double x0; double x1; })a2;
- (const float *)canvasVertices;
- (void)updateColorSpaceInfo:(id)a0;
- (void)setCanvasAnimatedRenderer:(id)a0;
- (void)sourceManagerChanged;
- (BOOL)changeCanvasConfig:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (void)p_updateSource;
- (BOOL)p_checkSkipCanvas;
- (void)notifyObservarCanvasSizeDidChangeIfNeed:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })p_adjustOutFrameSize;
- (BOOL)p_checkUseEffectRender;
- (void)drawUsingEffectRenderer;
- (float *)updateSecondFrameBufferVertics;
- (void)renderTranspEdge:(double)a0 vertices:(float *)a1 inputFramebuffer:(id)a2;
- (void)positionCalculateWithSource:(id)a0 vertices:(float *)a1 inputSize:(struct CGSize { double x0; double x1; })a2 canvasSize:(struct CGSize { double x0; double x1; })a3 paddingSize:(struct CGSize { double x0; double x1; })a4;
- (void)positionCalculateWithSource:(id)a0 vertices:(float *)a1 inputSize:(struct CGSize { double x0; double x1; })a2 canvasSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)isAnimatedReady;
- (void)p_transformCalculateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 source:(id)a2 vertices:(float *)a3 canvasSize:(struct CGSize { double x0; double x1; })a4;
- (void)p_transformCalculateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1 vertices:(float *)a2 canvasSize:(struct CGSize { double x0; double x1; })a3;
- (void).cxx_destruct;
- (void)initializeAttributes;

@end
