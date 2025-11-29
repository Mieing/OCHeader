@class AWELiveVSEpisode, NSString, UIImageView, UIView, NSNumber, IESLiveVideoPlayerController;
@protocol AWELiveSearchVSVideoPlayerDelegate;

@interface AWELiveSearchPreVSVideoPlayer : NSObject <IESLiveVideoPlayerControllerDelegate, AWELiveVSVideoPlayerProtocol>

@property (retain, nonatomic) AWELiveVSEpisode *vsEpisode;
@property (retain, nonatomic) NSNumber *episodeID;
@property (copy, nonatomic) NSString *playInfo;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELiveSearchVSVideoPlayerDelegate> delegate;
@property (nonatomic) double volume;
@property (nonatomic) BOOL muted;
@property (readonly, nonatomic) BOOL isLoop;
@property (nonatomic) long long playState;
@property (readonly, nonatomic) double durationTime;
@property (readonly, nonatomic) double currPlaybackTime;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)onStalledStart:(id)a0 actionType:(long long)a1 reason:(unsigned long long)a2;
- (void)onStalledEnd:(id)a0;
- (void)changePlayerContentMode:(long long)a0;
- (void)updateWithVsEpisode:(id)a0;
- (void)setStartTime:(double)a0 loopStartTime:(double)a1;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (void)playFromHistoryLocation;
- (void)enableLoop:(BOOL)a0;
- (void)seekToTime:(double)a0 complete:(id /* block */)a1;
- (id)initWithVsEpisode:(id)a0;
- (void)recoverContentMode;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (void)stop;
- (id)playerView;
- (void)setupUI;
- (void)createPlayer;

@end
