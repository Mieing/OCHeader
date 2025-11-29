@class AVAsset, AVPlayerItem, NSString, WCPlayerLayerView, AVPlayer;
@protocol WCPipPlayerDelegate;

@interface WCPipSupportPlayer : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) WCPlayerLayerView *displayView;
@property (retain) AVPlayer *player;
@property (retain, nonatomic) id positionObserver;
@property (nonatomic) double lastPlaybackTime;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) unsigned int taskId;
@property (weak, nonatomic) id<WCPipPlayerDelegate> delegate;
@property (nonatomic) BOOL loopBack;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isPipPlaying;
@property long long state;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) double currentTime;

- (id)initWithDisplayView:(id)a0;
- (void)dealloc;
- (void)prepareWithPlayerItem:(id)a0;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekTo:(double)a0;
- (void)setPlayerVolume:(double)a0;
- (void)setPlayerRate:(double)a0;
- (void)onMainPlayerPlayToEnd;
- (void)reset;
- (void)resetPlayerView;
- (void)resetPlayerComponent;
- (void)resetPlayerValues;
- (void)removePositionObserver;
- (void)startToPlayItem;
- (void)printTimeControlStatus:(long long)a0;
- (void)observePlayerStatus;
- (void)onTimeControlStatusChange:(long long)a0;
- (void)changePlayerState:(long long)a0;
- (void)onPlayerItemDidPlayToEnd;
- (void)addPlayerObservers;
- (void)onCurrentPlaybackChanged:(double)a0;
- (void).cxx_destruct;

@end
