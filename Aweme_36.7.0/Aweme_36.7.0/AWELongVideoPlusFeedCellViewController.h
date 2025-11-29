@class CAGradientLayer, NSString, UIImageView, AWEBinding, UIView, NSObject, UILabel;

@interface AWELongVideoPlusFeedCellViewController : AWEFeedCellViewController <AWEPadUIAdaptionViewTransitionObserver>

@property (nonatomic) double playerStartTime;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSObject *screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (retain, nonatomic) UIImageView *upImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL isShowDefaultBackground;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL isSkipBind;
@property (weak, nonatomic) id bindPlayerController;
@property (weak, nonatomic) id bindVideoController;
@property (nonatomic) BOOL isChangeBoundsValue;
@property (nonatomic) BOOL isPlayFinished;
@property (retain, nonatomic) AWEBinding *videoBind;
@property (retain, nonatomic) AWEBinding *playerBind;
@property (retain, nonatomic) AWEBinding *frameBind;
@property (retain, nonatomic) UILabel *highLightDescriptionView;
@property (retain, nonatomic) UIView *highLightDescriptionBackGroundView;
@property (retain, nonatomic) CAGradientLayer *highLightDescriptionBackGroundViewGradientLayer;
@property (nonatomic) BOOL isShowingHighLightDescription;
@property (nonatomic) BOOL shouldShowHighLightDescription;
@property (nonatomic) BOOL isFullScreenPortrait;
@property (nonatomic) BOOL shouldHideHighLightDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)updateDefaultSeekToTime:(id)a0;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)didDisplay;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)playerWillStartNextLoop:(id)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)postVideoNotificationForAutoPlay;
- (void)setupBindings;
- (void)updateImageViewLayout;
- (void)configBasicLogic;
- (void)disableScreenCapture;
- (void)traceVideoPlayFinished;
- (void)disableDefaultVideoPlayFinishTrack;
- (void)setupBindVideoController;
- (void)setupBindPlayerController;
- (void)adjustViewLayer;
- (void)adaptPad;
- (void)trackSelectionButtonWithModel:(id)a0 show:(long long)a1;
- (void)submitLongVideoHistory;
- (void)trackHighLightPlay;
- (void)showPaymentUseCouponTipsIfNeeded;
- (void)updateHightLightDescriptionLayout;
- (void)hideHighLightDescription;
- (void)showHighLightDescription;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)configureWithModel:(id)a0;

@end
