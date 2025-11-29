@class LiveStreamAudioCapture, LiveStreamCapture, LSAudioDrivePictureEffectHandler, NSString;

@interface LSAudioDrivePictureEffectPreviewAudioCapture : NSObject <LiveStreamAudioCaptureDelegate>

@property (retain, nonatomic) LiveStreamAudioCapture *audioCapture;
@property (retain, nonatomic) LiveStreamCapture *videoCapture;
@property (weak, nonatomic) LSAudioDrivePictureEffectHandler *audioDrivePictureEffectHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushPlayerAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 frames:(int)a1 bytesPerSample:(int)a2 channels:(int)a3 sampleRate:(int)a4;
- (void)pushPlayerAECAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 frames:(int)a1 bytesPerSample:(int)a2 channels:(int)a3 sampleRate:(int)a4;
- (void)pullMicAudio:(void *)a0 size:(unsigned int)a1 sampleRate:(int)a2 timeStamp:(long long)a3 mNumberChannels:(unsigned int)a4 numberOfFrames:(unsigned int)a5 processedData:(void *)a6 earMonitorData:(void *)a7;
- (void)admCreatedSuccess:(BOOL)a0;
- (void)callbackAudioLog:(id)a0;
- (void)onAudioCaptureEvent:(long long)a0;
- (void)addMonitoringLinkMicAudioData;
- (void)removeMonitoringLinkMicAudioData;
- (id)initWithConfig:(id)a0 videoCapture:(id)a1;
- (void).cxx_destruct;
- (void)startAudioCapture;
- (id)initWithConfig:(id)a0;
- (void)stopAudioCapture;

@end
