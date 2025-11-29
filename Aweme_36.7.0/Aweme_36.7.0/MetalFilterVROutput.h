@protocol MTLBuffer;

@interface MetalFilterVROutput : MetalFilterDefault {
    id<MTLBuffer> _vertexBuffer;
    struct CGSize { double width; double height; } _outputTextureSize;
    struct CGSize { double width; double height; } _inputTextureSize;
    struct { void /* unknown type, empty encoding */ columns[4]; } _modelMatrix;
    BOOL _spaceOrientationOptDisable;
}

@property (readonly, nonatomic) unsigned long long outputTextureOrientation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ vector; } spaceOrientation;
@property (nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) float basisZoom;

+ (id)filterWithInputTextureSize:(struct CGSize { double x0; double x1; })a0 outputTextureSize:(struct CGSize { double x0; double x1; })a1 disableZaxis:(BOOL)a2 spaceOrientationOptDisable:(BOOL)a3;

- (id)getVertexShader;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (id)getEffectPatameterStr;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 withRenderEncoder:(id)a1;
- (id)initWithInputTextureSize:(struct CGSize { double x0; double x1; })a0 outputTextureSize:(struct CGSize { double x0; double x1; })a1 disableZaxis:(BOOL)a2 spaceOrientationOptDisable:(BOOL)a3;
- (void)updateOutputTextureOrientation:(BOOL)a0;
- (void).cxx_destruct;
- (id)vertexBuffer;

@end
