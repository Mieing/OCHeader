@class AWEAdLiveLandingNavigationBar, NSString, UIView, UIButton;
@protocol IESLivePlayerProtocol;

@interface AWEAdLivePlayableLandingViewController : AWEPlayableWebViewController <AWEPageSheetPresentationPhaseTransitionDelegate, AWEPageSheetPresentationObserving, AWEPageSheetTransitionDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) AWEAdLiveLandingNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *statusBarWhiteBackGround;
@property (nonatomic) BOOL lockVerticalContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewBeginDragOffset;
@property (retain, nonatomic) UIView *interactionView;
@property (retain, nonatomic) UIView *playableHorizonBottomView;
@property (retain, nonatomic) UIButton *playableButton;
@property (retain, nonatomic) UIButton *downloadButton;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadButtonClicked:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })webViewFrameInPlayableAd:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrameInPlayableAd:(id)a0;
- (long long)initialPhaseForPageSheetPresentation:(id)a0;
- (void)pageSheetPresentationWillBegin:(id)a0;
- (void)pageSheetPresentationDidEnd:(id)a0 completed:(BOOL)a1;
- (void)pageSheetDismissalDidEnd:(id)a0 completed:(BOOL)a1;
- (BOOL)isHorizonAppearing;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)a0 frameOfPresentedViewForPhase:(long long)a1;
- (void)pageSheetPresentation:(id)a0 animationDuringTransitionToPhase:(long long)a1;
- (void)pageSheetPresentation:(id)a0 didTransitionToPhase:(long long)a1;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (void)foldButtonAction:(id)a0;
- (void)makeAwemeIfNeeded;
- (void)updateConstraintsInHorizon;
- (id)pageSheetPresentationController;
- (void)animateFoldButtonWithPhase:(long long)a0;
- (void)configLiveRoomInfo;
- (void)letsPlay;
- (BOOL)shouldInitialPhaseBeFull;
- (void)tryPauseLiveIfNeed;
- (void)changeToBlackStatusBar:(BOOL)a0;
- (void)setupPlayableBottomViewIfNeed;
- (void)playableButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
