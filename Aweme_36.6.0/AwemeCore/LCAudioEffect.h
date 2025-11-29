@class LCAudioEffectConfig, NSString, LSLiveAudioMixerHandle, LSLiveAudioEffect;

@interface LCAudioEffect : NSObject <LSLiveAudioMixerProtocol> {
    LSLiveAudioEffect *_audioEffect;
    BOOL isReverberationEnabled;
    LSLiveAudioMixerHandle *_mixerHandle;
    LCAudioEffectConfig *_config;
}

@property (nonatomic) double volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedProcessBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 sampleFrames:(long long)a1 elementIndex:(unsigned int)a2 withMixerHandle:(id)a3;
- (void)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void)initializeLiveAudioEffect;
- (void)enableReverberation:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
