@class NSString, AWEDCFeedInnerCacheConfig, AWEDCFeedInnerCacheManager;

@interface AWEDCFeedInnerCacheController : AWEDCFeedBaseController <AWEDCFeedInnerCacheProtocol>

@property (retain, nonatomic) AWEDCFeedInnerCacheManager *manager;
@property (weak, nonatomic) AWEDCFeedInnerCacheConfig *innerCacheConfig;
@property (nonatomic) BOOL loadCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)classNameWithReferString;
- (void)loadInnerCacheDataCompletion:(id /* block */)a0;
- (void)cacheModelAddTag:(id)a0;
- (void)removeConsumedCacheModelWithItemID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
