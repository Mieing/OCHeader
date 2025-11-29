@class UITapGestureRecognizer, NSString, NSTimer, AWEAwemeModel, AFDPlayRemoteFeedContext, UIViewController;
@protocol AWEPlayInteractionViewControllerNewProtocol, AWERTVFeedContentControllers, AWEPlayInteractionViewControllerProtocol, AWERTVAwemeContentViewController;

@interface AWERTVAwemeViewController : UIViewController <UIGestureRecognizerDelegate, AFDPlayRemoteControlProtocol>

@property (readonly, nonatomic) AFDPlayRemoteFeedContext *context;
@property (retain, nonatomic) UIViewController<AWERTVAwemeContentViewController> *contentViewController;
@property (retain, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionViewControllerNewProtocol> *interactionController;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) NSTimer *singleClickTimer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) long long pureMode;
@property (retain, nonatomic) id<AWERTVFeedContentControllers> rtvFeedContentControllers;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (BOOL)pauseBySingleClick;
- (void)didEndDisplay;
- (void)seekToProgress:(long long)a0;
- (void)initInteractController;
- (BOOL)playerUseAudioMix;
- (void)p_hideInteractionElementIfNeeded;
- (void)updatePlaySpeed:(id)a0;
- (id)p_cellOperator;
- (long long)playingProgress;
- (void)onTapGeature:(id)a0;
- (void)configWithAwemeModel:(id)a0 context:(id)a1;
- (void)seekToAwemeProgress:(id)a0;
- (id)awemePlayingProgress;
- (void)hidePauseView:(BOOL)a0;
- (void)pauseWithIcon:(BOOL)a0;
- (void)__silentUpdate;
- (void)p_updateWithPureMode:(long long)a0 canPlay:(BOOL)a1;
- (void)setupUIIfNeeded;
- (void)initContentViewController;
- (BOOL)__shouldResponseToSingleTap;
- (void)prepareForDisplay;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)mediaType;
- (BOOL)isPlaying;
- (void)stop;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setVolume:(float)a0;
- (void)reset;
- (void)resume;
- (void)handleDoubleTap:(id)a0;
- (void)viewDidLoad;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)setMute:(BOOL)a0;
- (long long)playState;
- (void)handleSingleTap;
- (void)willDisplay;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
