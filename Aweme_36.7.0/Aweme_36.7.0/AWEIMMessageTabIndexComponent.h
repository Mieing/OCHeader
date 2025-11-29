@class NSArray, NSString, NSDictionary, UIView, AWEIMTabIndicatorModel, AWEIMTabIndicatorView;
@protocol AWEIMMessageTabCampaignInterface, AWEIMTabSkeletonInterface, AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabIndexComponent : AWEIMComponentBase <AWEIMMessageTabNaviTitleViewProvider, AWEIMMessageTabNaviBarAction, AWEIMTabIndicatorViewDelegate, AWEIMTabIndicatorViewDataSource, AWEIMMessageTabIndexInterface, AWEIMMessageTabViewControllerAction>

@property (retain, nonatomic) UIView *pinIndexContainer;
@property (retain, nonatomic) AWEIMTabIndicatorView *indicatorView;
@property (retain, nonatomic) NSArray *dataLists;
@property (retain, nonatomic) AWEIMTabIndicatorModel *currentIndicatorModel;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMMessageTabCampaignInterface> campaignService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabService;
@property (copy, nonatomic) NSString *consumedRouterParamsPushId;
@property (copy, nonatomic) NSDictionary *subTab_IndicatorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)handleEnterMessageTabEvent;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)lastRouterActionDidUpdate;
- (void)navigationBarDidUpdateTitleView;
- (BOOL)canShowCurrentTitleView;
- (id)currentNavigationTitleView;
- (void)updateProgress:(double)a0 offset:(double)a1 scrollView:(id)a2;
- (void)updateSelectedIndex:(long long)a0 byScrollView:(id)a1;
- (void)updateChangingSelectedIndex:(long long)a0 byScrollView:(id)a1;
- (void)reloadDataListAfterSkeletonUpdate;
- (id)tabIndexViewForPinHeader;
- (id)currentSelectedTabIndicatorModel;
- (void)trackEnterTabWithModel:(id)a0 isClick:(BOOL)a1 isDefaultLanding:(BOOL)a2;
- (void)trackListEnvTabWithModel:(id)a0;
- (void)__updateSelectedIndexFromRouterParams;
- (id)tabIndicatorViewConfig;
- (void)resetTabIndicatorViewHiearachyWithConfig:(id)a0;
- (void)__updateIsFromPush;
- (id)multiPurposeIndicatorView;
- (double)getUnreadViewGapHeight;
- (id)modelForIndex:(long long)a0 InIndicatorView:(id)a1;
- (void)didSelectedIndex:(long long)a0 from:(long long)a1;
- (void)didLayoutIndicatorView;
- (long long)numberOfItemsInIndicatorView:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;

@end
