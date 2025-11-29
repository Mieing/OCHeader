@class NSURL, AVCaptureConnection, AVAssetWriterInput, LCScreenRecorder, NSDictionary, NSObject, AVAssetWriter, UIView, AVCaptureDeviceInput, NSString, AVCaptureAudioDataOutput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureSession, CADisplayLink, UIImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HTSScreenRecorder : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, LCScreenRecorderProtocol> {
    NSObject<OS_dispatch_queue> *_render_queue;
    BOOL _isScreenShot;
    AVCaptureSession *_captureSession;
    AVCaptureConnection *_audioConnection;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    NSObject<OS_dispatch_queue> *_audio_output_queue;
    BOOL _audioInitFailed;
}

@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *writerInputPixelBufferAdaptor;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double firstTimeStamp;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleTime;
@property (nonatomic) double scale;
@property (nonatomic) struct CGColorSpace { } *rgbColorSpace;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawRect;
@property (copy, nonatomic) NSDictionary *recordConfigs;
@property (retain, nonatomic) LCScreenRecorder *screenRecorder;
@property (retain, nonatomic) NSString *outputPath;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) float elapse;
@property (weak, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getFileSize:(id)a0;
- (void)setupAssetWriter;
- (void)destryDisplayLink;
- (void)screenRecorder:(id)a0 didRecordingFinished:(id)a1 error:(id)a2;
- (void)captureFrame:(id)a0;
- (BOOL)canVideoTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })videoTransformForDeviceOrientation;
- (void)setupVideoInput;
- (BOOL)canDrawInBackground;
- (void)p_startRecording;
- (void)closeCaptureSession;
- (void)stopRecordingWithCompletion:(id /* block */)a0;
- (void)setupAudioInput:(struct opaqueCMFormatDescription { } *)a0;
- (void)screenRecorder:(id)a0 didStatusChanged:(long long)a1;
- (id)initWithView:(id)a0 isAnchor:(BOOL)a1 complete:(id /* block */)a2;
- (void)startRecordingWithScreenShot:(BOOL)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)isRecording;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)setupDisplayLink;
- (void)stopRecording;
- (void)dealloc;
- (void)cancelRecording;
- (void)setupCaptureSession;

@end
