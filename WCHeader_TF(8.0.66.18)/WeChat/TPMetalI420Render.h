@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface TPMetalI420Render : TPMetalRenderBase {
    id<MTLTexture> _yTexture;
    id<MTLTexture> _uTexture;
    id<MTLTexture> _vTexture;
    MTLTextureDescriptor *_descriptor;
    MTLTextureDescriptor *_chromaDescriptor;
    int _width;
    int _height;
    int _chromaWidth;
    int _chromaHeight;
}

- (id)initWithMetalDevice:(id)a0 withColorManagement:(BOOL)a1;
- (id)shaderSource;
- (id)vertexFunctionSourceName;
- (id)fragmentFunctionSourceName;
- (BOOL)setupTexturesForFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)uploadTexturesToCommandEncoder:(id)a0;
- (id)getYTexture;
- (void).cxx_destruct;

@end
