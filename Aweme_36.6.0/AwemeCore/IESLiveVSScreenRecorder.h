@class UIView, NSString, CADisplayLink, UIImage, AVAssetWriter, NSURL, AVCaptureSession, NSObject, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, HTSLiveStreamPlayerProvider, OS_dispatch_semaphore;

@interface IESLiveVSScreenRecorder : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, IESLiveVSScreenRecorderProtocol> {
    NSObject<OS_dispatch_queue> *_session_queue;
    NSObject<OS_dispatch_queue> *_render_queue;
    NSObject<OS_dispatch_queue> *_audio_queue;
    NSObject<OS_dispatch_semaphore> *_render_semaphore;
}

@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoWriterInput;
@property (retain, nonatomic) AVAssetWriterInput *audioWriterInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *bufferAdaptor;
@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic) BOOL isAudioAvailable;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double canvasScale;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) double initialFrameStamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } beginTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (retain, nonatomic) UIImage *cover;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (copy, nonatomic) id /* block */ completed;
@property (nonatomic) BOOL playerPixelEnabled;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> player;
@property (retain, nonatomic) UIImage *watermarkImage;
@property (nonatomic) unsigned long long nullBufferCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double seconds;
@property (nonatomic) double maxDuration;
@property (readonly, nonatomic) BOOL isRecording;

- (BOOL)setupVideoInput;
- (BOOL)setupAudioInput:(struct opaqueCMFormatDescription { } *)a0;
- (void)updateTargetView:(id)a0;
- (void)startAudioCaptureSession;
- (void)stopAudioCaptureSession;
- (BOOL)backgroundDrawEnabled;
- (void)recreateWarterMarkWithScale:(double)a0;
- (void)monitorException:(id)a0 code:(long long)a1 description:(id)a2;
- (struct __CVBuffer { } *)copyFromVideoPlayerAndRedraw;
- (id)initWithTargetView:(id)a0 completed:(id /* block */)a1;
- (void)requestAudioPermission;
- (void)renderVideoCover:(id)a0;
- (void)abort;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)prepare;
- (void)start;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)reset;
- (void)dealloc;
- (void)cancel;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })videoTransform;
- (void)didCaptureFrame:(id)a0;

@end
