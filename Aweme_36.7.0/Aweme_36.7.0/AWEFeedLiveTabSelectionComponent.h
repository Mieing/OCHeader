@class NSString, TabItem, NSMutableArray, AWEFeedLiveTabSelectionView;

@interface AWEFeedLiveTabSelectionComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabViewControllerLifeCycleAction, AWEFeedLiveTabSelectionAction, AWEFeedLiveTabSelectionService>

@property (nonatomic) BOOL tabDataChanged;
@property (retain, nonatomic) AWEFeedLiveTabSelectionView *tabSelectionView;
@property (retain, nonatomic) AWEFeedLiveTabSelectionView *tabSelectionTopView;
@property (retain, nonatomic) TabItem *currentSelectedTabItem;
@property (retain, nonatomic) NSMutableArray *tabData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentStatus;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)feedLiveTabWillAppear:(id)a0;
- (id)selectedTabItem;
- (id)tabItemAtTabID:(long long)a0;
- (id)tabItemAtIndex:(long long)a0;
- (long long)tabItemIndexAtTabID:(long long)a0;
- (BOOL)tabDataHasChanged;
- (BOOL)currentTabHasChanged;
- (id)tabIDsArray;
- (void)updateComponentWith:(id)a0;
- (void)bindService;
- (double)heightOfComponent;
- (void)handleSelectedTabWithTabData:(id)a0;
- (BOOL)tabDataChangedWithTabData:(id)a0;
- (void)showTopTabView:(BOOL)a0;
- (void)tabModuleShowWithItem:(id)a0 order:(unsigned long long)a1 style:(long long)a2;
- (void)changeTabTo:(id)a0 index:(unsigned long long)a1 style:(long long)a2;
- (void)tabModuleSlideWithMaxTabOrder:(unsigned long long)a0 total:(unsigned long long)a1 style:(long long)a2;
- (void)reportModuleShowTracker:(id)a0 style:(long long)a1;
- (void)setupTopTabView;
- (void)tabModuleClickWithItem:(id)a0 selectedItemIndex:(unsigned long long)a1 style:(long long)a2;
- (void)syncSelectedTabItem:(id)a0 style:(long long)a1;
- (void)tryToLandingToSpecifcTabWithParams:(id)a0 source:(id)a1;
- (id)tabModuleParamsWithItem:(id)a0 index:(unsigned long long)a1 style:(long long)a2;
- (long long)numberOfItems;
- (double)topPadding;
- (void).cxx_destruct;
- (id)contentView;
- (id)init;
- (void)setupView;
- (void)becomeInactive;

@end
