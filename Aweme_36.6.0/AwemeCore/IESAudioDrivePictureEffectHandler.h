@class LSAudioDrivePictureEffectPreviewAudioCapture, playVolume, startAudioCaptureCert;

@interface IESAudioDrivePictureEffectHandler : NSObject {
    struct IESAudioDrivePictureEffectParamsStruct { BOOL useInMic; BOOL useInMusic; BOOL useOutPlay; BOOL useOutPublish; BOOL needStartInnerAudioCapture; startAudioCaptureCert *audioConfig; playVolume *x0; double x1; double publishVolume; } params;
}

@property (nonatomic) void *effectAudioHandle;
@property (retain, nonatomic) LSAudioDrivePictureEffectPreviewAudioCapture *previewAudioCapture;
@property (nonatomic) int sampleRate;

+ (id)createHandlerWithParams:(struct IESAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; double x7; double x8; })a0 err:(int *)a1;

- (void)applicationDidBecomeActiveNoti:(id)a0;
- (void)startAudioCaptureIfNeeded;
- (void)stopAudioCaptureIfNeeded;
- (void)updateParams:(struct IESAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; double x7; double x8; })a0;
- (BOOL)audioDrivePictureEffectUseOutPlay;
- (BOOL)audioDrivePictureEffectUseOutPublish;
- (BOOL)audioDrivePictureEffectUseMic;
- (double)audioDrivePictureEffectPlayVolume;
- (double)audioDrivePictureEffectPublishVolume;
- (void)newProcessIoData:(float *)a0 bufferSize:(unsigned int)a1 outSamplesPerChannel:(int)a2 channels:(int)a3 sampleRate:(int)a4 dataPlay:(float *)a5 dataWrite:(float *)a6;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (int)destroyHandler;

@end
