@class AVCaptureSession, NSString, AVAssetWriterInput, AVCaptureAudioDataOutput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter;

@interface YTVideoRecorder : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate> {
    AVAssetWriter *videoWriter;
    AVAssetWriterInput *videoInput;
    AVAssetWriterInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    AVCaptureSession *audioCaptureSession;
    AVAssetWriterInputPixelBufferAdaptor *adaptor;
    long long videoWidth;
    long long videoHeight;
    int frameCount;
    int frameRate;
    BOOL isStarted;
    NSString *videoPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startWith:(id)a0 withWidth:(long long)a1 withHeight:(long long)a2 withCodecSetting:(id)a3 withAudioSetting:(id)a4;
- (void)encodeWith:(const struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; } *)a0;
- (void)stop:(id /* block */)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)saveToCameraRoll:(id /* block */)a0;
- (struct __CVBuffer { } *)newPixelBufferFromCGImage:(const struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; } *)a0;
- (void).cxx_destruct;

@end
