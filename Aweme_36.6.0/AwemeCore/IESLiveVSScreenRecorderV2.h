@class UIView, NSString, NSURL, UIImage, AVAssetWriter, NSMutableSet, NSMutableArray, NSObject, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, HTSLiveStreamPlayerProvider, OS_dispatch_semaphore;

@interface IESLiveVSScreenRecorderV2 : NSObject <HTSLiveStreamPlayerAction, IESLiveVSScreenRecorderProtocol> {
    NSObject<OS_dispatch_queue> *_session_queue;
    NSObject<OS_dispatch_queue> *_render_queue;
    NSObject<OS_dispatch_semaphore> *_render_semaphore;
}

@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoWriterInput;
@property (retain, nonatomic) AVAssetWriterInput *audioWriterInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *bufferAdaptor;
@property (retain, nonatomic) NSMutableSet *observerSet;
@property (nonatomic) int channels;
@property (nonatomic) int sampleRate;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double canvasScale;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } beginTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentAudioTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (retain, nonatomic) UIImage *cover;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (copy, nonatomic) id /* block */ completed;
@property (nonatomic) BOOL playerPixelEnabled;
@property (nonatomic) BOOL isPlayerStall;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> player;
@property (retain, nonatomic) UIImage *watermarkImage;
@property (nonatomic) unsigned long long nullBufferCount;
@property (retain, nonatomic) NSMutableArray *cvReturnErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double seconds;
@property (nonatomic) double maxDuration;

- (void)didSetAttachingDIContext;
- (id)getPixelBufferAttributes:(unsigned int)a0 heigth:(int)a1 width:(int)a2;
- (BOOL)setupVideoInput;
- (void)onRenderVideoFrame:(struct __CVBuffer { } *)a0 pts:(long long)a1 width:(long long)a2 height:(long long)a3;
- (void)playerWillOpenAudioProcessInAudioRecord:(int)a0 channels:(int)a1 duration:(int)a2;
- (void)playerWillProcessAudioFrameInAudioRecord:(float **)a0 samples:(int)a1 timeStamp:(long long)a2;
- (void)playerOnRenderAudioFrame:(id)a0;
- (void)playerDidStall;
- (void)playerDidResume;
- (void)updateTargetView:(id)a0;
- (void)addInterruptObserver;
- (void)renderVideoCover;
- (BOOL)setupAudioInput;
- (void)recreateWarterMarkWithScale:(double)a0;
- (void)monitorException:(id)a0 code:(long long)a1 description:(id)a2;
- (id)initWithTargetView:(id)a0 completed:(id /* block */)a1;
- (void)reportCVReturnError;
- (struct __CVBuffer { } *)copyPixelBufferWithPixelBuffer:(struct __CVBuffer { } *)a0 width:(long long)a1 height:(long long)a2;
- (struct opaqueCMSampleBuffer { } *)transformBuffer:(id)a0 timeStamp:(long long)a1;
- (void)abort;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)prepare;
- (void)start;
- (void)stopCaptureSession;
- (void)startCaptureSession;
- (void)reset;
- (void)dealloc;
- (void)cancel;

@end
