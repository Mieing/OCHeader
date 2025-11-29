@class NSString, AWEUILoadingView, UICollectionView;

@interface AWEFollowUserRecentUpdateViewController : AWEBaseListViewController <AWERouterViewControllerProtocol, AWEConcernFollowListUnreadCacheMessage, AWEUserMessage>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long totalUnreadCount;
@property (nonatomic) BOOL showFollowEntrance;
@property (nonatomic) BOOL forceAllUnread;
@property (copy, nonatomic) NSString *insertIds;
@property (nonatomic) BOOL enableLoadMore;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)endRefreshingWithNoMoreData;
- (void)backBtnClicked;
- (void)refreshData:(BOOL)a0;
- (void)addBinding;
- (void)configNavigationBar;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (void)trackAccuracyCheckIfNeed;
- (BOOL)needContinueRequestWhenFetchDataFinished;
- (BOOL)isFullCollectionView;
- (void)updateNavigationTitleIfNeededWithUnreadItems:(id)a0;
- (void)updateNavigationTitleWithDeleteItemsCount:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)endRefreshing;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)showLoadingView;
- (void)setupCollectionView:(id)a0;
- (void)addObservers;
- (void)hideLoadingView;

@end
