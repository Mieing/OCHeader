@class NSLock, NSString, AVAsset, AVPlayerItemVideoOutput, AVPlayerItem, AVAudioSession, AVPlayer;
@protocol SonicPlayerListener;

@interface SonicPlayerImpl : NSObject <SonicPlayer> {
    AVAsset *asset_;
    struct __CVOpenGLESTextureCache { } *texture_cache_;
    unsigned int width_;
    unsigned int height_;
    double duration_;
    long long rotation_;
    AVPlayer *player_;
    AVPlayerItemVideoOutput *output_;
    AVPlayerItem *item_;
    id playback_observer_;
    BOOL loop_;
    BOOL playing_;
    id play_continue_observer_;
    AVAudioSession *session_instance_;
    id<SonicPlayerListener> listener_;
    NSLock *lock_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)getVideoWidth;
- (unsigned int)getVideoHeight;
- (long long)getVideoRotation;
- (BOOL)updateTexture:(struct __CVBuffer **)a0;
- (void)unobserve;
- (void)removeAllObserver;
- (void)setCurrentTime:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithContext:(id)a0;
- (double)getDuration;
- (void)setVolume:(float)a0;
- (void)dispose;
- (void)setSource:(id)a0;
- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setLooping:(BOOL)a0;
- (double)getCurrentTime;
- (void)setListener:(id)a0;
- (void)observe;

@end
