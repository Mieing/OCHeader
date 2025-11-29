@class NSMutableDictionary, UITableViewCell, NSString, AWEPlayableWebViewPreloadManager;
@protocol AWEFeedTableViewCellProtocol;

@interface AWEFeedPlayableController : AWEBaseController <AWEFeedControllerProtocol>

@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *currentCell;
@property (retain, nonatomic) NSMutableDictionary *innerPrerenderAwemes;
@property (nonatomic) BOOL isInitialFetch;
@property (retain, nonatomic) AWEPlayableWebViewPreloadManager *playablePreloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)preprocessAdAwemes:(id)a0;
- (void)preRenderPlayableWithPreloadIndex:(long long)a0;
- (void)clearPrerenderedPlayableWithIndex:(long long)a0;
- (void)preprocessAdAwemes:(id)a0 fromIndex:(long long)a1;
- (void)preloadAlphaVideoResource:(id)a0;
- (void)preRenderPlayableAwemeIfNeed:(id)a0;
- (void)handleInteractiveVideo:(id)a0;
- (void)preRenderSceneLynxCardIfNeeded:(long long)a0;
- (id)interactiveStatusModelWithAweme:(id)a0;
- (void)removePrerenderedAweme:(id)a0;
- (void)preRenderPlayableAweme:(id)a0 url:(id)a1;
- (void)resetInteractiveVideo:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)clear;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
