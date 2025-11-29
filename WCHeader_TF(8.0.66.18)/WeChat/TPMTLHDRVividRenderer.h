@protocol MTLTexture;

@interface TPMTLHDRVividRenderer : TPMTLFrameRendererBase {
    unsigned long long rendererType;
}

@property struct __CVMetalTextureCache { } *textureCache;
@property (retain) id<MTLTexture> yTexture;
@property (retain) id<MTLTexture> uvTexure;
@property struct TPHDRVividMetadataProcessor { struct TPHDRVividProcessedDynamicMetadata { unsigned char x0; unsigned char x1; float x2[2]; float x3[2]; float x4[2]; float x5[2]; int x6[2]; int x7[2]; float x8[2][2]; float x9[2]; float x10[2]; int x11[2][2]; float x12[2][2]; float x13[2][2]; float x14[2][2]; float x15[2][2]; float x16[2][2]; float x17[2][2]; float x18[2][2]; float x19[2][2]; int x20[2][2]; float x21[2][2]; int x22[2][2]; int x23[2][2]; int x24[3][2][2]; float x25[3][2][2]; float x26[3][2][2]; float x27[3][2][2]; float x28[3][2][2]; float x29[3][2][2]; float x30[3][2][2]; float x31[3][2][2]; float x32[3][2][2]; int x33[2]; int x34[2]; float x35[8][2]; } x0; struct TPHDRVividProcessedStaticMetadata { float x0[3]; float x1[3]; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x1; } *hdrVividProcessor;
@property struct TPHDRVividToneMappingParams { float m_p; float m_m; float m_n; float m_a; float m_b; float k1; float k2; float k3; float th1[3]; float th2[3]; float th3[3]; float base_offset[3]; float ma[3][3]; float mb[3][3]; float mc[3][3]; float md[3][3]; int thmode[3]; int cubic_nums; float color_sat; float c0; float c1; float a; float b; float satr; float rml; } hdrVividParams;
@property struct TPHDRDeviceInfo { float max_display_pq; float min_display_pq; } displayDeviceInfo;

- (id)initWithMetalDevice:(id)a0;
- (void)dealloc;
- (void)prepareTextureCache;
- (void)uploadTexture:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)calcHDRVividTonemapCurve:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)setFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)uploadResourcesToCommandEncoder:(id)a0;
- (id)shaderSource;
- (id)vertexFunctionName;
- (id)fragmentFunctionName;
- (unsigned long long)rendererType;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
