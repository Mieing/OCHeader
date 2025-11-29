@class NSString, AWEMVChannelPageContext;

@interface AWEMVRefreshAdvanceController : AWEDCFeedBaseController <AWEMVDataPluginProtocol>

@property (copy, nonatomic) NSString *fetcherCacheKey;
@property (nonatomic) BOOL hasPreFetch;
@property (nonatomic) unsigned long long checkIndex;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)didReuseCachedFetcher:(id)a0 context:(id)a1;
- (void)requestAdvance;
- (id)getCurrentFetcherAndRemove:(BOOL)a0;
- (void).cxx_destruct;

@end
