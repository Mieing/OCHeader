@class UIViewController, NSString, AWEAwemeModel, AFDPlayRemoteFeedStreamCellContext, AWERTVAwemeViewController;
@protocol AFDPlayRemoteFeedStreamCellDelegate, AWERTVFeedContentControllers;

@interface AWERTVFeedViewCell : UITableViewCell <AFDPlayRemoteFeedStreamCellProtocol>

@property (readonly, nonatomic) AFDPlayRemoteFeedStreamCellContext *context;
@property (nonatomic) BOOL hasCellLoaded;
@property (nonatomic) BOOL isAweViewControllerFromReuse;
@property (retain, nonatomic) AWERTVAwemeViewController *aweViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AFDPlayRemoteFeedStreamCellDelegate> delegate;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) long long pureMode;
@property (retain, nonatomic) id<AWERTVFeedContentControllers> rtvFeedContentControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (BOOL)pauseBySingleClick;
- (void)didEndDisplay;
- (void)seekToProgress:(long long)a0;
- (BOOL)playerUseAudioMix;
- (void)updatePlaySpeed:(id)a0;
- (long long)playingProgress;
- (void)configWithAwemeModel:(id)a0 context:(id)a1;
- (void)seekToAwemeProgress:(id)a0;
- (id)awemePlayingProgress;
- (void)hidePauseView:(BOOL)a0;
- (void)pauseWithIcon:(BOOL)a0;
- (id)requestReusePlayer;
- (void)initAwemeViewController;
- (void)__updateAweViewControllerIfNeeded:(id)a0;
- (void)__clearAweViewController;
- (void)__configAweViewController;
- (void)prepareForDisplay;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)mediaType;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)stop;
- (void)setVolume:(float)a0;
- (void)reset;
- (void)resume;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)setMute:(BOOL)a0;
- (void)setupUI;
- (long long)playState;
- (void)willDisplay;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
