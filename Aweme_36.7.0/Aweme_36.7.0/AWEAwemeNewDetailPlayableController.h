@class AWEPlayableWebViewPreloadManager, NSMutableDictionary;

@interface AWEAwemeNewDetailPlayableController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEPlayableWebViewPreloadManager *playablePreloadManager;
@property (retain, nonatomic) NSMutableDictionary *prerenderAwemes;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)loadPreviousCompletion:(id)a0 error:(id)a1 isHeaderRefreshing:(BOOL)a2;
- (void)preprocessAdAwemes:(id)a0;
- (void)preRenderPlayableWithPreloadIndex:(long long)a0;
- (void)clearPrerenderedPlayableWithIndex:(long long)a0;
- (void)preprocessAdAwemes:(id)a0 fromIndex:(long long)a1;
- (void)preloadAlphaVideoResource:(id)a0;
- (void)preRenderPlayableAwemeIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
