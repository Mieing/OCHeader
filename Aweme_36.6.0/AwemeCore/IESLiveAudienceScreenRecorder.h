@class UIView, NSString, CADisplayLink, UIImage, AVAssetWriter, NSURL, NSDictionary, NSMutableSet, NSObject, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, HTSLiveStreamPlayerProvider, OS_dispatch_semaphore;

@interface IESLiveAudienceScreenRecorder : NSObject <HTSLiveStreamPlayerAction, IESLiveScreenRecorderProtocol> {
    NSObject<OS_dispatch_queue> *_session_queue;
    NSObject<OS_dispatch_queue> *_render_queue;
    NSObject<OS_dispatch_semaphore> *_render_semaphore;
}

@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoWriterInput;
@property (retain, nonatomic) AVAssetWriterInput *audioWriterInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *bufferAdaptor;
@property (retain, nonatomic) NSMutableSet *observerSet;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double canvasScale;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) int channels;
@property (nonatomic) int sampleRate;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double initialFrameStamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } beginTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentAudioTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (retain, nonatomic) UIImage *cover;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (copy, nonatomic) id /* block */ completed;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> player;
@property (nonatomic) BOOL isPlayerStall;
@property (copy, nonatomic) NSDictionary *recordConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double seconds;

- (BOOL)setupVideoInput;
- (void)playerWillOpenAudioProcessInAudioRecord:(int)a0 channels:(int)a1 duration:(int)a2;
- (void)playerWillProcessAudioFrameInAudioRecord:(float **)a0 samples:(int)a1 timeStamp:(long long)a2;
- (void)playerOnRenderAudioFrame:(id)a0;
- (void)playerDidStall;
- (void)playerDidResume;
- (id)initWithTargetView:(id)a0 completed:(id /* block */)a1 diContext:(id)a2;
- (void)updateTargetView:(id)a0;
- (void)addInterruptObserver;
- (void)startAudioCaptureSession;
- (void)stopAudioCaptureSession;
- (void)renderVideoCover;
- (BOOL)backgroundDrawEnabled;
- (BOOL)setupAudioInput;
- (struct opaqueCMSampleBuffer { } *)transfromBuffer:(id)a0 timeStamp:(long long)a1;
- (void)abort;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)prepare;
- (void)start;
- (void)reset;
- (void)dealloc;
- (void)cancel;
- (void)didCaptureFrame:(id)a0;

@end
