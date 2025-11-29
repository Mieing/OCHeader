@class EAGLContext;

@interface TPAppleOpenGLView : UIView {
    struct TPVideoRender { void /* function */ **x0; struct TPVideoOpenGLRenderBase *x1; int x2; } *_glRenderer;
    struct TPVideoRenderFrame { void /* function */ **x0; int x1; int x2; unsigned int x3[4]; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; struct TPFrameMetadata { int x0; struct TPHDRVividDynamicMetadata { unsigned char x0; unsigned char x1; unsigned short x2[2]; unsigned short x3[2]; unsigned short x4[2]; unsigned short x5[2]; unsigned char x6[2]; unsigned char x7[2]; unsigned short x8[2][2]; unsigned char x9[2][2]; unsigned short x10[2][2]; unsigned char x11[2][2]; unsigned short x12[2][2]; unsigned short x13[2][2]; unsigned char x14[2][2]; unsigned char x15[2][2]; unsigned char x16[2][2]; unsigned char x17[2][2]; unsigned char x18[2][2]; unsigned char x19[2][2]; unsigned char x20[2][2]; unsigned char x21[2][2]; unsigned char x22[3][2][2]; unsigned char x23[3][2][2]; unsigned short x24[3][2][2]; unsigned short x25[3][2][2]; unsigned short x26[3][2][2]; unsigned char x27[3][2][2]; unsigned char x28[2]; unsigned char x29[2]; unsigned char x30[8][2]; } x1; struct TPHDR10StaticMetadata { unsigned short x0[3]; unsigned short x1[3]; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned short x7; } x2; } x12; struct ITPTemporyImageConverter *x13; struct TPOpenGLTextureHelper *x14; } *_glFrame;
    EAGLContext *_eaglContext;
    int _backingWidth;
    int _backingHeight;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
}

+ (Class)layerClass;

- (id)initWithParams:(struct TPRendererVideoFrameParams { int x0; int x1; int x2; struct TPRational { int x0; int x1; } x3; int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a0;
- (void)dealloc;
- (int)writeOneFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)finish;
- (void)uninit;
- (BOOL)initGL;
- (void)uninitGL;
- (void)clearAllResources;
- (void).cxx_destruct;

@end
