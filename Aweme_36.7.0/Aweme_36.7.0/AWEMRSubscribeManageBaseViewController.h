@interface AWEMRSubscribeManageBaseViewController : AWEBaseListViewController

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)backBtnClick;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (void)bindViewModel;
- (void)bindEvent;
- (void)themeDidChanged;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
