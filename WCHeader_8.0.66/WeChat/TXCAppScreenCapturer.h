@class TXCVideoCaptureConfig, NSString, NSMutableSet, TXCVideoFrame, TXCTimedOutput, TXCDispatchQueue;
@protocol TXIScreenCaptureDelegate;

@interface TXCAppScreenCapturer : NSObject <TXCTimedOutputDelegate, RPScreenRecorderDelegate, TXIVideoCaptureInterface, TXIScreenCaptureInterface>

@property (retain, nonatomic) TXCDispatchQueue *queue;
@property (retain, nonatomic) TXCDispatchQueue *outputQueue;
@property (retain, nonatomic) TXCTimedOutput *timedOutput;
@property BOOL isRunning;
@property BOOL isAppCapturing;
@property BOOL isAppCapturerLaunching;
@property (retain, nonatomic) TXCVideoCaptureConfig *config;
@property (retain, nonatomic) NSMutableSet *subscribers;
@property (retain, nonatomic) TXCVideoFrame *capturedVideoFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int captureType;
@property (weak, nonatomic) id<TXIScreenCaptureDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } screenSize;

- (id)initWithQueue:(id)a0 outputQueue:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (int)captureType;
- (void)applyConfigs:(id)a0;
- (void)setFrameRate:(long long)a0;
- (void)start;
- (void)stop;
- (void)startScreenCaptureInternal:(int)a0;
- (void)startCaptureWithRestRetryCount:(long long)a0;
- (void)stopScreenCaptureInternal:(int)a0;
- (void)notifyError:(id)a0;
- (void)notifyScreenSize:(id)a0;
- (void)screenRecorder:(id)a0 didStopRecordingWithPreviewViewController:(id)a1 error:(id)a2;
- (void)screenRecorderDidChangeAvailability:(id)a0;
- (void)captureFrame:(id /* block */)a0;
- (void)timedOutput:(id)a0 outputObject:(id)a1;
- (void).cxx_destruct;

@end
