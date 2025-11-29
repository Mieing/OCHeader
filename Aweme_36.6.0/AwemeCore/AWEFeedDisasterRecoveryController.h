@class NSString;

@interface AWEFeedDisasterRecoveryController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)fetchDisasterRecoverCacheWithAwemeList:(id)a0 error:(id)a1;
- (void)insertCachedFeedWith:(id)a0 requestError:(id)a1 cacheUseReason:(unsigned long long)a2;
- (void)trackDisasterRecoverCacheResultWithReason:(unsigned long long)a0 cacheCount:(long long)a1 requestError:(id)a2 isSucceed:(BOOL)a3;

@end
