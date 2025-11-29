@class AWEPadLeftSideBarWatchHistoryDynamicDataModel, AWEPadLeftSideBarWatchHistoryContainerView, NSDictionary, AWEPadLeftSideBarWatchHistoryConfigModel, NSArray, NSMutableArray, NSString;

@interface AWEPadLeftSideBarWatchHistoryPresenter : AWELeftSideBarBasePresenter <AWEPadLeftSideBarWatchHistoryContainerViewDelegate>

@property (retain, nonatomic) NSDictionary *dataTypeToCellControllerMap;
@property (retain, nonatomic) AWEPadLeftSideBarWatchHistoryContainerView *containerView;
@property (nonatomic) BOOL loadCache;
@property (retain, nonatomic) AWEPadLeftSideBarWatchHistoryDynamicDataModel *dynamicDataModel;
@property (retain, nonatomic) NSMutableArray *cellControllerArray;
@property (retain, nonatomic) AWEPadLeftSideBarWatchHistoryConfigModel *config;
@property (retain, nonatomic) NSArray *mixVideoModelsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarViewDynamicModuleRequestDataComplete:(id)a0 isCacheData:(BOOL)a1;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)onLeftSideBarOpen;
- (BOOL)needLoadPresenter;
- (void)onClickShowAllButton;
- (long long)containerViewNumberOfItemsInSection:(long long)a0;
- (void)onCreateContainerViewCollectionCell:(id)a0 atIndexPath:(id)a1;
- (void)containerViewDidSelectItemAtIndexPath:(id)a0;
- (BOOL)enableModule;
- (void)updateDynamicData:(id)a0 isCacheData:(BOOL)a1;
- (void)trackWatchHistoryModuleClick:(id)a0 itemId:(id)a1 extraParams:(id)a2;
- (void)transferToHistoryInnerFeedDetailViewController:(id)a0;
- (id)padLeftSideBarWatchHistoryConfigModelForConfigData:(id)a0;
- (void)trackWatchHistoryModuleShow:(BOOL)a0;
- (void)buildCellControllers:(id)a0;
- (void).cxx_destruct;

@end
