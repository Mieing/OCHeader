@class IESLiveWalletMyCoinViewModel, IESLiveWalletMyCoinDataSource, NSDictionary, IESLiveWalletNavigationBar, UIView, UICollectionView, IGListAdapter;

@interface IESLiveWalletMyCoinViewController : UIViewController

@property (copy, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) IESLiveWalletNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESLiveWalletMyCoinDataSource *dataSource;
@property (retain, nonatomic) IESLiveWalletMyCoinViewModel *viewModel;

- (id)initWithTrackInfo:(id)a0;
- (void)trackViewAppear;
- (void)p_updateWalletData;
- (void)trackViewControllerAppear;
- (void)trackViewControllerDisappear;
- (void)p_tapDefaultEmptyView;
- (void)p_updateWithCoinModel:(id)a0 incomeModel:(id)a1;
- (void)collectClientAIChargeFeature;
- (void)p_setupUI;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
