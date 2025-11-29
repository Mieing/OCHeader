@class LiveStreamRenderSinkBuffer;

@interface LiveStreamRenderSink : NSObject {
    struct scoped_refptr<avframework::AudioDeviceInterface::AudioRenderSinkInterface> { struct AudioRenderSinkInterface *ptr_; } _renderSink;
    struct unique_ptr<avframework::AudioFrame, std::default_delete<avframework::AudioFrame>> { struct __compressed_pair<avframework::AudioFrame *, std::default_delete<avframework::AudioFrame>> { struct AudioFrame *__value_; } __ptr_; } _audioFrame;
}

@property (retain, nonatomic) LiveStreamRenderSinkBuffer *sinkBuffer;
@property (copy, nonatomic) id /* block */ getAudioCallback;

- (void)setPlayerVolume:(float)a0;
- (void)pauseBGM:(BOOL)a0;
- (void)setPushVolume:(float)a0;
- (void)pushAudioData:(short *)a0 samplesPerChannel:(int)a1 sampleRate:(int)a2 numChannels:(int)a3 timestamp:(long long)a4;
- (void)openForceMediaMode:(BOOL)a0;
- (void)setEnableMix2Output:(BOOL)a0;
- (void)setQuirks:(long long)a0;
- (void)setEnablePlayback:(BOOL)a0;
- (void)setBGMProcessorModule:(void *)a0;
- (void)enableProgressAsTs:(BOOL)a0;
- (void)enableCallbackDualSourceFrame:(BOOL)a0;
- (void)setBGMFilePath:(id)a0 originFilePath:(id)a1;
- (void)seekBGM:(long long)a0;
- (long long)getPlayDelayInMs;
- (double)getBGMDuration;
- (float)getPlayerVolume;
- (float)getPushVolume;
- (void)setAudioLoudNormParam:(float)a0;
- (void)setDisAbleLockWhenStopAndPull:(BOOL)a0;
- (long long)getQuirks;
- (id)initWithByteAudioRenderSink:(struct scoped_refptr<avframework::AudioDeviceInterface::AudioRenderSinkInterface> { struct AudioRenderSinkInterface *x0; })a0;
- (void)enableAGC:(BOOL)a0 isVoice:(BOOL)a1;
- (BOOL)isEnableAGC;
- (void)setExhaustMode:(BOOL)a0 withConfig:(id)a1;
- (void)setLoopEnable:(BOOL)a0;
- (void)setOriginEnable:(BOOL)a0;
- (void)setAuxThreadPriority:(int)a0;
- (void)enablePlayback:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)setVolume:(float)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)startStream;
- (void)setMute:(BOOL)a0;
- (float)getVolume;
- (void)stopStream;
- (void)clearBuffer;
- (BOOL)isMute;

@end
