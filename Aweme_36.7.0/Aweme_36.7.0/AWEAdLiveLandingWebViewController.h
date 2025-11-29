@class AWEAdLiveLandingNavigationBar, NSDictionary, NSString, UIView;
@protocol AWELiveFloatOnTopManagerProtocol;

@interface AWEAdLiveLandingWebViewController : AWEAdWebViewController <AWEPageSheetPresentationPhaseTransitionDelegate, AWEPageSheetPresentationObserving, UIScrollViewDelegate, AWEPageSheetTransitionDelegate, AWEPageSheetScrollControlDelegate, AWELiveFloatOnTopInitialFrame, AWELiveCommercialFloatViewTag> {
    NSString *_gameDetailUrl;
    BOOL _isFullScreen;
}

@property (retain, nonatomic) AWEAdLiveLandingNavigationBar *navigationBar;
@property (retain, nonatomic) id<AWELiveFloatOnTopManagerProtocol> floatingLiveView;
@property (retain, nonatomic) UIView *statusBarWhiteBackGround;
@property (nonatomic) BOOL statusBarDimmed;
@property (nonatomic) BOOL lockVerticalContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewBeginDragOffset;
@property (copy, nonatomic) NSDictionary *gameTrackerInfo;
@property (nonatomic) BOOL enableLiveScreenAutoAdaption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (id)aweui_emptyPageBelowView;
- (long long)initialPhaseForPageSheetPresentation:(id)a0;
- (void)pageSheetPresentationWillBegin:(id)a0;
- (void)pageSheetPresentationDidEnd:(id)a0 completed:(BOOL)a1;
- (void)pageSheetDismissalDidEnd:(id)a0 completed:(BOOL)a1;
- (BOOL)isHorizonAppearing;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)a0 frameOfPresentedViewForPhase:(long long)a1;
- (void)pageSheetPresentation:(id)a0 willTransitionToPhase:(long long)a1;
- (void)pageSheetPresentation:(id)a0 animationDuringTransitionToPhase:(long long)a1;
- (void)pageSheetPresentation:(id)a0 didTransitionToPhase:(long long)a1;
- (BOOL)canScrollToFullScreen;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (void)foldButtonAction:(id)a0;
- (void)updateTopBannerPositionWithOffset:(double)a0;
- (void)animateInTopBanner;
- (void)animateOutTopBanner;
- (void)updateLandingPageContent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveFloatOnTopInitialFrameForMediaSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isCommercialFloatView;
- (void)makeAwemeIfNeeded;
- (void)registGameHandler;
- (void)gameDetailButtonAction:(id)a0;
- (void)trackGameDetailButtonWithClick:(BOOL)a0;
- (void)updateConstraintsInHorizon;
- (id)pageSheetPresentationController;
- (void)animateFloatingLiveView:(BOOL)a0;
- (void)animateFoldButtonWithPhase:(long long)a0;
- (void)updateContentInsetsWithPresentationController:(id)a0 phase:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewDidFinishLoad:(id)a0;

@end
