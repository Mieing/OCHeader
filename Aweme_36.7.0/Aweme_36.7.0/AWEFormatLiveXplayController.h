@interface AWEFormatLiveXplayController : AWEAwemeFeedBaseController <AWEFeedControllerProtocol>

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)refreshCompletionBeforeReload:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginLoadMore;
- (id)init;
- (void)dealloc;

@end
