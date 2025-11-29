@class NSString, AWEFavoriteFlashMobDataController, UITableView;

@interface AWEFavoriteFlashMobViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEFavoriteFlashMobViewCellDelegate, AWETabListItemViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEFavoriteFlashMobDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContentScrollView;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)loadMoreData;
- (void)refreshDataWithCompletion:(id /* block */)a0;
- (void)favoriteItemChanged:(id)a0;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (void)didClickOnJumpDetail:(id)a0;
- (void)trackPublishNotSelectedFromFlashCollectTab;
- (void)trackPublishSelectedFromFlashCollectTab;
- (id)routerStringForTrendDetailWithModel:(id)a0 enterMethod:(id)a1;
- (id)fullPageUrlWithMusicId:(long long)a0 flashMobId:(id)a1 flashMobText:(id)a2 effectId:(long long)a3 count:(long long)a4 cretorUId:(long long)a5 type:(long long)a6 enterMethod:(id)a7;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)endRefreshing;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)modelAtIndexPath:(id)a0;
- (void)setUpUI;

@end
