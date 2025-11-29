@class VEMVPRenderer, HTSGLFilterGroup, VELensColorTransAlgorithm;
@protocol IESMMEffectGroupProtocol;

@interface HTSGLFilterInput : HTSFilterInterface {
    int _imageBufferWidth;
    int _imageBufferHeight;
    BOOL _isEndProcessing;
    double _rotateAngle;
    BOOL _flipX;
    BOOL _flipY;
    BOOL _HasCheckedSkipRender;
}

@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (retain, nonatomic) VELensColorTransAlgorithm *colorTransAlgorithm;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long fillMode;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } realFramePts;
@property (weak, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectGroup;

- (void)endProcessing;
- (void)processInputBuffer:(struct opaqueCMSampleBuffer { } *)a0 withInfo:(id)a1;
- (void)processInputBuffer:(struct __CVBuffer { } *)a0 andFrametime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withInfo:(id)a2;
- (void)generateOutputFramebufferWithSize:(struct CGSize { double x0; double x1; })a0 sampleInfo:(id)a1;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)a0 height:(int)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)releaseOutputFramebufferIfNeeded;
- (void)processInputBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)processInputBufferOnQueue:(struct __CVBuffer { } *)a0 andFrametime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)needColorTransfer:(struct __CVBuffer { } *)a0 withInfo:(id)a1;
- (id)generateStabOutputFrameBuffer:(struct CGSize { double x0; double x1; })a0 sampleInfo:(id)a1;
- (void)processInputBufferOnQueue:(struct __CVBuffer { } *)a0 andFrametime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withInfo:(id)a2;
- (void)processInputFrameBuffer:(id)a0 andFrametime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
