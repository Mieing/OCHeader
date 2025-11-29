@class NSString, UICollectionView, AWELiveVSTabViewModel, AWEUILoadingView, UIView;

@interface AWELiveVSTabViewController : UIViewController <UIScrollViewDelegate, AWEFeedTabItemViewControllerProtocol>

@property (retain, nonatomic) UIView *naviBarBackgroundView;
@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWELiveVSTabViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)pauseWithAnimation;
- (void)loadMore;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (id)initWithDataController:(id)a0;
- (void)setupListAdapter;
- (void)initLoadData;
- (void)showLoading:(BOOL)a0;
- (void)updateViewWithNetworkError:(id)a0;
- (void)refreshWithComplete:(id /* block */)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)stop;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
