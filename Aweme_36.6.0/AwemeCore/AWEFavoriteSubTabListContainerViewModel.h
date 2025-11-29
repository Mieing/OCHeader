@class AWEFavoriteTabItemModel, AWEFavoriteSubTabListTracker, AWEFavoriteTabListDataContext, NSString, UIViewController;
@protocol AWETabListItemViewControllerProtocol;

@interface AWEFavoriteSubTabListContainerViewModel : AWEBaseTabListViewModel <AWEFavoriteContainerLifeCycleProtocol>

@property (retain, nonatomic) AWEFavoriteTabItemModel *superTabItemModel;
@property (retain, nonatomic) AWEFavoriteTabItemModel *currentSelectedTabItemModel;
@property (nonatomic) long long tabStatus;
@property (retain, nonatomic) UIViewController<AWETabListItemViewControllerProtocol> *currentTabViewController;
@property (weak, nonatomic) UIViewController<AWETabListItemViewControllerProtocol> *lastSelectedViewController;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } currentContentOffsetChange;
@property (retain, nonatomic) AWEFavoriteTabListDataContext *dataContext;
@property (retain, nonatomic) AWEFavoriteSubTabListTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)containerViewWillDisappear;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (void)updateWithSuperTabItemModel:(id)a0;
- (void)containerViewWillAppear;
- (long long)tabIndexWithTabType:(unsigned long long)a0;
- (id)getTabItemModelAtIndex:(long long)a0;
- (void)didSelectTabModelAtIndex:(long long)a0 selectedType:(long long)a1 vc:(id)a2;
- (void)visibleItemsWithIndexs:(id)a0;
- (void)exposeItemWithIndex:(long long)a0 exposeType:(unsigned long long)a1;
- (void)hasLayoutAllItems;
- (void)reloadTabItemModel;
- (void)changeContentOffsetIfNeed:(id)a0 lastContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)valideTabContentVC:(id)a0;
- (id)subTabModels;
- (id)getTabItemModelWithType:(unsigned long long)a0;
- (void)refreshCurrentViewControllerIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewDidLoad;

@end
