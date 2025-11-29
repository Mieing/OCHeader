@class AWESearchUtility, NSString, AWEGeneralSearchCotDataController, AWESearchGeneralCotLynxPipeline;

@interface AWEGeneralSearchCotViewController : AWESearchResultVerticalBaseViewController

@property (retain, nonatomic) AWEGeneralSearchCotDataController *cotDataController;
@property (nonatomic) BOOL isTypingFinished;
@property (retain, nonatomic) AWESearchGeneralCotLynxPipeline *lynxPipeline;
@property (retain, nonatomic) AWESearchUtility *searchUtility;
@property (copy, nonatomic) id /* block */ cotPanelSearchBlock;
@property (retain, nonatomic) NSString *originKeyword;
@property (retain, nonatomic) NSString *clarifiedQuery;
@property (nonatomic) BOOL userEnableAI;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *lastFeedID;
@property (nonatomic) BOOL hasShowKeyboard;

+ (id)paramsProviders;
+ (BOOL)useParamsProvider;
+ (Class)paramsContextClass;
+ (BOOL)switchParamsProvider;

- (BOOL)loadMoreWithCompletion:(id /* block */)a0;
- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (id)paramsContext;
- (id)customContainerConfig;
- (Class)customDataControllerClass;
- (void)searchCotTypingFinished:(id)a0;
- (void)panelWillDisappear;
- (id)searchDynamicJSBToCachalotContainerWithName:(Class)a0 params:(id)a1;
- (id)cotType;
- (id)cotInfoFromServer;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
