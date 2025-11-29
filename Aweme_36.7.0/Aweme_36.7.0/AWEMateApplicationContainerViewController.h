@class NSString, NSDictionary, DUXVacantView, AWEUILoadingView;

@interface AWEMateApplicationContainerViewController : AWEBaseListViewController

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXVacantView *netErrorVacantView;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtra;

- (void)setupHeader;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (void)bindEvent;
- (void)setupTrackerParam;
- (void)showNetErrorView;
- (void)endLoadMoreFooterRefreshing;
- (void)showLoadMoreFooter;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupFooter;
- (void)setupCollectionView:(id)a0;
- (void)removeErrorView;

@end
