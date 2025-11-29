@class NSString, AWEDouPlusRechargeCoreView, AWEDouPlusRechargeViewModel, AWEUITextLoadingView, AWEDouPlusRechargeEmptyView, AWEIAPStoreManager, AWEDouPlusCouponListViewModel, NSArray;

@interface AWEDouPlusRechargeViewController : AWEDouPlusContainerViewController <AWEIAPStoreManagerDelegate, AWEDouPlusRechargeCoreViewDelegate, AWEDouPlusRechargeEmptyViewDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEDouPlusRechargeCoreView *rechargeCoreView;
@property (retain, nonatomic) AWEDouPlusRechargeEmptyView *emptyView;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (copy, nonatomic) NSString *payNumberString;
@property (nonatomic) BOOL isPaySuccess;
@property (nonatomic) BOOL isPaying;
@property (retain, nonatomic) AWEDouPlusRechargeViewModel *viewModel;
@property (retain, nonatomic) AWEDouPlusCouponListViewModel *couponListViewModel;
@property (retain, nonatomic) AWEIAPStoreManager *iapStoreManager;
@property (copy, nonatomic) NSArray *douPlusWebVCList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)dismissLoadingView;
- (void)setupBinding;
- (void)setupNavigationBarActionHandler;
- (void)dismissByPaySuccess:(BOOL)a0;
- (void)didFinishProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)updateSelectedProductModel:(id)a0;
- (void)cickDouPlusCouponAreaAction;
- (void)confirmRechargeAction:(id)a0 couponModel:(id)a1;
- (void)retryRequestAction;
- (void)fetchDouplusChargeOptions;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
