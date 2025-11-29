@class NSString, UIImageView, AWEBinding, UIView, NSObject;

@interface AWEAwemeLongVideoPlusDetailCellViewController : AWEAwemeDetailCellViewController <AWEPadUIAdaptionViewTransitionObserver>

@property (nonatomic) BOOL isFirst;
@property (nonatomic) double playerStartTime;
@property (retain, nonatomic) NSObject *screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (retain, nonatomic) UIImageView *upImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL isShowDefaultBackground;
@property (nonatomic) BOOL isChange;
@property (weak, nonatomic) id bindPlayerController;
@property (weak, nonatomic) id bindVideoController;
@property (nonatomic) BOOL isChangeBoundsValue;
@property (nonatomic) BOOL isPlayFinished;
@property (retain, nonatomic) AWEBinding *videoBind;
@property (retain, nonatomic) AWEBinding *playerBind;
@property (retain, nonatomic) AWEBinding *frameBind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDefaultSeekToTime:(id)a0;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)playerWillStartNextLoop:(id)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)postVideoNotificationForAutoPlay;
- (void)setupBindings;
- (void)updateImageViewLayout;
- (void)configBasicLogic;
- (void)disableScreenCapture;
- (void)traceVideoPlayFinished;
- (void)requestPaidAweme:(id)a0;
- (void)disableDefaultVideoPlayFinishTrack;
- (void)setupBindVideoController;
- (void)setupBindPlayerController;
- (void)adjustViewLayer;
- (void)adaptPad;
- (void)trackSelectionButtonWithModel:(id)a0 show:(long long)a1;
- (void)submitLongVideoHistory;
- (void)trackHighLightPlay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateWithModel:(id)a0;

@end
