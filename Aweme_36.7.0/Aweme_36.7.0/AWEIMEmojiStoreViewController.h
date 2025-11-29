@class AWEIMExpandCollectionListModel, UIView, NSArray, NSString, AWEIMEmojiResourcesListHotKeyword, NSDictionary, UITableView, AWEEmojiStoreRecommendResourcesInfo;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMEmojiStoreViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEIMEmojiStoreTableViewCellDelegate, AWEEmojiStoreSearchTableViewCellDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *emojiTable;
@property (retain, nonatomic) UIView *bgContainerView;
@property (retain, nonatomic) NSArray *emojiPackages;
@property (retain, nonatomic) AWEIMExpandCollectionListModel *bannerListModel;
@property (retain, nonatomic) AWEIMEmojiResourcesListHotKeyword *hotKeywords;
@property (retain, nonatomic) AWEEmojiStoreRecommendResourcesInfo *currentFetchResponse;
@property (weak, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSDictionary *routeParams;
@property (copy, nonatomic) NSDictionary *imBizTrackCommonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__setupNavigationBar;
- (void)didClickSearchBar;
- (void)__setUPUIs;
- (void)__addEmojiTable;
- (void)__loadMoreEmojiPackages;
- (void)__didClickBack;
- (void)__reloadUI;
- (void)__resetEmptyBackgroundTipView;
- (void)__endRefreshing;
- (void)emojiStoreCell:(id)a0 didClickAddPackage:(id)a1;
- (void)__populateFirstBatchData;
- (void)__fetchSearchHotKeywords;
- (void)__didClickMyEmoji;
- (void)__formatBannersWithBanner:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
