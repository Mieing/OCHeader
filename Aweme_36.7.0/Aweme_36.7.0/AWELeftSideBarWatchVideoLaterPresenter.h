@class AWEWatchVideoLaterDataController, NSArray, AWELeftSideBarWatchVideoLaterContainerView, NSString, AWELeftSideBarWatchVideoLaterConfigModel;

@interface AWELeftSideBarWatchVideoLaterPresenter : AWELeftSideBarBasePresenter <AWELeftSideBarWatchVideoLaterContainerViewDelegate>

@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterConfigModel *config;
@property (retain, nonatomic) AWEWatchVideoLaterDataController *dataController;
@property (copy, nonatomic) NSArray *watchLaterList;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarViewWillDisAppear;
- (void)showReloadAnimation;
- (void)onClickShowAllButton;
- (long long)containerViewNumberOfItemsInSection:(long long)a0;
- (void)onCreateContainerViewCollectionCell:(id)a0 atIndexPath:(id)a1;
- (void)containerViewDidSelectItemAtIndexPath:(id)a0;
- (id)leftSideBarWatchVideoLaterConfigModelForConfigData:(id)a0;
- (void)onShowWatchVideoLaterEntryAnimationNotification:(id)a0;
- (BOOL)enableModule;
- (void)trackWatchLaterButtonShow;
- (void)trackClickItemWithItemId:(id)a0 extraParams:(id)a1;
- (void)trackWatchLaterButtonClick;
- (double)textHeightAtIndexPath:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
