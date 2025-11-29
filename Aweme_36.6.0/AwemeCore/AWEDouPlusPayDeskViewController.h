@class NSString, AWEUITextLoadingView, AWEDouPlusPayDeskCoreView, AWEDouPlusPayDeskViewModel, AWEIAPStoreManager;

@interface AWEDouPlusPayDeskViewController : AWEDouPlusContainerViewController <AWEIAPStoreManagerDelegate, AWERouterViewControllerProtocol, AWEDouPlusPayDeskCoreViewDelegate>

@property (retain, nonatomic) AWEDouPlusPayDeskCoreView *deskCoreView;
@property (retain, nonatomic) AWEDouPlusPayDeskViewModel *viewModel;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) AWEIAPStoreManager *iapStoreManager;
@property (nonatomic) BOOL isPaySuccess;
@property (nonatomic) BOOL isPaying;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL shouldBackToLastPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)dismissLoadingView;
- (double)coreAreaHeight;
- (void)dismissFromParentViewController;
- (void)confirmPayAction;
- (void)dismissByPaySuccess:(BOOL)a0;
- (void)didFinishProduct:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
