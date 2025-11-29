@class AVPlayer, NSString, AVURLAsset, AVPlayerItem, NSRunLoop, AVPlayerItemVideoOutput, AVAudioSession, AVAssetTrack;
@protocol WKKryptonVideoPlayerDelegate;

@interface WKKryptonDefaultVideoPlayer : NSObject <WKKryptonVideoPlayer> {
    AVURLAsset *_asset;
    AVAssetTrack *_track;
    AVPlayerItem *_playItem;
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_output;
    BOOL _playing;
    id _timeObserver;
    long long _timeObserverStartTime;
    NSRunLoop *_runtimeLoop;
    double _volume;
    BOOL _audioOnly;
    double _currentTimeCache;
    AVAudioSession *_sessionInstance;
}

@property (weak, nonatomic) id<WKKryptonVideoPlayerDelegate> delegate;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL destroyed;
@property (nonatomic) double duration;
@property (nonatomic) long long rotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (int)getVideoWidth;
- (int)getVideoHeight;
- (long long)getVideoRotation;
- (void)clearPlayer;
- (BOOL)getLooping;
- (void)onAssetLoadComplete;
- (void)performBlockOnThreadThatTirggerLoad:(id /* block */)a0;
- (void)notifyPlayerState:(long long)a0 withMessage:(id)a1;
- (void)observePlayerItemDidReachEnd:(id)a0;
- (void)notifyPlayerStateOnRuntimeThread:(long long)a0 withMessage:(id)a1;
- (void)onPlayerStatusChanged;
- (void)tryToRemoveTimeObserver;
- (void)onPlayerItemDidReachEnd;
- (void)onPlayerRateChanged;
- (void)autoNotifyStatusCanRender;
- (void)checkTimeObserver;
- (void)setCurrentTime:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)getDuration;
- (id)init;
- (void)setVolume:(double)a0;
- (void)dispose;
- (void)setSource:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (double)getCurrentTime;

@end
