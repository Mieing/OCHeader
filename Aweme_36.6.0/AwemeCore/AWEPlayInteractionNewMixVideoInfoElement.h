@class UIFont, NSString, AWEUILoadingView, AWEMixSelectSupportManager, AWEAntiAddictedNoticeBarView;
@protocol AWEFeedMixCollectionGuideManagerProtocol;

@interface AWEPlayInteractionNewMixVideoInfoElement : AWEPlayInteractionNewBottomElement <AWEMixBarInPlaceTransitionFromContentProvider>

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *mixVideoInfoBarView;
@property (retain, nonatomic) AWEMixSelectSupportManager *mixSelectManager;
@property (copy, nonatomic) id /* block */ playBackTimeHandler;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) id<AWEFeedMixCollectionGuideManagerProtocol> feedMixCollectionGuideManager;
@property (nonatomic) long long tipType;
@property (retain, nonatomic) UIFont *mixTitleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)videoPlayerWillTrackPlayTime;
- (BOOL)enableMixVideo:(id)a0 referString:(id)a1;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)showRightButton;
- (id)trackMediumPlayListParams;
- (void)trackVideoBottomBarClick:(id)a0 referString:(id)a1;
- (BOOL)shouldAppearWithData:(id)a0;
- (BOOL)shouldUpdateMixVideoInfoBarView:(id)a0;
- (void)updateMixVideoInfoBarView;
- (void)showPrivacyTip;
- (id)trackParamsOnDisplay;
- (void)recoverSpeedIfNeeds;
- (BOOL)enterTransitionOptimizeEnabled;
- (void)noticeTappedWithNextModel:(id)a0 isTappedBar:(BOOL)a1;
- (BOOL)enableSpaceOptimize;
- (void)trackVideoBottomBarShow:(id)a0 referString:(id)a1;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)a0;
- (BOOL)updatedInPastDays:(long long)a0 mixModel:(id)a1;
- (BOOL)shouldUpdateMixVideoInfoBarView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)setupHandler;

@end
