@class AWEFavoriteOptimizationTabManager, NSString, NSArray, AWEFavoriteTabListTracker, AWEFavoriteTabListDataContext, NSMutableSet, UIViewController, AWEFavoriteTabItemModel;
@protocol AWEProfileRedDotNodeModelProtocol;

@interface AWEFavoriteTabListContainerViewModel : AWEBaseTabListViewModel <AWEProfileRedDotShowViewProtocol, AWEFavoriteContainerLifeCycleProtocol>

@property (retain, nonatomic) AWEFavoriteTabListTracker *tracker;
@property (nonatomic) long long tabStatus;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL hasFirstAppear;
@property (nonatomic) BOOL isDataRequestFinish;
@property (nonatomic) BOOL shouldAutoLanding;
@property (nonatomic) BOOL hasViewAppearedInOthersPage;
@property (retain, nonatomic) AWEFavoriteOptimizationTabManager *tabManager;
@property (copy, nonatomic) NSArray *modelsArray;
@property (copy, nonatomic) NSArray *lastExposeArray;
@property (nonatomic) BOOL hasGrouponTrackShow;
@property (retain, nonatomic) NSMutableSet *hasShowTrackedSecondTabSet;
@property (nonatomic) BOOL hasReportSubItems;
@property (nonatomic) unsigned long long lastSelectedTabType;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentRedDotModel;
@property (retain, nonatomic) AWEFavoriteTabItemModel *currentSelectedTabModel;
@property (nonatomic) long long currentSelectedIndex;
@property (retain, nonatomic) UIViewController *currentTabViewController;
@property (retain, nonatomic) AWEFavoriteTabListDataContext *dataContext;
@property (copy, nonatomic) id /* block */ segmentControlUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)clearFavoriteSecondTabNodeForType:(id)a0;
- (unsigned long long)favoriteSecondTabRedDotTypeWithModel:(id)a0;
- (BOOL)isFavoriteSecondTabRedDotShowWithModel:(id)a0;
- (void)containerViewWillDisappear;
- (void)containerViewDidAppear;
- (BOOL)shouldShowRedDot:(id)a0;
- (void)containerViewDidDisappear;
- (void)refreshRedDotWithModel:(id)a0;
- (void)containerViewWillAppear;
- (long long)tabIndexWithTabType:(unsigned long long)a0;
- (id)getTabItemModelAtIndex:(long long)a0;
- (void)didSelectTabModelAtIndex:(long long)a0 selectedType:(long long)a1 vc:(id)a2;
- (void)visibleItemsWithIndexs:(id)a0;
- (void)exposeItemWithIndex:(long long)a0 exposeType:(unsigned long long)a1;
- (void)hasLayoutAllItems;
- (id)getShowBubbleTextAtIndex:(long long)a0 exposeType:(unsigned long long)a1;
- (void)didShowBubbleAtIneddx:(long long)a0;
- (void)updateRedDotNodeIfNeed:(id)a0 hasRedDot:(BOOL)a1;
- (void)loadCacheDataForFirstAppear;
- (void)fetchTabListData;
- (void)clearSecondTabRedNodeModel:(id)a0;
- (id)getBuinessBubbleText:(id)a0 exposeType:(unsigned long long)a1;
- (id)tabItemWithTabType:(unsigned long long)a0;
- (unsigned long long)updateLandingTabWithParams:(id)a0;
- (BOOL)needUpdateArray:(id)a0 to:(id)a1;
- (unsigned long long)landingSceneWithParams:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;

@end
