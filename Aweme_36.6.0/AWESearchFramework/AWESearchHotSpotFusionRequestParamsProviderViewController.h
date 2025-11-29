@class NSString;

@interface AWESearchHotSpotFusionRequestParamsProviderViewController : UIViewController <AWESearchRequestParamsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsCenter;
+ (id)paramsProviders;
+ (BOOL)useParamsProvider;
+ (Class)paramsContextClass;
+ (BOOL)pullRefreshUseParamsProvider;
+ (BOOL)loadMoreUseParamsProvider;
+ (BOOL)switchParamsProvider;
+ (BOOL)pullRefreshSwitchParamsProvider;
+ (BOOL)loadMoreSwitchParamsProvider;
+ (id)preFetchParamsContextWithRouterModel:(id)a0 extraLogParams:(id)a1;

- (id)paramsContext;
- (void)paramsContextDidReady:(id)a0;
- (void)paramsDidCollected:(id)a0 params:(id)a1;

@end
