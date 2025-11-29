@class UIButton, NSString, UIView;

@interface AWEMVChannelPlayerCardFullScreenElement : AWEMVChannelPlayerCardBaseElement <AWELandscapeFeedViewControllerDelegate, UIViewControllerTransitioningDelegate, AWEIoniaTransitionAnimatorDataSource, AWELandscapeTransitionOuterContextProvider>

@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) UIView *videoContainerView;
@property (nonatomic) BOOL hasTrackedShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)originVideoPlayerContainerView;
- (id)landscapeTransitionContext;
- (void)didEnterLandscapeWithToContext:(id)a0;
- (void)willExitLandscapeWithModel:(id)a0 modelList:(id)a1;
- (void)didExitLandscapeWithFromContext:(id)a0;
- (id)videoPlayerContainerView;
- (long long)preferVideoScaleMode;
- (BOOL)shouldUpdatePlayerWithDifferentModel:(id)a0;
- (id)coverImageForLandscapeTransition;
- (double)landscapeTransitionDuration;
- (long long)preferContentMode;
- (void)quitFromLandscapeFeed:(id)a0;
- (void)landscapeCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2 awemeModel:(id)a3;
- (void)landscapeFeedViewController:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)landscapeFeedViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackToAction:(long long)a2;
- (void)landscapeFeedViewControllerWillStartNextLoop:(id)a0;
- (BOOL)isUsingNewLandscapeTransition;
- (void)configBeforeEnterLandscape;
- (void)willShowActiveViewInVisibleRange;
- (void)handleClickFullScreenButton;
- (void)trackLandscapeEntranceShow;
- (BOOL)isFullScreenButtonShowingInVisibleRange;
- (void)trackLandscapeEntranceClick;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
