@class AWESearchCachalotLynxPipeline, NSString, AWESearchCachalotWebPipeline, AWESearchScanDataContext;

@interface AWESearchScanResultQuestionViewController : AWESearchScanResultBaseViewController <AWESearchScanResultChildViewControllerProtocol>

@property (retain, nonatomic) AWESearchCachalotLynxPipeline *lynxPipeline;
@property (retain, nonatomic) AWESearchCachalotWebPipeline *webPipeline;
@property (nonatomic) BOOL isFirstQuestionRequest;
@property (nonatomic) long long questionRequestCount;
@property (nonatomic) BOOL shouldForceRequest;
@property (retain, nonatomic) AWESearchScanDataContext *dataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)loadMoreCompletion:(id)a0;
- (id)customFooterTitleWithLink;
- (BOOL)scanQuestionIsFirstRequest;
- (void)requestImageDataWithImage:(id)a0 imageTosURL:(id)a1 queryParmas:(id)a2 isFirstLoad:(BOOL)a3 trackParams:(id)a4;
- (void)refreshCompletion:(id)a0;
- (void)addCustomObserver;
- (void)requestImageDataWithImage:(id)a0 imageTosURL:(id)a1 queryParmas:(id)a2 isFirstLoad:(BOOL)a3 trackParams:(id)a4 forceRefresh:(BOOL)a5;
- (id)getCurDetectionStr;
- (void)adultAuthenticationResultDidReceive:(id)a0;
- (void)setupQuestionLynxCardExtraCommonParams:(id)a0;
- (void)questionSearchWebViewOptimize;
- (void)questionViewReloadWithData:(id)a0 viewModelsReadyBlock:(id /* block */)a1 dataModelsReadyBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)questionViewAppendWithData:(id)a0 viewModelsReadyBlock:(id /* block */)a1 dataModelsReadyBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (double)requestStartTime;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentScrollView;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
