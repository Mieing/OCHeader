@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, AVAssetWriter, NSString, CALayer, NSObject, AVCaptureVideoDataOutput;
@protocol OS_dispatch_queue, CvVideoCameraDelegate;

@interface CvVideoCamera : CvAbstractCamera <AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleTime;
    int recordingCountDown;
}

@property (retain, nonatomic) CALayer *customPreviewLayer;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput;
@property (nonatomic) id<CvVideoCameraDelegate> delegate;
@property (nonatomic) BOOL grayscaleMode;
@property (nonatomic) BOOL recordVideo;
@property (nonatomic) BOOL rotateVideo;
@property (retain, nonatomic) AVAssetWriterInput *recordAssetWriterInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor;
@property (retain, nonatomic) AVAssetWriter *recordAssetWriter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParentView:(id)a0;
- (void)start;
- (void)stop;
- (void)adjustLayoutToInterfaceOrientation:(long long)a0;
- (void)layoutPreviewLayer;
- (void)createVideoDataOutput;
- (void)createVideoFileOutput;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)updateOrientation;
- (void)saveVideo;
- (id)videoFileURL;
- (id)videoFileString;

@end
