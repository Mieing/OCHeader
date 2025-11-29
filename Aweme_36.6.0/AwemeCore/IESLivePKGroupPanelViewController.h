@class NSString, UIScrollView, UIView, IESLiveSegmentedControl;
@protocol IESLiveRevenueInteractEntranceProvider, IESHYContainerProtocol;

@interface IESLivePKGroupPanelViewController : IESLiveRevenueInteractPopupViewController <UIScrollViewDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) IESLiveSegmentedControl *segControl;
@property (retain, nonatomic) UIView *pkPanelView;
@property (retain, nonatomic) UIView *mLinkerPanelView;
@property (retain, nonatomic) UIView *seasonPanelView;
@property (retain, nonatomic) UIView *pkExpandNavBar;
@property (retain, nonatomic) UIView *mLinkerExpandNavBar;
@property (retain, nonatomic) UIView *seasonExpandNavBar;
@property (nonatomic) BOOL needForceSegTab;
@property (nonatomic) long long forceSegType;
@property (nonatomic) BOOL needAutoMoveToTab;
@property (nonatomic) long long tabTypeToMove;
@property (nonatomic) long long curSegType;
@property (nonatomic) long long tabLocate;
@property (nonatomic) BOOL viewHasExposed;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridTopBanner;
@property (nonatomic) BOOL pkTabForbidden;
@property (copy, nonatomic) NSString *pkTabForbiddenStr;
@property (retain, nonatomic) id<IESLiveRevenueInteractEntranceProvider> entranceProvider;
@property (retain, nonatomic) UIView *yellowDot;
@property (nonatomic) BOOL isFirstOpenTabView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)setupAccessibilityElements;
- (void)onSetupNavBar:(id)a0;
- (void)setupNormalContentView;
- (void)setupNormalSegControl;
- (void)expandNavBar;
- (void)moveCurrentTabWithType:(long long)a0 animated:(BOOL)a1;
- (void)setupViewsWithCacheData;
- (void)setupTabTypeToMove;
- (void)requestToUpdateTabs;
- (void)recordPanelPresentDuration;
- (double)panelHeightScreenRatio;
- (void)handleBubbleGuideForSeasonTab;
- (void)requestBattleRivalsWithLastTabName:(id)a0 loadType:(long long)a1 needMoveTab:(BOOL)a2;
- (void)setupDefaultTabWithoutRequest:(long long)a0;
- (void)setupPanelDidResponsePanelData:(id)a0 loadType:(long long)a1 needMoveTab:(BOOL)a2;
- (void)setupPKContentViewData:(id)a0 loadType:(long long)a1;
- (void)moveTabAfterRequest;
- (void)forbiddenPKTabWithContent:(id)a0;
- (void)showPKSeasonEntryWith:(id)a0;
- (void)updateYellowDotsForSegments;
- (void)onTabChanged:(long long)a0 animated:(BOOL)a1;
- (void)showExpandNavBar:(long long)a0;
- (void)didSelectedTabWithType:(long long)a0 isManual:(BOOL)a1;
- (void)setupTabType:(long long)a0;
- (void)setNavBarBgViewBackgroundColor:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;

@end
