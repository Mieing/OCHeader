@class AVCaptureSession, NSObject;
@protocol OS_dispatch_queue, OnGetBrightnessInner;

@interface BrightnessDevice : NSObject

@property (weak, nonatomic) id<OnGetBrightnessInner> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoProcessingQueue;
@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic) float brightnessValue;

- (void)startLightSensitive;
- (void)stopLightSensitive;
- (float)getBrightness;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void).cxx_destruct;

@end
