@class VPVRHeadTracker, VPVRDistortionRender;

@interface MetalFilterLensDistortion : MetalFilterDefault {
    VPVRDistortionRender *_distortionRender;
    VPVRHeadTracker *_headTracker;
    BOOL _paramsDidChange;
    struct CGSize { double width; double height; } _outputTextureSize;
}

+ (id)lensDistortionFilterWithHeadTracker:(id)a0 outputTextureSize:(struct CGSize { double x0; double x1; })a1;

- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (id)initWithHeadTracker:(id)a0 outputTextureSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })outputTextureSize;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 withRenderEncoder:(id)a1;
- (void).cxx_destruct;

@end
