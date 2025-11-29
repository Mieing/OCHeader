@class VEPixelBufferCopyUtils, VELensConfig;

@interface VELensEngine : NSObject

@property (retain, nonatomic) VELensConfig *lensConfig;
@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (nonatomic) long long frameIndex;
@property (nonatomic) struct { int videoStabSmoothRadius; float videoStabMaxCropRatio; int videoStabMotionType; } currentParam;
@property (retain, nonatomic) VEPixelBufferCopyUtils *bufferCopyUtils;

- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })p_rotateBufferData:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 srcBytesPerRow:(unsigned long long)a3;
- (int)getLensDataFormat:(unsigned int)a0;
- (void)updateVideoStabParam:(struct { int x0; float x1; int x2; })a0;
- (struct __CVBuffer { } *)processTwoPixelBuffer:(struct __CVBuffer { } *)a0 secondBuffer:(struct __CVBuffer { } *)a1 timeStamp:(double)a2;
- (id)getVideoStabResult;
- (void).cxx_destruct;
- (BOOL)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
