@class NSString, BigAVRTCCVPixelBuffer, LSGLPictureInput, NSObject, LSGLFramebuffer;
@protocol OS_dispatch_queue;

@interface VideoSource : NSObject <LSGLInput, VideoCapturerDelegate> {
    void *_nativeVideoSource;
    NSObject<OS_dispatch_queue> *video_deliver_que_;
    struct unique_ptr<avframework::GlSurfaceHelper, std::default_delete<avframework::GlSurfaceHelper>> { struct __compressed_pair<avframework::GlSurfaceHelper *, std::default_delete<avframework::GlSurfaceHelper>> { struct GlSurfaceHelper *__value_; } __ptr_; } surface_;
    struct __CVOpenGLESTextureCache { } *texture_cache_;
    LSGLPictureInput *texture_loader_;
    struct scoped_refptr<avframework::EstimateInterface<int>> { void *ptr_; } _fpsEstimate;
    int _lastPushVideoState;
    int _feedFrameTargetFps;
    BigAVRTCCVPixelBuffer *_lastFrameBuffer;
    long long _lastFrameTimestampNs;
    long long _lastFrameDeliveredTimeNs;
    id /* block */ _feedFrameTask;
    int _fedFrames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) LSGLFramebuffer *input_buffer;
@property (nonatomic) BOOL mReduceMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (id)initWithNativeVideoSource:(void *)a0 withReduceMode:(BOOL)a1;
- (id)capturer:(struct __CVBuffer { } *)a0 texture:(int)a1 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setVideoSourceNil;
- (void)adaptOutputFormatToWidth:(int)a0 height:(int)a1 fps:(int)a2;
- (id)capturer:(struct __CVBuffer { } *)a0 rotation:(long long)a1 timeStampNs:(long long)a2;
- (int)captureFps;
- (id)capturer:(struct __CVBuffer { } *)a0 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithNativeVideoSource:(void *)a0 withReduceMode:(BOOL)a1 withFeedFrameTargetFps:(int)a2 withThreadPriority:(int)a3;
- (int)fedFrames;
- (void)deliverAndCheckFeedFrame:(id)a0 rotation:(long long)a1 timeStampNs:(long long)a2;
- (BOOL)CreateGLESTextureFromNv21Image:(struct __CVBuffer { } *)a0 andWidth:(int)a1 andHeight:(int)a2 andluminanceTexture:(unsigned int *)a3 andchrominanceTexture:(unsigned int *)a4;
- (id)p_ReduceProcessCaptureFrame:(struct __CVBuffer { } *)a0 rotation:(long long)a1 timeStampNs:(long long)a2;
- (id)p_FullProcessCaptureFrame:(struct __CVBuffer { } *)a0 rotation:(long long)a1 timeStampNs:(long long)a2;
- (void)capturerV2:(struct __CVBuffer { } *)a0 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 rotation:(unsigned long long)a2 purgeFBOnGLError:(BOOL)a3;
- (BOOL)CreateGLESTextureFromI420Image:(struct __CVBuffer { } *)a0 andWidth:(int)a1 andHeight:(int)a2 andluminanceTexture:(unsigned int *)a3 andchrominanceTexture:(unsigned int *)a4 andchromaTexture:(unsigned int *)a5;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)captureQueue;
- (BOOL)enabled;
- (void)dealloc;

@end
