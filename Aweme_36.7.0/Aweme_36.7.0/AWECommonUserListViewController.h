@class NSString, AWEUILoadingView, UICollectionView;

@interface AWECommonUserListViewController : AWEBaseListViewController

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL refreshing;
@property (copy, nonatomic) NSString *navTitle;

- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)backBtnClicked;
- (void)addBinding;
- (void)configNavigationBar;
- (void).cxx_destruct;
- (id)init;
- (void)endRefreshing;
- (void)viewDidLoad;
- (void)setupUI;
- (void)showLoadingView;
- (void)setupCollectionView:(id)a0;
- (void)hideLoadingView;

@end
