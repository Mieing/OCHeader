@interface IESGLesPixelBuffRenderer : IESGLesBaseMvpRenderer {
    struct __CVBuffer { } *_lumaTexture;
    struct __CVBuffer { } *_chromaTexture;
    struct __CVBuffer { } *_rgbaTexture;
    const float *_preferredConversion;
    long long _doTransType;
    long long _expectTargetType;
    BOOL _isPassThrough;
    long long _colorPrimariesType;
    long long _colorSpaceTransType;
}

- (void)deInit;
- (void)render:(struct __CVBuffer { } *)a0 outSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadData:(struct __CVBuffer { } *)a0 frameWidth:(int)a1 frameHeight:(int)a2 planeCount:(unsigned long long)a3;
- (void)innerRender:(unsigned long long)a0;
- (void)cleanUpTextures;
- (void)colorConversion:(struct __CVBuffer { } *)a0;
- (void)selectYCbCrPipeline;
- (void)mappingTexture:(unsigned int)a0 imageBuffer:(struct __CVBuffer { } *)a1 textureFormat:(int)a2 width:(int)a3 height:(int)a4 planeIndex:(unsigned long long)a5;
- (void)selectRGBAPipeline;
- (void)mapRBGA4PixelBuffer:(struct __CVBuffer { } *)a0;
- (void)renderYuv;
- (void)renderRgba;
- (void)render:(id)a0 config:(id)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)doInit;

@end
