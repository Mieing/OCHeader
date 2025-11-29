@class NSString, AVCaptureStillImageOutput, AVCapturePhotoOutput, NSLock;

@interface MMCapturePhotoOutput : NSObject <AVCapturePhotoCaptureDelegate> {
    BOOL inNewApi;
}

@property (retain, nonatomic) AVCaptureStillImageOutput *imageOutput;
@property (retain, nonatomic) AVCapturePhotoOutput *photoOutput;
@property (nonatomic) BOOL isTakingPhoto;
@property (copy, nonatomic) id /* block */ takePhotoCallback;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long flashLightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCaptureSession:(id)a0 delegate:(id)a1;
- (BOOL)canUseNewPhotoOutput:(id)a0;
- (BOOL)isUseNewApiTakePhoto;
- (long long)getPhotoQuilityPrioritizationForNewApi;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)capturePhotoWithCompletion:(id /* block */)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)sceneChanged:(unsigned long long)a0;
- (BOOL)canUseNewPhotoApi:(unsigned long long)a0;
- (void).cxx_destruct;

@end
