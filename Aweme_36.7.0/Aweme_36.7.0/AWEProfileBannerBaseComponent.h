@class NSString, UIView;
@protocol AWEProfileBannerProtocol, AWEProfilePadServiceProtocol;

@interface AWEProfileBannerBaseComponent : AWEProfileBaseComponent <AWEProfileBannerDelegate, AWEProfileBannerContext, AWEProfileBannerComponentProtocol>

@property (retain, nonatomic) UIView *bannerContainerView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UIView<AWEProfileBannerProtocol> *bannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTopVideoFullScreen;
@property (readonly, nonatomic) BOOL isContrailFullScreen;
@property (readonly, nonatomic) id<AWEProfilePadServiceProtocol> padService;

- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateNavBtnAlpha:(double)a0;
- (void)scrollOffsetYLessThanTopVideoEntryOffsetY;
- (id)profileHeaderVC;
- (double)collectionViewTopMargin;
- (BOOL)isCurrentViewControllerSticky;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)scrollViewBeginDragging;
- (void)updateBannerViewDataWithHeaderContext:(id)a0;
- (double)bannerBottomOverlap;
- (double)introLabelTopOfHeaderView;
- (double)bannerHeightWithoutOverlap;
- (void)updateBannerViewFrame;
- (void)updateBannerViewData;
- (void)refreshBannerWithContentOffsetY:(double)a0;
- (BOOL)getVal_isContrailFullScreen;
- (void)contrailWillEnterFullScreen;
- (void)contrailEnterFullScreenWithFullScreenTopOffsetY:(double)a0 animation:(id /* block */)a1;
- (void)contrailDidFinishedEnterFullScreenWithAnimationSucceed:(BOOL)a0;
- (void)contrailWillLeaveFullScreenWithShowTabBar:(BOOL)a0;
- (void)contrailLeaveFullScreen;
- (void)contrailDidFinishedLeaveFullScreen;
- (void)topVideoDidFinishedEnterFullScreen;
- (void)topVideoDidFinishedLeaveFullScreen;
- (void)topVideoEnterFullScreenWithAnimation:(BOOL)a0 fullScreenTopOffsetY:(double)a1;
- (void)topVideoLeaveFullScreenWithAnimation:(BOOL)a0;
- (void)topVideoWillEnterFullScreen;
- (void)topVideoWillLeaveFullScreen;
- (void)changeHeaderViewBGColor:(id)a0;
- (BOOL)isLightMode;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (unsigned long long)bannerStyle;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)viewDidDisappear;
- (void)onInit;
- (void)viewWillDisappear;

@end
