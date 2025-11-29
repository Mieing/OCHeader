@interface AWEFamiliarDetailController : AWEAwemeNewDetailBaseController

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)loadMoreCompletionWithData:(id)a0;
- (void)setViewControllerState;
- (void)viewDidAppear:(BOOL)a0;

@end
