@class NSString;

@interface VEExternalAudioCapture : NSObject <VEAudioCaptureProtocol>

@property (nonatomic) BOOL isCaptureStarted;
@property (copy, nonatomic) id /* block */ audioCaptureBlock;
@property (copy, nonatomic) id /* block */ audioConvertCallback;
@property (copy, nonatomic) id /* block */ audioBGMOutputCallback;
@property (copy, nonatomic) id /* block */ audioBGMResultCallback;
@property (copy, nonatomic) id /* block */ audioBGMStatusCallback;
@property (nonatomic) BOOL needConvert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescription;

- (void)processExternalAudioInput:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)isAudioCaptureRunning;
- (void)releaseAudioCapture;
- (void)startAudioCapture:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)startAudioUnitCapture:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)startAudioUnitCaptureSync:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)stopAudioCapture:(id)a0;
- (void)stopAudioUnitCapture:(id)a0;
- (void).cxx_destruct;

@end
