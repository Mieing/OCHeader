@class AWESearchCachalotLynxPipeline, AWESearchClientAIFeatureManager, AWESearchCachalotWebPipeline, NSString, AWESearchScanDataContext;

@interface AWESearchScanResultGeneralViewController : AWESearchScanResultBaseViewController <AWESearchScanResultChildViewControllerProtocol, AWESearchScanResultGeneralViewControllerProtocol>

@property (retain, nonatomic) AWESearchCachalotLynxPipeline *lynxPipeline;
@property (retain, nonatomic) AWESearchCachalotWebPipeline *webPipeline;
@property (retain, nonatomic) AWESearchClientAIFeatureManager *commonFeatureManager;
@property (nonatomic) BOOL shouldForceRequest;
@property (copy, nonatomic) NSString *userTextQuery;
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
- (void)setupCommonFeatureManager;
- (void)triggerCommonFeatureForLoadmoreWithResponse:(id)a0 models:(id)a1;
- (void)triggerSearchCommonFeatureWithSearchTime:(double)a0 response:(id)a1;
- (BOOL)enableSearchCommonBaseFeatureClient;
- (void)requestImageDataWithImage:(id)a0 imageTosURL:(id)a1 queryParmas:(id)a2 isFirstLoad:(BOOL)a3 trackParams:(id)a4;
- (BOOL)isSearchImageTextStatus;
- (void)refreshCompletion:(id)a0;
- (void)addCustomObserver;
- (void)requestImageDataWithImage:(id)a0 imageTosURL:(id)a1 queryParmas:(id)a2 isFirstLoad:(BOOL)a3 trackParams:(id)a4 forceRefresh:(BOOL)a5;
- (BOOL)enableNewScanSmartPostFeature;
- (void)setupCustomLynxCardExtraCommonParams:(id)a0;
- (void)updateClientEmptySearchTrackFromResponseParams:(id)a0;
- (id)queryInfoWithResponse:(id)a0;
- (id)getCurDetectionStr;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentScrollView;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
