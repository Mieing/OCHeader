@class UIPanGestureRecognizer, ACCEditSingleVideoFakeProgressView, ACCEditSingleVideoSliderView, UILabel, UIView, UIButton;
@protocol DVEEditingRuntimeProtocol, ACCSequenceEditServiceProtocol, ACCAEViewContainerProtocol, DVETrackEventProtocol, ACCAEFullPreviewViewContainer, DVEPlayerServiceProtocol;

@interface ACCAEFullPreviewControlComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCAEFullPreviewViewContainer> viewContainer;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> mainViewController;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventer;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UIView *panGestureView;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) ACCEditSingleVideoSliderView *progressSlider;
@property (retain, nonatomic) ACCEditSingleVideoFakeProgressView *fakeProgressSlider;
@property (nonatomic) double videoTimeLength;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL isPlayingWhenDrag;
@property (nonatomic) BOOL isAppeared;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)progressSliderValueChanged:(id)a0;
- (void)clickExitButton;
- (void)setupObserve;
- (void)progressSliderTouchEnded:(id)a0 bySlideScreen:(BOOL)a1;
- (void)showFakeSliderIfNeeded;
- (void)restoreToNormalWhenTouchEnd;
- (void)updateProgressSlider;
- (void)trackEventClickFullScreenButton;
- (void)updatePlayButton;
- (void)updatePlayButtonImage:(id)a0 play:(BOOL)a1;
- (void)cancelPanGesture;
- (void)trackEventClickPlayButton:(BOOL)a0;
- (void)addFakeProgressSliderIfNeeded;
- (void)clickPlayButton;
- (void)progressSliderTouchBegan:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;
- (void)updateTimeLabel;
- (void)initData;

@end
