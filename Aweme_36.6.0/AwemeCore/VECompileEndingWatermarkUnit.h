@class NSString, UIImage, VEPixelBufferCopyUtils, NSObject, HTSGLContext;
@protocol VEProcessSampleDelegate, OS_dispatch_semaphore;

@interface VECompileEndingWatermarkUnit : NSObject <VEProcessSampleDelegate>

@property (nonatomic) struct __CVBuffer { } *lastProcessedPixelBuf;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuf;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previousVideoFrameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } srcTotalDuration;
@property (retain, nonatomic) UIImage *lastPixelImage;
@property (retain, nonatomic) UIImage *endingWatermarkImage;
@property (nonatomic) long long frameIndex;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) float watermarkDuration;
@property (retain, nonatomic) VEPixelBufferCopyUtils *pixelBufferUtils;
@property (retain, nonatomic) HTSGLContext *htsGLContext;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reorder:(unsigned int *)a0 size:(unsigned long long)a1;
- (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0;
- (void)processEndingWatermark:(id)a0;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)cancelWithError:(id)a0;
- (void)dealloc;

@end
