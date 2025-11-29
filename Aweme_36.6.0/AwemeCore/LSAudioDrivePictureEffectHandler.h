@class LSAudioDrivePictureEffectPreviewAudioCapture, playVolume, startAudioCaptureCert;

@interface LSAudioDrivePictureEffectHandler : NSObject {
    struct unique_ptr<avframework::FFmpegAudioResampler, std::default_delete<avframework::FFmpegAudioResampler>> { struct __compressed_pair<avframework::FFmpegAudioResampler *, std::default_delete<avframework::FFmpegAudioResampler>> { struct FFmpegAudioResampler *__value_; } __ptr_; } s16_2_flt_resampler;
    struct LSAudioDrivePictureEffectParamsStruct { BOOL useInMic; BOOL useInMusic; BOOL useOutPlay; BOOL useOutPublish; BOOL needStartInnerAudioCapture; startAudioCaptureCert *audioConfig; playVolume *x0; float x1; float publishVolume; } params;
}

@property (nonatomic) void *effectAudioHandle;
@property (retain, nonatomic) LSAudioDrivePictureEffectPreviewAudioCapture *previewAudioCapture;
@property (nonatomic) int sampleRate;

+ (id)createHandlerWithParams:(struct LSAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; float x7; float x8; })a0 err:(int *)a1;

- (void)applicationDidBecomeActiveNoti:(id)a0;
- (void)startAudioCaptureIfNeeded;
- (void)stopAudioCaptureIfNeeded;
- (void)updateParams:(struct LSAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; float x7; float x8; })a0;
- (void)processIoData:(short *)a0 musicData:(short *)a1 processedData:(short *)a2 earMonitorData:(short *)a3 bufferSize:(unsigned int)a4 numberOfChannels:(int)a5 sampleRate:(int)a6 numberOfFrames:(int)a7;
- (BOOL)isUseInMic;
- (BOOL)isUseOutPlay;
- (BOOL)isUseOutPublish;
- (float)getPlayVolume;
- (float)getPublishVolume;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (int)destroyHandler;

@end
