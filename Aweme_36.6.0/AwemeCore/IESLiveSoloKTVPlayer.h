@class AVPlayer, AVPlayerItem, IESLiveGCDTimer;
@protocol IESLiveSoloKTVPlayerDelegate;

@interface IESLiveSoloKTVPlayer : NSObject

@property (weak, nonatomic) id timeObserver;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) IESLiveGCDTimer *playPauseTimer;
@property (nonatomic) double lastActionTime;
@property (nonatomic) int seekDelay;
@property (nonatomic) BOOL isLoadingOrPlaying;
@property (weak, nonatomic) id<IESLiveSoloKTVPlayerDelegate> delegate;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL needLoop;
@property (nonatomic) BOOL needAutoPlay;
@property (copy, nonatomic) id /* block */ playFinishCallBack;

- (double)playerDuration;
- (void)mute:(BOOL)a0;
- (void)clearPlayer;
- (void)didPlayerPlayFinish;
- (void)loadPlayerWithPlayerItem:(id)a0;
- (void)loadPlayerWithURL:(id)a0;
- (void)locateToOrigin;
- (void)setupTimeObserverWithInterval:(double)a0;
- (void)stopPlayPauseTimer;
- (id)initPlayerWithURL:(id)a0 needAutoPlay:(BOOL)a1;
- (id)initPlayerWithPlayerItem:(id)a0 needAutoPlay:(BOOL)a1;
- (BOOL)changePlayPauseState;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)isMuted;
- (id)playerLayer;
- (void)seek:(double)a0;
- (long long)playerStatus;

@end
