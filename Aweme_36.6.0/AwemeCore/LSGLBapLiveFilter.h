@class NSMutableArray, BmfBapManager, LSGLFramebuffer;

@interface LSGLBapLiveFilter : LSGLFilter

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) BmfBapManager *bapLiveInstance;
@property (retain, nonatomic) LSGLFramebuffer *inputVideoFrame;
@property (nonatomic) struct __CVBuffer { } *bapOutputPixelBuffer;
@property (copy, nonatomic) id /* block */ bapBitrateRatioCallback;
@property (nonatomic) int alg_type;
@property (nonatomic) int area;
@property (nonatomic) int last_code;
@property (nonatomic) int lastInputWidth;
@property (nonatomic) int lastInputHeight;
@property (nonatomic) BOOL sizeChange;
@property (nonatomic) BOOL maskChange;
@property (retain, nonatomic) NSMutableArray *resolutionBitrateRatioList;
@property (retain, nonatomic) NSMutableArray *resolutionEnbaleBapList;
@property (nonatomic) BOOL enable;
@property (nonatomic) int mask;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (BOOL)judgeIfEnableBapWidth:(long long)a0 andHeight:(long long)a1;
- (float)getResolutionRatioWidth:(long long)a0 andHeight:(long long)a1;
- (int)bapLiveProcess:(struct __CVBuffer { } *)a0 withOutput:(struct __CVBuffer { } *)a1;
- (BOOL)initBapLiveWithConfig:(id)a0 withBitRatioCallback:(id /* block */)a1;
- (id)getStatis;
- (void).cxx_destruct;

@end
