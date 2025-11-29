@class UIView, NSString, AWEAwemeModel;

@interface AWERVTransitionController : AWERVBaseController <AWERVTransitionControllerProtocol>

@property (nonatomic) BOOL slideToProfile;
@property (nonatomic) BOOL rightSlideQuit;
@property (nonatomic) BOOL downSlideQuit;
@property (nonatomic) BOOL slideToOuterPage;
@property (nonatomic) unsigned long long triggerDirection;
@property (retain, nonatomic) AWEAwemeModel *transitioningAwemeModel;
@property (retain, nonatomic) UIView *rvdPageSnapShotImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadLongVideoPlayerAdapterClass;

- (void)popViewControllerCancelled;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)aAWEPadModuleAdapter;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (id)originVideoPlayerContainerView;
- (void)bindEvent;
- (double)landscapeTransitionDuration;
- (double)videoHeightWidthRatio;
- (double)videoDefaultHeight;
- (id)aAWEPadLongVideoPlayerAdapter;
- (void)backButtonDidClicked:(id)a0;
- (void)rvdFullScreenTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (id)rvdFullScreenTransitionContext;
- (id)rvdTransitionContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdTransitionVideoPlayerEnterFrame;
- (unsigned long long)rvdZoomTransitionAllowedTriggerDirection;
- (id)rvdTransitionCurrentModel;
- (void)rvdTransitionDidUpdatePlayerController;
- (void)rvdTransitionDidTranstionCompletion:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdSlideTransitionVideoPlayerEnterFrame;
- (unsigned long long)rvdInteractiveSectionSlideDownTransitionAllowedTriggerDirection;
- (id)rvdSlideTransitionVCSnapShotContainerScrollView;
- (id)rvdSlideTransitionVCSnapShotBottomInteractView;
- (BOOL)rvdSlideTransitionIsPlayBeforeOut;
- (BOOL)rvdSlideTransitionIsStopBeforeOut;
- (unsigned long long)rvdSlideTransitionTriggerDirection;
- (void)rvdSlideTransitionWillStartTransition;
- (void)rvdSlideTransitionDidTranstionCompletion:(BOOL)a0 currentPlayTime:(double)a1;
- (BOOL)enablePadRVDPopAnimation;
- (void)setScrollEnableWhenAnimation:(BOOL)a0;
- (BOOL)rvdChangeUnfollowStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rvdSlideTransitionPreferEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)rvdSlideTransitionCanSyncDiffAwemeModelToFeed;
- (BOOL)rvdSlideTransitionCanChangeAlpha;
- (void)rvdSlideTransitionWithIsAutoPause:(BOOL)a0;
- (void)rvdFullScreenTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldRvdFullScreenTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferMediaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)snapShotRvdPage;
- (void)syncAwemeModelToFeedVCIfNeeded:(BOOL)a0 currentPlaybackTime:(double)a1;
- (void)synPlaybackTimeWhenOut;
- (BOOL)canEnterPersonHomepage;
- (void)quitFromAwemeDetailVC:(id)a0;
- (void)synPlayStateWhenOut;
- (double)getVideoMaxHeightInFixedHeightScene;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
