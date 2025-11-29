@class IESLivePlaybackLongPressGuideView, NSString, LOTAnimationView, UIImageView, UILabel, UIView, IESLiveGCDTimer;

@interface IESLivePlaybackControlGesturesFragment : IESLivePlaybackComponent <IESLivePlaybackTapAction, IESLivePlaybackOrientationActions, IESLivePlaybackSeekAction, IESLivePaidStreamActionAdapter, IESLivePlaybackChangeStreamAction, IESLivePlaybackControlGestureRouter, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackScalePanelAction>

@property (nonatomic) BOOL allowLongGestureGuide;
@property (nonatomic) BOOL isMediaTypeShowLongGesGuide;
@property (retain, nonatomic) IESLivePlaybackLongPressGuideView *longPressGuideView;
@property (nonatomic) double playRate;
@property (retain, nonatomic) UILabel *doubleSpeedPlayLabel;
@property (retain, nonatomic) LOTAnimationView *playRateLottieView;
@property (retain, nonatomic) UIView *doubleSpeedBackGroundView;
@property (nonatomic) double stateEndRate;
@property (nonatomic) int durationLast;
@property (retain, nonatomic) UIImageView *levitatePauseImageView;
@property (retain, nonatomic) IESLiveGCDTimer *hidePauseIconTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)addLongPressGesture;
- (void)animateView;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)sharePanelWillShow;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)onSeekStart;
- (void)showScaleGesGuide;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)scaleInAction:(BOOL)a0;
- (void)doubleTapUpdatePauseState:(BOOL)a0;
- (void)streamWillChangeWithEpisode:(id)a0;
- (BOOL)shouldAddGesture;
- (BOOL)levitatePauseImageViewIsShowing;
- (void)hideLevitatePauseImageView;
- (void)setupRateDescView;
- (void)pauseIconLayout;
- (void)RateDescViewLayout;
- (void)speedViewLayout;
- (void)playWithDoubleSpeed:(id)a0;
- (void)doubleSpeedisEndTrack:(BOOL)a0;
- (void)showDouleSpeedView;
- (void)hideDoubleSpeedView;
- (void)vsPlayBackTrackEvent:(id)a0 extraParams:(id)a1;
- (void)updatePauseIconLayout;
- (void)pauseIconAnimateView;
- (void)hidePauseIconWithCountDown;
- (void).cxx_destruct;
- (void)setupUI;

@end
