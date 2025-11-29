@interface AWESearchParamsProvidersUtil : NSObject

+ (id)enterFromWithContext:(id)a0;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)buildSendBackDocsForRequest;
+ (id)requestAigcParamsContextWithDataController:(id)a0 extraParams:(id)a1 preRequestCustomParams:(id)a2;
+ (id)AIGCSearchParamsProviders;
+ (id)requestAISearchResultParamsContextWithExtraParams:(id)a0;
+ (id)parseSendBackInfo:(id)a0;
+ (id)generalSearchParamsProviders;
+ (id)afterFeedContinuePlayParamsProviders;
+ (id)generalRequestParamsContextWithTargetVC:(id)a0 extraLogParams:(id)a1 isRepeatPreRequest:(BOOL)a2 generalContext:(id)a3 VCDidAppear:(BOOL)a4;
+ (BOOL)shouldStoreHistoryWithContext:(id)a0 isLifeService:(BOOL)a1;
+ (id)doubleColumnModeWithContext:(id)a0 searchSource:(id)a1;
+ (BOOL)isFromECommerce:(id)a0;
+ (id)generalRequestParamsContextWithSearchhomePageVC:(id)a0 extraLogParams:(id)a1 isRepeatPreRequest:(BOOL)a2 generalContext:(id)a3 VCDidAppear:(BOOL)a4 generalDataController:(id)a5;
+ (id)AwemeSSGeneralParamsProviders;
+ (BOOL)fixSearchSourceError;
+ (void)handleSearchParamsProviderDiffers:(id)a0 enterFrom:(id)a1 searchSource:(id)a2 keyword:(id)a3 tag:(id)a4 isLoadMore:(BOOL)a5 isPullRefresh:(BOOL)a6 extraParams:(id)a7;
+ (id)ignoreParamProviderDifferKeys;
+ (id)paramsProviderDiffExtraParams;
+ (BOOL)isPrefixEqual:(id)a0 stringB:(id)a1;
+ (void)handleSearchParamsProviderDiffers:(id)a0 enterFrom:(id)a1 searchSource:(id)a2 keyword:(id)a3 tag:(id)a4 isLoadMore:(BOOL)a5 isPullRefresh:(BOOL)a6;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;

@end
