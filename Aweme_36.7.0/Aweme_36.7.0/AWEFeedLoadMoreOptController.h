@interface AWEFeedLoadMoreOptController : AWEBaseController

@property (nonatomic) double lastIndex;
@property (nonatomic) BOOL isLoading;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)alignToCurrentVideoIfNeed;
- (void)alignOrScrollToNextVideoIfNeeded;
- (BOOL)otherViewsShowing;
- (void)scrollViewDidScroll:(id)a0;

@end
