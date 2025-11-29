@class IESLivePlaybackPictureScaleGuideView, NSString, IESLivePlaybackPictureScaleStore, UIPinchGestureRecognizer, UIPanGestureRecognizer, UIButton;

@interface IESLivePlaybackLandscapePictureScaleFragment : IESLivePlaybackComponent <UIGestureRecognizerDelegate, IESLivePlaybackOrientationActions, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackLandscapePictureScaleRouter, IESLivePlaybackLandscapeLockAction, IESLivePlaybackScalePanelAction, IESLiveAirPlayAction>

@property (retain, nonatomic) IESLivePlaybackPictureScaleStore *store;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIButton *resetButton;
@property (nonatomic) BOOL isComponentsHide;
@property (nonatomic) BOOL allowGesture;
@property (retain, nonatomic) IESLivePlaybackPictureScaleGuideView *pictureScaleGuideView;
@property (nonatomic) double resetScale;
@property (nonatomic) BOOL isShowingGuide;
@property (nonatomic) double enlargeStart;
@property (nonatomic) float enlargeRatio;
@property (nonatomic) float previousEnlargeRatio;
@property (nonatomic) float movex;
@property (nonatomic) float movey;
@property (nonatomic) BOOL hasEnlarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)updateCallbackCurrentScreenCastStatus:(BOOL)a0;
- (void)resetRecordedIfNeed:(BOOL)a0;
- (double)currentPictureScale;
- (void)updatePictureScale:(double)a0;
- (void)bindStore;
- (id)previousEnlargeRatioNum;
- (id)moveXDistance;
- (id)moveYDistance;
- (void)vsTrackEvent:(id)a0 extraParams:(id)a1;
- (void)scaleStatusChange;
- (BOOL)shouldShowResetButton;
- (void)onPan:(id)a0;
- (void)showScaleGesGuide;
- (id)curEnlargeRatioNum;
- (BOOL)shouldActivatePinchGesture;
- (BOOL)shouldActivatePanGesture;
- (void)resetButtonClick:(id)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)scaleInAction:(BOOL)a0;
- (void)lockStatusChange:(BOOL)a0;
- (BOOL)isScaleGuideHidden;
- (BOOL)allowShowScale;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setupUI;
- (void)setupGestures;
- (void)onPinch:(id)a0;

@end
