@class NSString, UIImageView, UIViewPropertyAnimator, UIView, UIPanGestureRecognizer, UILabel;
@protocol AWEIMMessageTabModeInterface, AFDCloseFriendsPlaceHolderViewProtocol, AWEIMTabSkeletonInterface, AWEIMOnlineAvatarListInterface;

@interface AWEIMMessageTabMomentEntryComponent : AWEIMComponentBase <UIGestureRecognizerDelegate, AWEIMMessageTabMomentEntryInterface, AWEZoomTransitionOuterContextProvider>

@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMOnlineAvatarListInterface> avatarListService;
@property (readonly, nonatomic) double pullDownThreshold;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isInTransition;
@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (retain, nonatomic) UIView<AFDCloseFriendsPlaceHolderViewProtocol> *placeHolderView;
@property (retain, nonatomic) UIView *transitionGuideView;
@property (retain, nonatomic) UILabel *transitionGuideLabel;
@property (retain, nonatomic) UILabel *transitionFinishLabel;
@property (retain, nonatomic) UIImageView *transitionIconView;
@property (retain, nonatomic) UIViewPropertyAnimator *viewAnimator;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (copy, nonatomic) id /* block */ animationCompletion;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } placeHolderTransform;
@property (nonatomic) BOOL isInteractive;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)presentMomentFeed;
- (void)presentMomentFirstFeed;
- (BOOL)p_enablePullDown;
- (void)setupPullDownTitleWithDefaultStyle;
- (void)createAnimator:(long long)a0;
- (void)p_directEnterMomentVC;
- (id)SnapShotImageWithAnimation:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)handlePanGesture:(id)a0;

@end
