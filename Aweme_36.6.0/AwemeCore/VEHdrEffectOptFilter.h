@class VEMVPRenderer, HTSGLFramebuffer, VELensColorTransAlgorithm;

@interface VEHdrEffectOptFilter : HTSGLFilter

@property (retain, nonatomic) HTSGLFramebuffer *sdr2hdrFramebuffer;
@property (nonatomic) BOOL isMetalSupported;
@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (retain, nonatomic) VELensColorTransAlgorithm *colorTransAlgorithm;
@property (nonatomic) BOOL isPassThrough;
@property (nonatomic) long long colorPrimaries;
@property (nonatomic) long long transferFunction;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)initializeRenderer:(id)a0;
- (BOOL)processLensSDR2HDR;
- (void)processVESDR2HDR;
- (id)processFakeSDR2HDRFramebuffer:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
