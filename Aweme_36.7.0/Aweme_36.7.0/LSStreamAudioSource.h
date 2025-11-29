@class LiveStreamLinkInfo, AudioSource;

@interface LSStreamAudioSource : LSStreamMediaSource {
    AudioSource *audioSource;
    struct scoped_refptr<avframework::AudioTrackInterface> { struct AudioTrackInterface *ptr_; } audioTrack;
    struct scoped_refptr<avframework::ObjcAudioTrackSource> { struct ObjcAudioTrackSource *ptr_; } objcAudioTrackSource;
    int audioSampleRate;
    int audioChannelCount;
}

@property (retain, nonatomic) LiveStreamLinkInfo *currentLinkInfo;

- (id)linkInfo;
- (id)initWithLinkInfo:(id)a0;
- (void)setupWithMediaEngineFactory:(struct MediaEngineFactoryInterface { void /* function */ **x0; } *)a0;
- (void)initOutputParam:(int)a0 channelCount:(int)a1;
- (id)getNativeSource;
- (id)trackID;
- (void).cxx_destruct;
- (void)removeTrack:(void *)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)addTrack:(void *)a0;

@end
