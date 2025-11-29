@class HTSGLContext, NSString, NSObject;
@protocol OS_dispatch_semaphore, VEAudioCaptureProtocol;

@interface IESMMCaptureBase : VERunloopObject <AVCaptureAudioDataOutputSampleBufferDelegate> {
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (nonatomic) BOOL capturePaused;
@property (nonatomic, getter=isCaptureWithAudio) BOOL captureWithAudio;
@property (copy, nonatomic) id /* block */ videoAttachmentsCallback;
@property (copy, nonatomic) id /* block */ videoOutputCallback;
@property (copy, nonatomic) id /* block */ audioOutputCallback;
@property (copy, nonatomic) id /* block */ audioConvertCallback;
@property (copy, nonatomic) id /* block */ audioBGMOutputCallback;
@property (copy, nonatomic) id /* block */ audioBGMResultCallback;
@property (copy, nonatomic) id /* block */ audioBGMStatusCallback;
@property (readonly, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) id<VEAudioCaptureProtocol> audioCapture;
@property (readonly, nonatomic) long long currentCameraPosition;
@property (nonatomic) unsigned long long cameraInfoRequirement;
@property (copy, nonatomic) id /* block */ cameraInfoBlock;
@property (readonly, nonatomic) BOOL isAudioCaptureRunning;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) BOOL needConvert;
@property (nonatomic) BOOL useAudioNewFormat;
@property (nonatomic) long long audioMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescriptionWithMode:(long long)a0;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescription;

- (void)setMusicVolume:(double)a0;
- (double)recordVolume;
- (void)setRecordVolume:(double)a0;
- (double)accompanyVolume;
- (void)setAccompanyMusicFile:(id)a0 fromTime:(double)a1 OriginalSingMusicFile:(id)a2 startTime:(double)a3;
- (void)mutedAccompany:(BOOL)a0;
- (void)accompanySeekToTime:(double)a0;
- (void)calculateCreatCameraTimes;
- (void)echoEnable:(BOOL)a0;
- (void)forceStopCameraCaptureWithCompleteBlock:(id /* block */)a0 withPrivacyCert:(id)a1;
- (double)getAccompanyCurrentTime;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })getAudioCaptureFormat;
- (double)getDuetKaraokeModeCurrentTime;
- (double)getOriginalSingCurrentTime;
- (BOOL)isAudioCaptureExists;
- (BOOL)isCameraModeSupported:(long long)a0;
- (BOOL)isStablizationSupported;
- (void)mutedOrignalSing:(BOOL)a0;
- (void)originalSingSeekToTime:(double)a0;
- (double)originalSingVolume;
- (void)pauseCameraCapture;
- (void)releaseAudioCapture;
- (void)resumeCameraCapture;
- (void)reuseAudioCapture:(id)a0;
- (void)routeChanged;
- (void)seekDuetKaraokeModeToTime:(double)a0;
- (void)seekToAccompanyTime:(double)a0 accompanyStartWritingTime:(double)a1 originalSingTime:(double)a2 originalSingStartWritingTime:(double)a3;
- (void)setAccompanyVolume:(double)a0;
- (void)setDuetKaraokeModeMusic:(id)a0 fromTime:(double)a1;
- (void)setEnableEarBack:(BOOL)a0;
- (void)setOriginalSingVolume:(double)a0;
- (void)startAudioUnitCapture:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)startAudioUnitCaptureSync:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)startCameraCapture:(id)a0;
- (void)startCameraCapture:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)startVideoCaptureWithAppStatusCheck:(id)a0;
- (BOOL)startVideoCaptureWithAppStatusCheck:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopAudioUnitCapture:(id)a0;
- (void)stopCameraCapture:(id)a0;
- (void)stopCameraCaptureWithCompleteBlock:(id /* block */)a0 withPrivacyCert:(id)a1;
- (double)videoCaptureFrameRate;
- (long long)cameraPosition;
- (void).cxx_destruct;
- (void)play;
- (BOOL)isRunning;
- (void)pause;
- (double)musicVolume;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)dealloc;

@end
