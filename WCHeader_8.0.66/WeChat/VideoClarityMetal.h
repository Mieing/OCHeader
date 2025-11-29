@interface VideoClarityMetal : NSObject {
    float _mode;
    float _pixelMapping[256];
    float _param_contrast_enhance_strength;
    float _param_histogram_clipping_relthresh;
    float _param_dynamic_range_extension;
    float _param_nonflat_region_thresh;
    float _param_color_saturation_decay;
    float _param_face_decay_zero;
    float _param_face_decay_one;
}

+ (void)identityMappingToFragment:(id)a0 atIndex:(int)a1;

- (id)initWithMode:(int)a0;
- (void)dealloc;
- (void)analyzeBaseAddress:(char *)a0 withRows:(unsigned long long)a1 withCols:(unsigned long long)a2 withStride:(unsigned long long)a3;
- (void)updateParameter:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0 withFlag:(int)a1;
- (void)uploadMappingToFragment:(id)a0 withFlag:(int)a1 atIndex:(int)a2;

@end
