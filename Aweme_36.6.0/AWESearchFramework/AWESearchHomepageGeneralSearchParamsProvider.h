@class AWESearchHomePageHybridViewController;

@interface AWESearchHomepageGeneralSearchParamsProvider : AWESearchResultVerticalBaseViewController

@property (weak, nonatomic) AWESearchHomePageHybridViewController *viewController;

+ (id)prefetchID;
+ (id)preRequestManagerWithObject:(id)a0;
+ (id)createRequestWithParams:(id)a0;
+ (id)paramsProviders;
+ (id)requestIdentifier:(id)a0;
+ (id)requestParamsContextWithObject:(id)a0;
+ (id)preNetworkRequestWithParamsContext:(id)a0 object:(id)a1;
+ (BOOL)useParamsProvider;
+ (Class)paramsContextClass;
+ (BOOL)loadMoreUseParamsProvider;
+ (BOOL)switchParamsProvider;
+ (BOOL)loadMoreSwitchParamsProvider;
+ (id)predictIDFromParams:(id)a0;
+ (id)predictTypeFromParams:(id)a0;
+ (id)predictFetchParamsFromParams:(id)a0;

- (id)paramsContext;
- (void).cxx_destruct;

@end
