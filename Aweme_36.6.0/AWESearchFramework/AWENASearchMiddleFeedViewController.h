@class NSString, AWESearchCachalotCardPipeline;

@interface AWENASearchMiddleFeedViewController : AWESearchMiddleBaseViewController <CachalotMessageHandler>

@property (retain, nonatomic) AWESearchCachalotCardPipeline *naPipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)handleMessage:(id)a0 callback:(id /* block */)a1;
- (void)registerBridge;
- (void)sendHistoryLiveTagRequest;
- (id)initWithRouterModel:(id)a0;
- (BOOL)enableGSPrefetch;
- (void)fetchGuessedSearchKeyword;
- (id)getStringArrayFromString:(id)a0;
- (void)p_reloadHistory;
- (id)p_fetchHistoryWords;
- (id)getMiddlePageConfig;
- (void)syncHistoryIfNeeded;
- (void)p_sendHotListRequest;
- (void)reloadCachalotView;
- (BOOL)enableMiddlePagePrefetch;
- (id)customGenerateCachalotView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
