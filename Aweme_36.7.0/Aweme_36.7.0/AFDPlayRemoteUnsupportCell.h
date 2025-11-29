@class UIViewController, NSString, UIImageView, AWEAwemeModel, UILabel, AFDPlayRemoteUnsupportConifg, NSDictionary;
@protocol AWERTVFeedContentControllers, AFDPlayRemoteFeedStreamCellDelegate;

@interface AFDPlayRemoteUnsupportCell : UITableViewCell <AFDPlayRemoteFeedStreamCellProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AFDPlayRemoteUnsupportConifg *unsupportConfig;
@property (copy, nonatomic) NSDictionary *unsupportConfigMapper;
@property (nonatomic) long long pureMode;
@property (retain, nonatomic) id<AWERTVFeedContentControllers> rtvFeedContentControllers;
@property (weak, nonatomic) id<AFDPlayRemoteFeedStreamCellDelegate> delegate;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (BOOL)pauseBySingleClick;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)seekToProgress:(long long)a0;
- (BOOL)playerUseAudioMix;
- (void)updatePureMode:(long long)a0;
- (void)updatePlaySpeed:(id)a0;
- (long long)playingProgress;
- (void)configWithAwemeModel:(id)a0 context:(id)a1;
- (void)seekToAwemeProgress:(id)a0;
- (id)awemePlayingProgress;
- (id)requestReusePlayer;
- (void)__configComponents;
- (void)prepareForDisplay;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)totalTime;
- (long long)mediaType;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isPlaying;
- (void)stop;
- (void)setVolume:(float)a0;
- (void)reset;
- (double)currentPlaybackTime;
- (void)setMute:(BOOL)a0;
- (long long)playState;
- (void)willDisplay;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
