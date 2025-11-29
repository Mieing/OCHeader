@class NSString, AWEUILoadingView, DUXVacantView;

@interface AWEMateListContainerViewController : AWEBaseListViewController <AWERouterViewControllerProtocol, UIScrollViewDelegate, AWECollectionViewSectionIndexDelegate>

@property (nonatomic) BOOL isSearchBarEditing;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXVacantView *netErrorVacantView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)bindViewModel;
- (void)hideErrorView;
- (void)bindEvent;
- (void)perf_setExtra;
- (void)trackSearchFriendsWithKeyword:(id)a0;
- (void)updateSearchBarPlaceholder;
- (void)reloadIndexView:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)showLoadingView;
- (void)showErrorView;
- (void)setupCollectionView:(id)a0;
- (void)hideLoadingView;

@end
