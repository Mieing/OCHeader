@class AWEIMAutoSearchGiphyDataBase, AWEIMAutoSearchGiphyPipelineNode, NSString;

@interface AWEIMAutoSearchGiphyCache : NSObject <AWEUserMessage, AWEIMAutoSearchGiphyCache>

@property (class, readonly, nonatomic) AWEIMAutoSearchGiphyCache *defaultCache;

@property (retain, nonatomic) AWEIMAutoSearchGiphyDataBase *database;
@property (retain, nonatomic) AWEIMAutoSearchGiphyPipelineNode *refreshCacheNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_addObserver;
- (void)p_setupDataBase;
- (void)removeContentWithContext:(id)a0 completion:(id /* block */)a1;
- (void)saveContentWithContext:(id)a0 completion:(id /* block */)a1;
- (void)contentORMWithSearchKey:(id)a0 completion:(id /* block */)a1;
- (void)didClickWithSearchKey:(id)a0 completion:(id /* block */)a1;
- (void)mostRecentClickTimeWithCompletion:(id /* block */)a0;
- (void)invalidSearchKeysWithLimit:(long long)a0 cacheExpireInterval:(long long)a1 extraSearchKeysBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)deleteContentBeforeTimestamp:(double)a0;
- (void)deleteContentWithQueries:(id)a0 beforeTimestamp:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
